/* cosine.h
 *
 * $Id: cosine.h 37572 2011-06-06 16:39:23Z gerald $
 *
 * CoSine IPNOS L2 debug output parsing
 * Copyright (c) 2002 by Motonori Shindo <motonori@shin.do>
 *
 * Wiretap Library
 * Copyright (c) 1998 by Gilbert Ramirez <gram@alumni.rice.edu>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 *
 */

#ifndef __W_COSINE_H__
#define __W_COSINE_H__
#include <glib.h>
#include <wtap.h>

int cosine_open(wtap *wth, int *err, gchar **err_info);

#endif