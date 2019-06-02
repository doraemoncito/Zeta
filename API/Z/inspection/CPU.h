/* Z Kit - inspection/CPU.h
 _____  _______________
/_   /_/  -_/_   _/  _ |
 /____/\___/ /__//___/_| Kit
Copyright (C) 2006-2019 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef Z_inspection_CPU_H
#define Z_inspection_CPU_H

#include <Z/keys/CPU.h>
#include <Z/keys/endianness.h>
#include <Z/keys/number.h>
#include <Z/inspection/compiler.h>

#ifndef Z_CPU_ARCHITECTURE

#	ifdef Z_COMPILER_CPU_ARCHITECTURE
#		define Z_CPU_ARCHITECTURE Z_COMPILER_CPU_ARCHITECTURE
#	else
#		include <Z/inspection/CPU/detection.h>

#		ifndef Z_CPU_ARCHITECTURE
#			error "Z_CPU_ARCHITECTURE not defined."
#		endif
#	endif

#endif

#if Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_6502
#	include <Z/inspection/CPU/modules/6502.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_AARCH32
#	include <Z/inspection/CPU/modules/AArch32.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_AARCH64
#	include <Z/inspection/CPU/modules/AArch64.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_ALPHA
#	include <Z/inspection/CPU/modules/Alpha.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_BLACKFIN
#	include <Z/inspection/CPU/modules/Blackfin.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_CONVEX
#	include <Z/inspection/CPU/modules/Convex.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_EPIPHANY
#	include <Z/inspection/CPU/modules/Epiphany.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_ESA_370
#	include <Z/inspection/CPU/modules/ESA-370.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_ESA_390
#	include <Z/inspection/CPU/modules/ESA-390.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_HEXAGON
#	include <Z/inspection/CPU/modules/Hexagon.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_ITANIUM
#	include <Z/inspection/CPU/modules/Itanium.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_LANAI
#	include <Z/inspection/CPU/modules/Lanai.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_M68K
#	include <Z/inspection/CPU/modules/M68K.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_MIPS
#	include <Z/inspection/CPU/modules/MIPS.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_MIPS64
#	include <Z/inspection/CPU/modules/MIPS64.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_MSP430
#	include <Z/inspection/CPU/modules/MSP430.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_PA_RISC
#	include <Z/inspection/CPU/modules/PA-RISC.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_PA_RISC_2
#	include <Z/inspection/CPU/modules/PA-RISC 2.0.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_POWERPC_32BIT
#	include <Z/inspection/CPU/modules/PowerPC 32-bit.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_POWERPC_64BIT
#	include <Z/inspection/CPU/modules/PowerPC 64-bit.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_RV32E
#	include <Z/inspection/CPU/modules/RV32E.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_RV32I
#	include <Z/inspection/CPU/modules/RV32I.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_RV64I
#	include <Z/inspection/CPU/modules/RV64I.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_RV128I
#	include <Z/inspection/CPU/modules/RV128I.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_SPARC
#	include <Z/inspection/CPU/modules/SPARC.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_SPARC_V9
#	include <Z/inspection/CPU/modules/SPARC V9.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_SUPERH
#	include <Z/inspection/CPU/modules/SuperH.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_SUPERH_5
#	include <Z/inspection/CPU/modules/SuperH 5.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_X86_16
#	include <Z/inspection/CPU/modules/x86-16.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_X86_32
#	include <Z/inspection/CPU/modules/x86-32.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_X86_64
#	include <Z/inspection/CPU/modules/x86-64.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_XCORE
#	include <Z/inspection/CPU/modules/xCORE.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_Z_ARCHITECTURE
#	include <Z/inspection/CPU/modules/z-Architecture.h>

#elif Z_CPU_ARCHITECTURE == Z_CPU_ARCHITECTURE_Z80
#	include <Z/inspection/CPU/modules/Z80.h>

#else
#	error "Invalid Z_CPU_ARCHITECTURE key."
#endif

#include <Z/inspection/CPU/completion.h>

#define Z_CPU_HAS_INTEGRAL(bits	 ) Z_CPU_HAS_INTEGRAL_##bits##BIT
#define Z_CPU_HAS_REAL(	  FORMAT ) Z_CPU_HAS_REAL_##FORMAT
#define Z_CPU_BITS(	  OF_WHAT) Z_CPU_BITS_##OF_WHAT

#if defined(Z_CPU_INTEGRAL_ENDIANNESS_ALL)
#	define Z_CPU_INTEGRAL_ENDIANNESS(bits) Z_CPU_INTEGRAL_ENDIANNESS_ALL

#elif defined(Z_COMPILER_CPU_INTEGRAL_ENDIANNESS_ALL)
#	define Z_CPU_INTEGRAL_ENDIANNESS(bits) Z_COMPILER_CPU_INTEGRAL_ENDIANNESS_ALL

#else
#	if !defined(Z_CPU_INTEGRAL_ENDIANNESS_16BIT) && defined(Z_COMPILER_CPU_INTEGRAL_ENDIANNESS_16BIT)
#		define Z_CPU_INTEGRAL_ENDIANNESS_16BIT Z_COMPILER_CPU_INTEGRAL_ENDIANNESS_16BIT
#	endif

#	if !defined(Z_CPU_INTEGRAL_ENDIANNESS_32BIT) && defined(Z_COMPILER_CPU_INTEGRAL_ENDIANNESS_32BIT)
#		define Z_CPU_INTEGRAL_ENDIANNESS_32BIT Z_COMPILER_CPU_INTEGRAL_ENDIANNESS_32BIT
#	endif

#	if !defined(Z_CPU_INTEGRAL_ENDIANNESS_64BIT) && defined(Z_COMPILER_CPU_INTEGRAL_ENDIANNESS_64BIT)
#		define Z_CPU_INTEGRAL_ENDIANNESS_64BIT Z_COMPILER_CPU_INTEGRAL_ENDIANNESS_64BIT
#	endif

#	if !defined(Z_CPU_INTEGRAL_ENDIANNESS_128BIT) && defined(Z_COMPILER_CPU_INTEGRAL_ENDIANNESS_128BIT)
#		define Z_CPU_INTEGRAL_ENDIANNESS_128BIT Z_COMPILER_CPU_INTEGRAL_ENDIANNESS_128BIT
#	endif

#	define Z_CPU_INTEGRAL_ENDIANNESS(bits) Z_CPU_INTEGRAL_ENDIANNESS_##bits##BIT
#endif

#if defined(Z_CPU_INTEGER_FORMAT_ALL)

#	if Z_CPU_INTEGER_FORMAT_ALL == Z_INTEGER_FORMAT_2S_COMPLEMENT
#		define Z_CPU_INTEGER_FORMAT(bits) Z_NUMBER_FORMAT_2S_COMPLEMENT_##bits##BIT_INTEGER

#	elif Z_CPU_INTEGER_FORMAT_ALL == Z_INTEGER_FORMAT_1S_COMPLEMENT
#		define Z_CPU_INTEGER_FORMAT(bits) Z_NUMBER_FORMAT_1S_COMPLEMENT_##bits##BIT_INTEGER
#	endif

#elif defined(Z_COMPILER_CPU_INTEGER_FORMAT_ALL)

#	if Z_COMPILER_CPU_INTEGER_FORMAT_ALL == Z_INTEGER_FORMAT_2S_COMPLEMENT
#		define Z_CPU_INTEGER_FORMAT(bits) Z_NUMBER_FORMAT_2S_COMPLEMENT_##bits##BIT_INTEGER

#	elif Z_COMPILER_CPU_INTEGER_FORMAT_ALL == Z_INTEGER_FORMAT_1S_COMPLEMENT
#		define Z_CPU_INTEGER_FORMAT(bits) Z_NUMBER_FORMAT_1S_COMPLEMENT_##bits##BIT_INTEGER
#	endif

#else
#	if !defined(Z_CPU_INTEGER_FORMAT_8BIT) && defined(Z_COMPILER_CPU_INTEGER_FORMAT_8BIT)
#		define Z_CPU_INTEGER_FORMAT_8BIT Z_COMPILER_CPU_INTEGER_FORMAT_8BIT
#	endif

#	if !defined(Z_CPU_INTEGER_FORMAT_16BIT) && defined(Z_COMPILER_CPU_INTEGER_FORMAT_16BIT)
#		define Z_CPU_INTEGER_FORMAT_16BIT Z_COMPILER_CPU_INTEGER_FORMAT_16BIT
#	endif

#	if !defined(Z_CPU_INTEGER_FORMAT_32BIT) && defined(Z_COMPILER_CPU_INTEGER_FORMAT_32BIT)
#		define Z_CPU_INTEGER_FORMAT_32BIT Z_COMPILER_CPU_INTEGER_FORMAT_32BIT
#	endif

#	if !defined(Z_CPU_INTEGER_FORMAT_64BIT) && defined(Z_COMPILER_CPU_INTEGER_FORMAT_64BIT)
#		define Z_CPU_INTEGER_FORMAT_64BIT Z_COMPILER_CPU_INTEGER_FORMAT_64BIT
#	endif

#	if !defined(Z_CPU_INTEGER_FORMAT_128BIT) && defined(Z_COMPILER_CPU_INTEGER_FORMAT_128BIT)
#		define Z_CPU_INTEGER_FORMAT_128BIT Z_COMPILER_CPU_INTEGER_FORMAT_128BIT
#	endif

#	define Z_CPU_INTEGER_FORMAT(bits) Z_CPU_INTEGER_FORMAT_##bits##BIT
#endif

#endif /* Z_inspection_CPU_H */
