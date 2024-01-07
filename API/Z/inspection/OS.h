/* Zeta API - Z/inspection/OS.h
 ______ ____________  ___
|__   /|  ___|__  __|/   \
  /  /_|  __|  |  | /  *  \
 /_____|_____| |__|/__/ \__\
Copyright (C) 2006-2024 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef Z_inspection_OS_H
#define Z_inspection_OS_H

#include <Z/keys/OS.h>
#include <Z/macros/token.h>

#ifdef Z_OS_HEADER
#	include Z_OS_HEADER

#else
#	ifndef Z_OS
#		include <Z/inspection/compiler.h>

#		ifdef Z_COMPILER_OS
#			define Z_OS Z_COMPILER_OS
#		else
#			include <Z/inspection/OS/detection.h>
#		endif
#	endif

#	ifndef Z_OS
#		define Z_OS Z_OS_UNKNOWN

#	elif Z_OS == Z_OS_AEGIS
#		include <Z/inspection/OS/modules/AEGIS.h>
#	elif Z_OS == Z_OS_AIX
#		include <Z/inspection/OS/modules/AIX.h>
#	elif Z_OS == Z_OS_AMIGA_OS
#		include <Z/inspection/OS/modules/AmigaOS.h>
#	elif Z_OS == Z_OS_ANANAS_OS
#		include <Z/inspection/OS/modules/Ananas-OS.h>
#	elif Z_OS == Z_OS_ANDROID
#		include <Z/inspection/OS/modules/Android.h>
#	elif Z_OS == Z_OS_BE_OS
#		include <Z/inspection/OS/modules/BeOS.h>
#	elif Z_OS == Z_OS_BITRIG
#		include <Z/inspection/OS/modules/Bitrig.h>
#	elif Z_OS == Z_OS_BSD_386
#		include <Z/inspection/OS/modules/BSD-386.h>
#	elif Z_OS == Z_OS_CELL_OS
#		include <Z/inspection/OS/modules/CellOS.h>
#	elif Z_OS == Z_OS_CNK
#		include <Z/inspection/OS/modules/CNK.h>
#	elif Z_OS == Z_OS_CONVEX_UNIX
#		include <Z/inspection/OS/modules/Convex UNIX.h>
#	elif Z_OS == Z_OS_CYGWIN
#		include <Z/inspection/OS/modules/Cygwin.h>
#	elif Z_OS == Z_OS_DC_OSX
#		include <Z/inspection/OS/modules/DC-OSx.h>
#	elif Z_OS == Z_OS_DG_UX
#		include <Z/inspection/OS/modules/DG-UX.h>
#	elif Z_OS == Z_OS_DOMAIN_OS
#		include <Z/inspection/OS/modules/Domain-OS.h>
#	elif Z_OS == Z_OS_DRAGONFLY_BSD
#		include <Z/inspection/OS/modules/DragonFly BSD.h>
#	elif Z_OS == Z_OS_DYNIX_PTX
#		include <Z/inspection/OS/modules/DYNIX-ptx.h>
#	elif Z_OS == Z_OS_ECOS
#		include <Z/inspection/OS/modules/eCos.h>
#	elif Z_OS == Z_OS_FREE_BSD
#		include <Z/inspection/OS/modules/FreeBSD.h>
#	elif Z_OS == Z_OS_FUCHSIA
#		include <Z/inspection/OS/modules/Fuchsia.h>
#	elif Z_OS == Z_OS_GNU_HURD
#		include <Z/inspection/OS/modules/GNU Hurd.h>
#	elif Z_OS == Z_OS_HAIKU
#		include <Z/inspection/OS/modules/Haiku.h>
#	elif Z_OS == Z_OS_HI_UX_MPP
#		include <Z/inspection/OS/modules/HI-UX-MPP.h>
#	elif Z_OS == Z_OS_HP_UX
#		include <Z/inspection/OS/modules/HP-UX.h>
#	elif Z_OS == Z_OS_INTEGRITY
#		include <Z/inspection/OS/modules/INTEGRITY.h>
#	elif Z_OS == Z_OS_IPHONE_OS
#		include <Z/inspection/OS/modules/iPhone OS.h>
#	elif Z_OS == Z_OS_IRIX
#		include <Z/inspection/OS/modules/IRIX.h>
#	elif Z_OS == Z_OS_LEMON_OS
#		include <Z/inspection/OS/modules/Lemon OS.h>
#	elif Z_OS == Z_OS_LINUX
#		include <Z/inspection/OS/modules/Linux.h>
#	elif Z_OS == Z_OS_LUNIX
#		include <Z/inspection/OS/modules/LUnix.h>
#	elif Z_OS == Z_OS_LYNX_OS
#		include <Z/inspection/OS/modules/LynxOS.h>
#	elif Z_OS == Z_OS_MAC_OS
#		include <Z/inspection/OS/modules/Mac OS.h>
#	elif Z_OS == Z_OS_MAC_OS_X
#		include <Z/inspection/OS/modules/Mac OS X.h>
#	elif Z_OS == Z_OS_MINIX
#		include <Z/inspection/OS/modules/MINIX.h>
#	elif Z_OS == Z_OS_MORPH_OS
#		include <Z/inspection/OS/modules/MorphOS.h>
#	elif Z_OS == Z_OS_MPE_XL
#		include <Z/inspection/OS/modules/MPE XL.h>
#	elif Z_OS == Z_OS_MS_DOS
#		include <Z/inspection/OS/modules/MS-DOS.h>
#	elif Z_OS == Z_OS_NET_BSD
#		include <Z/inspection/OS/modules/NetBSD.h>
#	elif Z_OS == Z_OS_NETWARE
#		include <Z/inspection/OS/modules/NetWare.h>
#	elif Z_OS == Z_OS_NON_STOP_OS
#		include <Z/inspection/OS/modules/NonStop OS.h>
#	elif Z_OS == Z_OS_NUCLEUS_RTOS
#		include <Z/inspection/OS/modules/Nucleus RTOS.h>
#	elif Z_OS == Z_OS_OPEN_BSD
#		include <Z/inspection/OS/modules/OpenBSD.h>
#	elif Z_OS == Z_OS_OPEN_VMS
#		include <Z/inspection/OS/modules/OpenVMS.h>
#	elif Z_OS == Z_OS_ORBIS_OS
#		include <Z/inspection/OS/modules/Orbis OS.h>
#	elif Z_OS == Z_OS_OS_2
#		include <Z/inspection/OS/modules/OS-2.h>
#	elif Z_OS == Z_OS_OS_9
#		include <Z/inspection/OS/modules/OS-9.h>
#	elif Z_OS == Z_OS_OS_400
#		include <Z/inspection/OS/modules/OS-400.h>
#	elif Z_OS == Z_OS_OSF_1
#		include <Z/inspection/OS/modules/OSF-1.h>
#	elif Z_OS == Z_OS_PALM_OS
#		include <Z/inspection/OS/modules/Palm OS.h>
#	elif Z_OS == Z_OS_PLAN_9
#		include <Z/inspection/OS/modules/Plan 9.h>
#	elif Z_OS == Z_OS_PSP_SYSTEM_SOFTWARE
#		include <Z/inspection/OS/modules/PSP System Software.h>
#	elif Z_OS == Z_OS_QNX
#		include <Z/inspection/OS/modules/QNX.h>
#	elif Z_OS == Z_OS_RTEMS
#		include <Z/inspection/OS/modules/RTEMS.h>
#	elif Z_OS == Z_OS_SCO_UNIX_SYSTEM_V
#		include <Z/inspection/OS/modules/SCO UNIX System V.h>
#	elif Z_OS == Z_OS_SERENITY_OS
#		include <Z/inspection/OS/modules/SerenityOS.h>
#	elif Z_OS == Z_OS_SINIX
#		include <Z/inspection/OS/modules/SINIX.h>
#	elif Z_OS == Z_OS_SOLARIS
#		include <Z/inspection/OS/modules/Solaris.h>
#	elif Z_OS == Z_OS_SUN_OS
#		include <Z/inspection/OS/modules/SunOS.h>
#	elif Z_OS == Z_OS_SYLLABLE
#		include <Z/inspection/OS/modules/Syllable.h>
#	elif Z_OS == Z_OS_SYMBIAN
#		include <Z/inspection/OS/modules/Symbian.h>
#	elif Z_OS == Z_OS_TVOS
#		include <Z/inspection/OS/modules/tvOS.h>
#	elif Z_OS == Z_OS_ULTRIX
#		include <Z/inspection/OS/modules/ULTRIX.h>
#	elif Z_OS == Z_OS_UNICOS
#		include <Z/inspection/OS/modules/UNICOS.h>
#	elif Z_OS == Z_OS_UNICOS_MP
#		include <Z/inspection/OS/modules/UNICOS-mp.h>
#	elif Z_OS == Z_OS_UNIXWARE
#		include <Z/inspection/OS/modules/UnixWare.h>
#	elif Z_OS == Z_OS_UTS
#		include <Z/inspection/OS/modules/UTS.h>
#	elif Z_OS == Z_OS_VOS
#		include <Z/inspection/OS/modules/VOS.h>
#	elif Z_OS == Z_OS_VX_WORKS
#		include <Z/inspection/OS/modules/VxWorks.h>
#	elif Z_OS == Z_OS_WATCH_OS
#		include <Z/inspection/OS/modules/Watch OS.h>
#	elif Z_OS == Z_OS_WINDOWS
#		include <Z/inspection/OS/modules/Windows.h>
#	elif Z_OS == Z_OS_WINDOWS_CE
#		include <Z/inspection/OS/modules/Windows CE.h>
#	elif Z_OS == Z_OS_Z_OS
#		include <Z/inspection/OS/modules/z-OS.h>
#	elif Z_OS == Z_OS_ZETA
#		include <Z/inspection/OS/modules/ZETA.h>
#	else
#		error "Invalid Z_OS key."
#	endif
#endif

/* MARK: - Getters */

#define Z_OS_IS( OS	) Z_IS_TRUE(Z_OS_IS_##OS      )
#define Z_OS_HAS(FEATURE) Z_IS_TRUE(Z_OS_HAS_##FEATURE)

/* MARK: - Completion */

#if defined(Z_OS_NAME) && !defined(Z_OS_MODERN_NAME)
#	define Z_OS_MODERN_NAME Z_OS_NAME
#endif

#endif /* Z_inspection_OS_H */
