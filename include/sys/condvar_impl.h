/*
 * Copyright 2009 Sun Microsystems, Inc.  All rights reserved.
 * Use is subject to license terms.
 */

#ifndef _SYS_CONDVAR_IMPL_H
#define	_SYS_CONDVAR_IMPL_H

#pragma ident	"@(#)condvar_impl.h	1.5	09/01/06 SMI"

/*
 * Implementation-private definitions for condition variables
 */

#ifndef	_ASM
#include <sys/types.h>
#include <sys/thread.h>
#endif	/* _ASM */

#ifdef	__cplusplus
extern "C" {
#endif

#ifndef	_ASM

/*
 * Condtion variables.
 */

typedef struct _condvar_impl {
	ushort_t	cv_waiters;
} condvar_impl_t;

#define	CV_HAS_WAITERS(cvp)	(((condvar_impl_t *)(cvp))->cv_waiters != 0)

#endif	/* _ASM */


typedef	struct	cvwaitlock_s	{
	kmutex_t	cvw_lock;
	kcondvar_t	cvw_waiter;
	int		cvw_refcnt;
} cvwaitlock_t;


#define	CVW_INIT(_c)		{				\
	mutex_init(&(_c)->cvw_lock, NULL, MUTEX_DRIVER, NULL);	\
	cv_init(&(_c)->cvw_waiter, NULL, CV_DRIVER, NULL);	\
	(_c)->cvw_refcnt = 0;					\
}

#define	CVW_ENTER_READ(_c)	{				\
	mutex_enter(&(_c)->cvw_lock);				\
	while ((_c)->cvw_refcnt < 0)				\
		cv_wait(&((_c)->cvw_waiter), &(_c)->cvw_lock);	\
	(_c)->cvw_refcnt++;					\
	mutex_exit(&(_c)->cvw_lock);				\
}

#define	CVW_ENTER_WRITE(_c)	{				\
	mutex_enter(&(_c)->cvw_lock);				\
	while ((_c)->cvw_refcnt != 0)				\
		cv_wait(&((_c)->cvw_waiter), &(_c)->cvw_lock);	\
	(_c)->cvw_refcnt = -1;					\
	mutex_exit(&(_c)->cvw_lock);				\
}

#define	CVW_EXIT_READ(_c)	{			\
	mutex_enter(&(_c)->cvw_lock);			\
	ASSERT((_c)->cvw_refcnt > 0);			\
	if ((--((_c)->cvw_refcnt)) == 0)		\
		cv_broadcast(&(_c)->cvw_waiter);	\
	mutex_exit(&(_c)->cvw_lock);			\
}

#define	CVW_EXIT_WRITE(_c)	{			\
	mutex_enter(&(_c)->cvw_lock);			\
	ASSERT((_c)->cvw_refcnt == -1);			\
	(_c)->cvw_refcnt = 0;				\
	cv_broadcast(&(_c)->cvw_waiter);		\
	mutex_exit(&(_c)->cvw_lock);			\
}

#define	CVW_WRITE_TO_READ(_c)	{			\
	mutex_enter(&(_c)->cvw_lock);			\
	ASSERT((_c)->cvw_refcnt == -1);			\
	(_c)->cvw_refcnt = 1;				\
	cv_broadcast(&(_c)->cvw_waiter);		\
	mutex_exit(&(_c)->cvw_lock);			\
}

#define	CVW_DESTROY(_c)	{				\
	mutex_destroy(&(_c)->cvw_lock);			\
	cv_destroy(&(_c)->cvw_waiter);			\
}

#ifdef	__cplusplus
}
#endif

#endif	/* _SYS_CONDVAR_IMPL_H */