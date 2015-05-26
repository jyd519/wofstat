/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 8; tab-width: 8 -*- */

/* gnome-vfs-file-size.h - Typedefs of GnomeVFSFileSize and GnomeVFSFileOffset
   Note: This file is generated by configure, please edit gnome-vfs-file-size.h.in

   Copyright (C) 2000 Eazel, Inc.

   The Gnome Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The Gnome Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the Gnome Library; see the file COPYING.LIB.  If not,
   write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.

   Author: George Lebl, <jirka@5z.com>
*/

#ifndef GNOME_VFS_FILE_SIZE_H
#define GNOME_VFS_FILE_SIZE_H

#include <glib/gtypes.h>

/*
 * This defines GnomeVFSFileSize and GnomeVFSFileOffset
 *
 * It also defines GNOME_VFS_SIZE_IS_<type> and GNOME_VFS_OFFSET_IS_<type>
 * where type is INT, UNSIGNED_INT, LONG, UNSIGNED_LONG, LONG_LONG
 * or UNSIGNED_LONG_LONG.  Note that size is always unsigned and offset
 * is always signed.
 *
 * It also defines GNOME_VFS_SIZE_FORMAT_STR and GNOME_VFS_OFFSET_FORMAT_STR
 * which is the string representation to be used in printf style expressions.
 * This is without the %, so for example for long it would be "ld"
 */

#define GNOME_VFS_SIZE_IS_UNSIGNED_LONG_LONG
#define GNOME_VFS_OFFSET_IS_LONG_LONG

#define GNOME_VFS_SIZE_FORMAT_STR "Lu"
#define GNOME_VFS_OFFSET_FORMAT_STR "Ld"

G_GNUC_EXTENSION typedef unsigned long long GnomeVFSFileSize;
G_GNUC_EXTENSION typedef long long GnomeVFSFileOffset;

#endif /* GNOME_VFS_FILE_SIZE_H */