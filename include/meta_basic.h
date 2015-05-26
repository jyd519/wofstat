/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _META_BASIC_H_RPCGEN
#define	_META_BASIC_H_RPCGEN

#include <rpc/rpc.h>
#ifndef _KERNEL
#ifdef _REENTRANT
#include <synch.h>
#endif	/* _REENTRANT */
#ifdef _REENTRANT
#include <thread.h>
#endif	/* _REENTRANT */
#endif /* !_KERNEL */

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Copyright 2009 Sun Microsystems, Inc.  All rights reserved.
 * Use is subject to license terms.
 */

#pragma ident	"@(#)meta_basic.x	2.7	09/05/08 SMI"

/* get timeval32 definition */
#include <sys/types32.h>
#ifdef _KERNEL
#error "Compiling kernel file rpcgened without _KERNEL define."
#endif /* _KERNEL */
#include <sys/dditypes.h>

/*
 * Some constants
 */
#define	MD_MAX_SETNAME 50
#define	MD_MAX_NODENAME 63
#define	MAX_HOST_ADDRS 3
#define	MD_MAX_MNNODENAME 256
#define	MED_MAX_HOSTS 3
#define	MED_DEF_HOSTS 3
#define	MD_MAXSIDES 8
#define	MD_LOCAL_SET 0
#define	MD_MNMAXSIDES 128
#define	MDDB_SN_LEN 12
#define	MDDB_MINOR_NAME_MAX 32
#define	MD_MAXDRVNM 16
#define	MD_MAX_BLKS_FOR_SMALL_DEVS 2147483647
#define        MD_MAX_BLKS_FOR_EXTVTOC 4294967295ULL

/* Minimum number of metadevice database replicas needed */
#define	MD_MINREPLICAS 1
#define	MD_MAX_SETNAME_PLUS_1	(MD_MAX_SETNAME + 1)
#define	MD_MAX_NODENAME_PLUS_1	(MD_MAX_NODENAME + 1)
#define	MD_MAX_MNNODENAME_PLUS_1	(MD_MAX_MNNODENAME + 1)

#define	MD_SET_BAD	((set_t)~0UL)

#define	MD_LOCAL_NAME	""

#define	MD_SIDEWILD	((side_t)~0UL)

#define	MD_KEYWILD	((mdkey_t)0)
#define	MD_KEYBAD	((mdkey_t)~0UL)
/* Maximum length of a metadevice name */
#define	MD_MAX_SIDENAME_LEN	(MD_MAXDRVNM + MD_MAX_SETNAME + 2)

/*
 * dev_t is 64 bit now across userland and kernel. Whereever 32 bit value
 * is specifically needed, dev32_t will be used. Internally dev_t is used.
 * timeval is always 32 bit across userland and kernel.
 */
typedef u_longlong_t		md_dev64_t;
typedef struct timeval32	md_timeval32_t;

/*
 * The following definitions are not available, when operating in
 * a 32 bit environment. As we are always dealing with
 * 64 bit devices, md_dev64_t, we need those definitions also in
 * a 32 bit environment
 */
#ifndef	NBITSMAJOR64
#define	NBITSMAJOR64	32	/* # of major device bits in 64-bit Solaris */
#endif	/* NBITSMAJOR64 */

#ifndef	NBITSMINOR64
#define	NBITSMINOR64	32	/* # of minor device bits in 64-bit Solaris */
#endif	/* NBITSMINOR64 */

#ifndef	MAXMAJ64
#define	MAXMAJ64	0xfffffffful	/* max major value */
#endif	/* MAXMAJ64 */

#ifndef	MAXMIN64
#define	MAXMIN64	0xfffffffful	/* max minor value */
#endif	/* MAXMIN64 */

#ifndef	NODEV64
#define	NODEV64		0xffffffffffffffffuLL
#endif	/* NODEV64 */

#ifndef	NODEV32
#define	NODEV32		0xffffffffuL
#endif	/* NODEV32 */

#ifndef	MD_DISKADDR_ERROR
#define	MD_DISKADDR_ERROR	0xffffffffffffffffuLL
#endif /* MD_DISKADDR_ERROR */

/* namespace key */

typedef int mdkey_t;

/* set ID */

typedef u_int set_t;

/* record ID type */

typedef int mddb_recid_t;

/* side ID */

typedef u_int side_t;

/* Multi-node node ID */

typedef uint32_t md_mn_nodeid_t;

/* Shared definitions */
/*
 * Copyright 2004 Sun Microsystems, Inc.  All rights reserved.
 * Use is subject to license terms.
 */

#pragma ident	"@(#)meta_arr.x	2.2	04/07/13 SMI"

/*
 * This file has the shared fixed array RPC definitions for use in a couple
 * places.
 */


/*
 * Node Name type
 */

typedef char md_node_nm_t[MD_MAX_NODENAME_PLUS_1];

typedef char md_mnnode_nm_t[MD_MAX_MNNODENAME_PLUS_1];

/*
 * Set Name Type
 */

typedef char md_set_nm_t[MD_MAX_SETNAME_PLUS_1];

/*
 * Mediator Basic Data Types
 */

typedef md_node_nm_t md_alias_nm_t[MAX_HOST_ADDRS];

typedef u_int md_alias_ip_t[MAX_HOST_ADDRS];

