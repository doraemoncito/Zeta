/* Q API - hardware/CPU/architecture/x86-32.h
	      __	   __
  _______ ___/ /______ ___/ /__
 / __/ -_) _  / __/ _ \ _  / -_)
/_/  \__/\_,_/\__/\___/_,_/\__/
Copyright © 2009 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU General Public License v2. */

#ifndef __Q_hardware_CPU_architecture_x86_32_H__
#define __Q_hardware_CPU_architecture_x86_32_H__

#include <Q/keys/endianness.h>

#ifdef Q_INSPECTING
#	define Q_CPU_ARCHITECTURE_TOKEN X86_32
#endif

#define Q_X86_32_HAS_MMU
#define Q_X86_32_HAS_FPU
#define Q_X86_32_HAS_64BIT_ARITHMETIC
#define Q_X86_32_IS_CAPABLE_OF_8BIT_ATOMICS
#define Q_X86_32_IS_CAPABLE_OF_16BIT_ATOMICS
#define Q_X86_32_IS_CAPABLE_OF_32BIT_ATOMICS
#define Q_X86_32_IS_CAPABLE_OF_64BIT_ATOMICS
#define Q_X86_32_MINIMUM_LOAD_BITS		 8
#define Q_X86_32_MINIMUM_STORE_BITS		 8
#define Q_X86_32_MINIMUM_COPY_BITS		 8
#define Q_X86_32_MAXIMUM_LOAD_BITS		64
#define Q_X86_32_MAXIMUM_STORE_BITS		64
#define Q_X86_32_MAXIMUM_COPY_BITS		64
#define Q_X86_32_ADDRESSING_BITS		32
#define Q_X86_32_ENDIANNESS			Q_ENDIANNESS_LITTLE

#endif /* __Q_hardware_CPU_architecture_x86_32_H__ */
