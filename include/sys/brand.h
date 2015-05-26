/*
 * Copyright 2007 Sun Microsystems, Inc.  All rights reserved.
 * Use is subject to license terms.
 */

#ifndef _SYS_BRAND_H
#define	_SYS_BRAND_H

#pragma ident	"@(#)brand.h	1.1	07/01/14 SMI"

#ifdef	__cplusplus
extern "C" {
#endif

#include <sys/proc.h>
#include <sys/exec.h>

/*
 * All Brands supported by this kernel must use BRAND_VER_1.
 */
#define	BRAND_VER_1	1

/*
 * sub-commands to brandsys.
 * 1 - 128 are for common commands
 * 128+ are available for brand-specific commands.
 */
#define	B_REGISTER		1
#define	B_TTYMODES		2
#define	B_ELFDATA		3
#define	B_EXEC_NATIVE		4
#define	B_EXEC_BRAND		5

/*
 * Structure used by zoneadmd to communicate the name of a brand and the
 * supporting brand module into the kernel.
 */
struct brand_attr {
	char	ba_brandname[MAXNAMELEN];
	char	ba_modname[MAXPATHLEN];
};

/* What we call the native brand. */
#define	NATIVE_BRAND_NAME	"native"

#ifdef	_KERNEL

/* Root for branded zone's native binaries */
#define	NATIVE_ROOT	"/native/"

struct proc;
struct uarg;
struct brand_mach_ops;
struct intpdata;
struct execa;

struct brand_ops {
	int	(*b_brandsys)(int, int64_t *, uintptr_t, uintptr_t, uintptr_t,
		uintptr_t, uintptr_t, uintptr_t);
	void	(*b_setbrand)(struct proc *);
	int	(*b_getattr)(zone_t *, int, void *, size_t *);
	int	(*b_setattr)(zone_t *, int, void *, size_t);
	void	(*b_copy_procdata)(struct proc *, struct proc *);
	void	(*b_proc_exit)(struct proc *, klwp_t *);
	void	(*b_exec)();
	void	(*b_lwp_setrval)(klwp_t *, int, int);
	int	(*b_initlwp)(klwp_t *);
	void	(*b_forklwp)(klwp_t *, klwp_t *);
	void	(*b_freelwp)(klwp_t *);
	void	(*b_lwpexit)(klwp_t *);
	int	(*b_elfexec)(struct vnode *vp, struct execa *uap,
	    struct uarg *args, struct intpdata *idata, int level,
	    long *execsz, int setid, caddr_t exec_file,
	    struct cred *cred, int brand_action);
};

/*
 * The b_version field must always be the first entry in this struct.
 */
typedef struct brand {
	int			b_version;
	char    		*b_name;
	struct brand_ops	*b_ops;
	struct brand_mach_ops	*b_machops;
} brand_t;

extern brand_t native_brand;

/*
 * Convenience macros
 */
#define	lwptolwpbrand(l)	((l)->lwp_brand)
#define	ttolwpbrand(t)		(lwptolwpbrand(ttolwp(t)))
#define	PROC_IS_BRANDED(p)	((p)->p_brand != &native_brand)
#define	ZONE_IS_BRANDED(z)	((z)->zone_brand != &native_brand)
#define	BROP(p)			((p)->p_brand->b_ops)
#define	ZBROP(z)		((z)->zone_brand->b_ops)
#define	BRMOP(p)		((p)->p_brand->b_machops)

extern void	brand_init();
extern int	brand_register(brand_t *);
extern int	brand_unregister(brand_t *);
extern brand_t	*brand_register_zone(struct brand_attr *);
extern brand_t	*brand_find_name(char *);
extern void	brand_unregister_zone(brand_t *);
extern int	brand_zone_count(brand_t *);
extern void	brand_setbrand(proc_t *);
#endif	/* _KERNEL */

#ifdef	__cplusplus
}
#endif

#endif	/* _SYS_BRAND_H */