/*
 * Values for the a_flg structure member of md_alias_nm_ip_t structure
 */
#define	NMIP_F_LOCAL	0x0001


struct md_hi_t {
	u_int a_flg;
	int a_cnt;
	md_alias_nm_t a_nm;
	md_alias_ip_t a_ip;
};
typedef struct md_hi_t md_hi_t;

struct md_hi_arr_t {
	int n_cnt;
	md_hi_t n_lst[MED_MAX_HOSTS];
};
typedef struct md_hi_arr_t md_hi_arr_t;

struct md_h_t {
	int a_cnt;
	md_alias_nm_t a_nm;
};
typedef struct md_h_t md_h_t;

struct md_h_arr_t {
	int n_cnt;
	md_h_t n_lst[MED_MAX_HOSTS];
};
typedef struct md_h_arr_t md_h_arr_t;

/*
 * Node Name type
 */

typedef md_node_nm_t md_node_nm_arr_t[MD_MAXSIDES];


#if defined(__STDC__) || defined(__cplusplus)
extern	bool_t	xdr_uint_t(XDR *xdrs, uint_t *objp);
extern	bool_t	xdr_ushort_t(XDR *xdrs, ushort_t *objp);
extern	bool_t	xdr_dev_t(XDR *xdrs, dev_t *objp);
extern	bool_t	xdr_dev32_t(XDR *xdrs, dev32_t *objp);
extern	bool_t	xdr_md_dev64_t(XDR *xdrs, md_dev64_t *objp);
extern	bool_t	xdr_size_t(XDR *xdrs, size_t *objp);
extern	bool_t	xdr_daddr_t(XDR *xdrs, daddr_t *objp);
extern	bool_t	xdr_daddr32_t(XDR *xdrs, daddr32_t *objp);
extern	bool_t	xdr_diskaddr_t(XDR *xdrs, diskaddr_t *objp);
extern	bool_t	xdr_ddi_devid_t(XDR *xdrs, ddi_devid_t *objp);
extern	bool_t	xdr_off_t(XDR *xdrs, off_t *objp);
extern bool_t  xdr_md_timeval32_t(XDR *xdrs, md_timeval32_t *objp);
extern	bool_t	xdr_minor_t(XDR *xdrs, minor_t *objp);
extern	bool_t	xdr_timeval(XDR *xdrs, struct timeval *objp);
extern	bool_t	xdr_clnt_stat(XDR *xdrs, enum clnt_stat *objp);
#else /* K&R C */
extern	bool_t	xdr_uint_t();
extern	bool_t	xdr_ushort_t();
extern	bool_t	xdr_dev_t();
extern	bool_t	xdr_dev32_t();
extern	bool_t	xdr_md_dev64_t();
extern	bool_t	xdr_size_t();
extern	bool_t	xdr_daddr_t();
extern	bool_t	xdr_daddr32_t();
extern	bool_t	xdr_diskaddr_t();
extern	bool_t	xdr_ddi_devid_t();
extern	bool_t	xdr_off_t();
extern bool_t  xdr_md_timeval32_t();
extern	bool_t	xdr_minor_t();
extern	bool_t	xdr_timeval();
extern	bool_t	xdr_clnt_stat();

#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_mdkey_t(XDR *, mdkey_t*);
extern  bool_t xdr_set_t(XDR *, set_t*);
extern  bool_t xdr_mddb_recid_t(XDR *, mddb_recid_t*);
extern  bool_t xdr_side_t(XDR *, side_t*);
extern  bool_t xdr_md_mn_nodeid_t(XDR *, md_mn_nodeid_t*);
extern  bool_t xdr_md_node_nm_t(XDR *, md_node_nm_t);
extern  bool_t xdr_md_mnnode_nm_t(XDR *, md_mnnode_nm_t);
extern  bool_t xdr_md_set_nm_t(XDR *, md_set_nm_t);
extern  bool_t xdr_md_alias_nm_t(XDR *, md_alias_nm_t);
extern  bool_t xdr_md_alias_ip_t(XDR *, md_alias_ip_t);
extern  bool_t xdr_md_hi_t(XDR *, md_hi_t*);
extern  bool_t xdr_md_hi_arr_t(XDR *, md_hi_arr_t*);
extern  bool_t xdr_md_h_t(XDR *, md_h_t*);
extern  bool_t xdr_md_h_arr_t(XDR *, md_h_arr_t*);
extern  bool_t xdr_md_node_nm_arr_t(XDR *, md_node_nm_arr_t);

#else /* K&R C */
extern bool_t xdr_mdkey_t();
extern bool_t xdr_set_t();
extern bool_t xdr_mddb_recid_t();
extern bool_t xdr_side_t();
extern bool_t xdr_md_mn_nodeid_t();
extern bool_t xdr_md_node_nm_t();
extern bool_t xdr_md_mnnode_nm_t();
extern bool_t xdr_md_set_nm_t();
extern bool_t xdr_md_alias_nm_t();
extern bool_t xdr_md_alias_ip_t();
extern bool_t xdr_md_hi_t();
extern bool_t xdr_md_hi_arr_t();
extern bool_t xdr_md_h_t();
extern bool_t xdr_md_h_arr_t();
extern bool_t xdr_md_node_nm_arr_t();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_META_BASIC_H_RPCGEN */