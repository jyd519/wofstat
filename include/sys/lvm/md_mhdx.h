/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _MHDX_H_RPCGEN
#define	_MHDX_H_RPCGEN

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
 * Copyright (c) 1989-1996, 1999 by Sun Microsystems, Inc.
 * All rights reserved.
 */

#pragma ident	"@(#)mhdx.x	2.1	00/06/22 SMI"

/*
 * MH shadow structure for struct mhioctkown (sys/mhd.h)
 */

struct mhd_mhioctkown_t {
	int reinstate_resv_delay;
	int min_ownership_delay;
	int max_ownership_delay;
};
typedef struct mhd_mhioctkown_t mhd_mhioctkown_t;

/*
 * MH timeout values
 */

struct mhd_mhiargs_t {
	int mh_ff;
	mhd_mhioctkown_t mh_tk;
};
typedef struct mhd_mhiargs_t mhd_mhiargs_t;

/*
 * controller info
 */

#define	METACTLRMAP	"/etc/lvm/md.ctlrmap"
#define	META_SSA200_PID	"SSA200"

enum mhd_ctlrtype_t {
	MHD_CTLR_GENERIC = 0,
	MHD_CTLR_SSA100 = 0 + 1,
	MHD_CTLR_SSA200 = 0 + 2
};
typedef enum mhd_ctlrtype_t mhd_ctlrtype_t;

struct mhd_cinfo_t {
	mhd_ctlrtype_t mhc_ctype;
	u_int mhc_tray;
	u_int mhc_bus;
	u_longlong_t mhc_wwn;
};
typedef struct mhd_cinfo_t mhd_cinfo_t;

/*
 * unique drive identifier
 */

typedef u_int mhd_did_flags_t;

#define	MHD_DID_TIME		0x0001
#define	MHD_DID_SERIAL		0x0002
#define	MHD_DID_CINFO		0x0004
#define	MHD_DID_DUPLICATE	0x0008

typedef char mhd_serial_t[40];

struct mhd_drive_id_t {
	mhd_did_flags_t did_flags;
	long did_time;
	mhd_serial_t did_serial;
	mhd_cinfo_t did_cinfo;
};
typedef struct mhd_drive_id_t mhd_drive_id_t;

/*
 * drive identifier list
 */

struct mhd_drive_info_t {
	char *dif_name;
	mhd_drive_id_t dif_id;
};
typedef struct mhd_drive_info_t mhd_drive_info_t;

typedef struct {
	u_int mhd_drive_info_list_t_len;
	mhd_drive_info_t *mhd_drive_info_list_t_val;
} mhd_drive_info_list_t;

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_mhd_mhioctkown_t(XDR *, mhd_mhioctkown_t*);
extern  bool_t xdr_mhd_mhiargs_t(XDR *, mhd_mhiargs_t*);
extern  bool_t xdr_mhd_ctlrtype_t(XDR *, mhd_ctlrtype_t*);
extern  bool_t xdr_mhd_cinfo_t(XDR *, mhd_cinfo_t*);
extern  bool_t xdr_mhd_did_flags_t(XDR *, mhd_did_flags_t*);
extern  bool_t xdr_mhd_serial_t(XDR *, mhd_serial_t);
extern  bool_t xdr_mhd_drive_id_t(XDR *, mhd_drive_id_t*);
extern  bool_t xdr_mhd_drive_info_t(XDR *, mhd_drive_info_t*);
extern  bool_t xdr_mhd_drive_info_list_t(XDR *, mhd_drive_info_list_t*);

#else /* K&R C */
extern bool_t xdr_mhd_mhioctkown_t();
extern bool_t xdr_mhd_mhiargs_t();
extern bool_t xdr_mhd_ctlrtype_t();
extern bool_t xdr_mhd_cinfo_t();
extern bool_t xdr_mhd_did_flags_t();
extern bool_t xdr_mhd_serial_t();
extern bool_t xdr_mhd_drive_id_t();
extern bool_t xdr_mhd_drive_info_t();
extern bool_t xdr_mhd_drive_info_list_t();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_MHDX_H_RPCGEN */