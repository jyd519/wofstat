/*
 * Copyright 1986-1991, 1997-2002 Sun Microsystems, Inc.
 * All rights reserved.  Use is subject to license terms.
 */

/*
 * rpc_com.h, Common definitions for both the server and client side.
 * All for the topmost layer of rpc
 *
 */

#ifndef _RPC_RPCCOM_H
#define	_RPC_RPCCOM_H

#pragma ident	"@(#)rpc_com.h	1.30	02/07/17 SMI"

#ifdef __cplusplus
extern "C" {
#endif

/*
 * File descriptor to be used on xxx_create calls to get default descriptor
 */
#define	RPC_ANYSOCK	-1
#define	RPC_ANYFD	RPC_ANYSOCK
/*
 * The max size of the transport, if the size cannot be determined
 * by other means.
 */
#define	RPC_MAXDATASIZE 9000
#define	RPC_MAXADDRSIZE 1024

/*
 * Maximum size of universal address for INET/INET6 addressing.
 * Computed as INET6_ADDRSTRLEN + (strlen(".255.255") for port)
 */
#define	RPC_INET6_MAXUADDRSIZE 54

/*
 * The type of user of the STREAMS module rpcmod.
 */
#define	RPC_CLIENT	1
#define	RPC_SERVER	2
#define	RPC_TEST	3

#ifdef __STDC__
extern uint_t __rpc_get_t_size(t_scalar_t, t_scalar_t);
extern uint_t __rpc_get_a_size(t_scalar_t);
extern int __rpc_dtbsize(void);
extern struct netconfig *__rpcfd_to_nconf(int, int);
extern int __rpc_matchserv(int, unsigned int);
extern  int  __rpc_get_default_domain(char **);
extern int __rpc_tli_set_options(int, int, int, int); /* internal use only */
#else
extern uint_t __rpc_get_t_size();
extern uint_t __rpc_get_a_size();
extern int __rpc_dtbsize();
extern struct netconfig *__rpcfd_to_nconf();
extern int __rpc_matchserv();
extern  int __rpc_get_default_domain();
extern int __rpc_tli_set_options(); /* internal use only */
#endif

#ifndef _KERNEL

#ifdef __STDC__
bool_t rpc_control(int, void *);
#else
bool_t rpc_control();
#endif

/*
 * rpc_control commands
 */
#define	RPC_SVC_MTMODE_SET	1	/* set MT mode */
#define	RPC_SVC_MTMODE_GET	2	/* get MT mode */
#define	RPC_SVC_THRMAX_SET	3	/* set maximum number of threads */
#define	RPC_SVC_THRMAX_GET	4	/* get maximum number of threads */
#define	RPC_SVC_THRTOTAL_GET	5	/* get total number of threads */
#define	RPC_SVC_THRCREATES_GET	6	/* get total threads created */
#define	RPC_SVC_THRERRORS_GET	7	/* get total thread create errors */
#define	__RPC_CLNT_MINFD_SET	8	/* set min fd used for a clnt handle */
#define	__RPC_CLNT_MINFD_GET	9	/* get min fd used for a clnt handle */
#define	RPC_SVC_USE_POLLFD	10	/* unlimit fd used beyond 1024 */
#define	RPC_SVC_CONNMAXREC_SET	11	/* set COT maximum record size */
#define	RPC_SVC_CONNMAXREC_GET	12	/* get COT maximum record size */
/* EXCLBIND private interface start - for internal use only */
#define	__RPC_SVC_EXCLBIND_SET  13	/* set udp/tcp exclusive port access */
#define	__RPC_SVC_EXCLBIND_GET  14	/* get udp/tcp exclusive port access */
/* EXCLBIND private interface end  - for internal use only */

/* set inter record timeout for COTS RPC */
#define	RPC_SVC_IRTIMEOUT_SET	15

#endif /* !_KERNEL */

#ifdef __cplusplus
}
#endif

#endif /* _RPC_RPCCOM_H */