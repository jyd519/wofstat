/*
 * Copyright (c) 1998, 2012, Oracle and/or its affiliates. All rights reserved.
 */

#ifndef	_SYS_TASKQ_H
#define	_SYS_TASKQ_H

#pragma ident	"@(#)taskq.h	1.7	12/01/23 SMI"

#include <sys/types.h>
#include <sys/thread.h>

#ifdef	__cplusplus
extern "C" {
#endif

#define	TASKQ_NAMELEN	31

typedef struct taskq taskq_t;
typedef uintptr_t taskqid_t;
typedef void (task_func_t)(void *);

struct proc;

/*
 * Public flags for taskq_create(): bit range 0-15
 */
#define	TASKQ_PREPOPULATE	0x0001	/* Prepopulate with threads and data */
#define	TASKQ_CPR_SAFE		0x0002	/* Use CPR safe protocol */
#define	TASKQ_DYNAMIC		0x0004	/* Use dynamic thread scheduling */
#define	TASKQ_THREADS_CPU_PCT	0x0008	/* number of threads as % of ncpu */
#define	TASKQ_DC_BATCH		0x0010	/* Taskq uses SDC in batch mode */
#define	TASKQ_PUSHPAGE		0x0020	/* Threads can tap pageout reserve */

/*
 * Flags for taskq_dispatch. TQ_SLEEP/TQ_NOSLEEP should be same as
 * KM_SLEEP/KM_NOSLEEP.
 */
#define	TQ_SLEEP	0x00	/* Can block for memory */
#define	TQ_NOSLEEP	0x01	/* cannot block for memory; may fail */
#define	TQ_NOQUEUE	0x02	/* Do not enqueue if can't dispatch */
#define	TQ_NOALLOC	0x04	/* cannot allocate memory; may fail */
#define	TQ_FRONT	0x08	/* Put task at the front of the queue */

#ifdef _KERNEL

extern taskq_t *system_taskq;

extern void	taskq_init(void);
extern void	taskq_mp_init(void);

extern taskq_t	*taskq_create(const char *, int, pri_t, int, int, uint_t);
extern taskq_t	*taskq_create_instance(const char *, int, int, pri_t, int,
    int, uint_t);
extern taskq_t	*taskq_create_proc(const char *, int, pri_t, int, int,
    struct proc *, uint_t);
extern taskq_t	*taskq_create_sysdc(const char *, int, int, int,
    struct proc *, uint_t, uint_t);
extern taskqid_t taskq_dispatch(taskq_t *, task_func_t, void *, uint_t);
extern void	nulltask(void *);
extern void	taskq_destroy(taskq_t *);
extern void	taskq_wait(taskq_t *);
extern void	taskq_suspend(taskq_t *);
extern int	taskq_suspended(taskq_t *);
extern void	taskq_resume(taskq_t *);
extern int	taskq_member(taskq_t *, kthread_t *);

#endif	/* _KERNEL */

#ifdef	__cplusplus
}
#endif

#endif	/* _SYS_TASKQ_H */