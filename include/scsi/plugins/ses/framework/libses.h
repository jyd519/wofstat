/*
 * Copyright (c) 2011, Oracle and/or its affiliates. All rights reserved.
 */

#ifndef	_FRAMEWORK_LIBSES_H
#define	_FRAMEWORK_LIBSES_H

#pragma ident	"@(#)libses.h	1.1	11/01/13 SMI"

#ifdef	__cplusplus
extern "C" {
#endif

/*
 * These are properties attached to the root target node of the enclosure, and
 * represent the SCSI inquiry data.
 */
#define	SCSI_PROP_VENDOR		"scsi-inquiry-vendor"
#define	SCSI_PROP_PRODUCT		"scsi-inquiry-product"
#define	SCSI_PROP_REVISION		"scsi-inquiry-revision"

/*
 * This property provides a human-readable name for the element type.  This is
 * constant, and not derived from the enclosure data.
 */
#define	LIBSES_PROP_ELEMENT_TYPE_NAME	"libses-element-type-name"

/*
 * The following properties can be added to any node.  There is no provision in
 * the specification for these properties, but they can be derived from vendor
 * specific data for some enclosures.
 */
#define	LIBSES_PROP_PART		"libses-part-number"
#define	LIBSES_PROP_SERIAL		"libses-serial-number"
#define	LIBSES_PROP_FRU			"libses-is-fru"
#define	LIBSES_PROP_PHYS_PARENT		"libses-physical-parent-element-index"

/*
 * The chassis serial number is a pseudo property that doesn't exist in SES
 * spec.  A single physical chassis may present several logically different SES
 * targets that are connected to the same or different elements.  These targets
 * can extract the chassis serial number in a vendor-specific way so that
 * consumers know these SES targets refer to the same device.  This defaults to
 * to the logical-id, and is always present.
 */
#define	LIBSES_EN_PROP_CSN		"libses-chassis-serial"

/*
 * This boolean property identifies a chassis as internal, where the connected
 * elements are part of a single system chassis and not an external enclosure.
 * This is used on platforms with a disk backplane that exports a SES target.
 */
#define	LIBSES_EN_PROP_INTERNAL		"libses-internal"

/*
 * This property identifies the subchassis id for those systems that
 * support the concept of a subchassis.
 */
#define	LIBSES_EN_PROP_SUBCHASSIS_ID	"libses-subchassis-id"

/*
 * Maximum allowed firmware upload chunk size.  Obtained in a vendor- or
 * platform-specific manner but generic in nature.
 */
#define	LIBSES_EN_PROP_FIRMWARE_CHUNK_SIZE	"libses-firmware-chunksize"

#ifdef	__cplusplus
}
#endif

#endif	/* _FRAMEWORK_LIBSES_H */