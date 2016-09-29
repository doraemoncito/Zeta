/* Z Kit C API - inspection/OS/completion.h
	      ___
 _____	____ /	/______
/_   /_/  -_)  __/  _ /
 /____/\___/\__/ \__,_/
Copyright © 2006-2016 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#include <Z/constants/base.h>

#ifndef Z_OS_HAS_NETWORKING
#	define Z_OS_HAS_NETWORKING FALSE
#endif

#ifndef Z_OS_HAS_POSIX_THREADING
#	define Z_OS_HAS_POSIX_THREADING FALSE
#endif

#ifndef Z_OS_HAS_TLS
#	define Z_OS_HAS_TLS FALSE
#endif

#ifndef Z_OS_IS_POSIX
#	define Z_OS_IS_POSIX FALSE
#endif

#ifndef Z_OS_IS_UNIX
#	define Z_OS_IS_POSIX FALSE
#endif

/* inspection/OS/completion.h EOF */