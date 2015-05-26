/*
 * Copyright (c) 2004, 2012, Oracle and/or its affiliates. All rights reserved.
 */

#ifndef _KDI_IMPL_H
#define	_KDI_IMPL_H

#pragma ident	"@(#)kdi_impl.h	1.6	12/03/09 SMI"

#include <sys/kdi.h>
#include <sys/kdi_machimpl.h>

#ifdef __cplusplus
extern "C" {
#endif

struct module;
struct gdscr;

/*
 * The debugvec is used by the kernel to interact with the debugger.
 */
struct kdi_debugvec {
	void	(*dv_enter)(void);

	void	(*dv_cpu_init)(struct cpu *);
	void	(*dv_kctl_cpu_init)(void);

#if defined(__i386) || defined(__amd64)
	void	(*dv_idt_sync)(gate_desc_t *);
#endif	/* __i386 || __amd64 */

	void	(*dv_vmready)(void);
	void	(*dv_kctl_vmready)(void);

	void	(*dv_kctl_memavail)(void);
	int	(*dv_memavail)(caddr_t, size_t);

#if defined(__sparc)
	void	(*dv_cpr_restart)(void);
#endif

	void	(*dv_kctl_modavail)(void);
	void	(*dv_kctl_thravail)(void);
	void	(*dv_mod_loaded)(struct modctl *);
	void	(*dv_mod_unloading)(struct modctl *);
};

typedef struct kdi_plat {
	void (*pkdi_system_claim)(void);
	void (*pkdi_system_release)(void);
	void (*pkdi_console_claim)(void);
	void (*pkdi_console_release)(void);
} kdi_plat_t;

#define	pkdi_system_claim	kdi_plat.pkdi_system_claim
#define	pkdi_system_release	kdi_plat.pkdi_system_release
#define	pkdi_console_claim	kdi_plat.pkdi_console_claim
#define	pkdi_console_release	kdi_plat.pkdi_console_release

/*
 * The KDI, or Kernel/Debugger Interface, consists of an ops vector describing
 * kernel services that may be directly invoked by the debugger.  Unless
 * otherwise specified, the functions implementing this ops vector are designed
 * to function when the debugger has control of the system - when all other CPUs
 * have been stopped.  In such an environment, blocking services such as memory
 * allocation or synchronization primitives are not available.
 */
struct kdi {
	int kdi_version;

	/*
	 * Determines whether significant changes (loads or unloads) have
	 * been made to the modules since the last time this op was invoked.
	 */
	int (*kdi_mods_changed)(void);

	/*
	 * Iterates through the current set of modctls, and invokes the
	 * caller-provided callback on each one.
	 */
	int (*kdi_mod_iter)(int (*)(struct modctl *, void *), void *);

	/*
	 * Determines whether or not a given module is loaded.
	 */
	int (*kdi_mod_isloaded)(struct modctl *);

	/*
	 * Has anything changed between two versions of the same modctl?
	 */
	int (*kdi_mod_haschanged)(struct modctl *, struct module *,
	    struct modctl *, struct module *);

	/*
	 * Invoked by the debugger when it assumes control of the machine.
	 */
	void (*kdi_system_claim)(void);

	/*
	 * Invoked by the debugger when it relinquishes control of the machine.
	 */
	void (*kdi_system_release)(void);

	int (*kdi_pread)(caddr_t, size_t, uint64_t, size_t *);
	int (*kdi_pwrite)(caddr_t, size_t, uint64_t, size_t *);
	void (*kdi_flush_caches)(void);

	size_t (*kdi_range_is_nontoxic)(uintptr_t, size_t, int);

	struct cons_polledio *(*kdi_get_polled_io)(void);

	int (*kdi_vtop)(uintptr_t, uint64_t *);

	kdi_dtrace_state_t (*kdi_dtrace_get_state)(void);
	int (*kdi_dtrace_set)(kdi_dtrace_set_t);

	/*
	 * Invoked by the debugger when the master CPU starts and ends
	 * a debug session.
	 */
	void (*kdi_debug_start)(void);
	void (*kdi_debug_end)(void);

	void (*kdi_plat_call)(void (*)(void));

	kdi_mach_t kdi_mach;
	kdi_plat_t kdi_plat;
};

extern void kdi_softcall(void (*)(void));
extern void kdi_setsoftint(uint64_t);
extern int kdi_pread(caddr_t, size_t, uint64_t, size_t *);
extern int kdi_pwrite(caddr_t, size_t, uint64_t, size_t *);
extern size_t kdi_range_is_nontoxic(uintptr_t, size_t, int);
extern void kdi_flush_caches(void);
extern kdi_dtrace_state_t kdi_dtrace_get_state(void);
extern int kdi_vtop(uintptr_t, uint64_t *);

extern void cpu_kdi_init(kdi_t *);
extern void mach_kdi_init(kdi_t *);
extern void plat_kdi_init(kdi_t *);

#ifdef __cplusplus
}
#endif

#endif /* _KDI_IMPL_H */