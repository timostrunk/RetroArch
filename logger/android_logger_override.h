/*  RetroArch - A frontend for libretro.
 *  Copyright (C) 2010-2014 - Hans-Kristian Arntzen
 *  Copyright (C) 2011-2014 - Daniel De Matteis
 * 
 *  RetroArch is free software: you can redistribute it and/or modify it under the terms
 *  of the GNU General Public License as published by the Free Software Found-
 *  ation, either version 3 of the License, or (at your option) any later version.
 *
 *  RetroArch is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 *  without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 *  PURPOSE.  See the GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along with RetroArch.
 *  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __ANDROID_LOGGER_H
#define __ANDROID_LOGGER_H

#include <stdarg.h>
#include <android/log.h>

#ifndef RARCH_LOG
#define RARCH_LOG(...)  __android_log_print(ANDROID_LOG_INFO, "RetroArch: ", __VA_ARGS__)
#endif

#ifndef RARCH_LOG_V
#define RARCH_LOG_V(tag, fmt, vp) __android_log_vprint(ANDROID_LOG_INFO, "RetroArch: " tag, fmt, vp)
#endif

#ifndef RARCH_LOG_OUTPUT
#define RARCH_LOG_OUTPUT(...) RARCH_LOG(__VA_ARGS__)
#endif

#ifndef RARCH_LOG_OUTPUT_V
#define RARCH_LOG_OUTPUT_V(tag, fmt, vp) RARCH_LOG_V(tag, fmt, vp)
#endif

#ifndef RARCH_ERR
#define RARCH_ERR(...)  __android_log_print(ANDROID_LOG_INFO, "RetroArch [ERROR] :: ", __VA_ARGS__)
#endif

#ifndef RARCH_ERR_V
#define RARCH_ERR_V(tag, fmt, vp) __android_log_vprint(ANDROID_LOG_INFO, "RetroArch [ERROR] :: " tag, fmt, vp)
#endif

#ifndef RARCH_WARN
#define RARCH_WARN(...) __android_log_print(ANDROID_LOG_INFO, "RetroArch [WARN] :: ", __VA_ARGS__)
#endif

#ifndef RARCH_WARN_V
#define RARCH_WARN_V(tag, fmt, vp) __android_log_print(ANDROID_LOG_INFO, "RetroArch [WARN] :: " tag, fmt, vp)
#endif

#endif
