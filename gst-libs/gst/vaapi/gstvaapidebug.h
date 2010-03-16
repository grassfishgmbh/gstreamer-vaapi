/*
 *  gstvaapidebug.h - VA-API debugging utilities
 *
 *  gstreamer-vaapi (C) 2010 Splitted-Desktop Systems
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA
 */

#ifndef GST_VAAPI_DEBUG_H
#define GST_VAAPI_DEBUG_H

#include "gstvaapiutils.h"

#if DEBUG
# define D(x) x
#else
# define D(x)
#endif
#define bug vaapi_dprintf

GST_DEBUG_CATEGORY_EXTERN(gst_debug_vaapi);
#define GST_CAT_DEFAULT gst_debug_vaapi

#endif /* GST_VAAPI_DEBUG_H */
