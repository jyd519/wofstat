/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _RWALL_H_RPCGEN
#define	_RWALL_H_RPCGEN

#include <rpc/rpc.h>
#ifndef _KERNEL
#include <synch.h>
#include <thread.h>
#endif /* !_KERNEL */

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Copyright (c) 1991 by Sun Microsystems, Inc.
 */
/* from rwall.x */

/*
 * Remote write-all ONC service
 */


typedef char *wrapstring;


#if defined(__STDC__) || defined(__cplusplus)
enum clnt_stat rwall(char *, char *);
#else
enum clnt_stat rwall();
#endif


#define	WALLPROG	100008
#define	WALLVERS	1

#if defined(__STDC__) || defined(__cplusplus)
#define	WALLPROC_WALL	2
extern  enum clnt_stat wallproc_wall_1(wrapstring *, void *, CLIENT *);
extern  bool_t wallproc_wall_1_svc(wrapstring *, void *, struct svc_req *);
extern int wallprog_1_freeresult(SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define	WALLPROC_WALL	2
extern  enum clnt_stat wallproc_wall_1();
extern  bool_t wallproc_wall_1_svc();
extern int wallprog_1_freeresult();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_wrapstring(XDR *, wrapstring*);

#else /* K&R C */
extern bool_t xdr_wrapstring();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_RWALL_H_RPCGEN */