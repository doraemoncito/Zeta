/* Q API - formats/data model/ILP32.h
	      __	   __
  _______ ___/ /______ ___/ /__
 / __/ -_) _  / __/ _ \ _  / -_)
/_/  \__/\_,_/\__/\___/_,_/\__/
Copyright © 2006-2012 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU General Public License v2. */

#ifndef __Q_formats_data_model_ILP32_H__
#define __Q_formats_data_model_ILP32_H__

#include <Q/keys/type.h>

#define Q_ILP32_BITS_CHAR		 8
#define Q_ILP32_BITS_SHORT		16
#define Q_ILP32_BITS_INT		32
#define Q_ILP32_BITS_LONG		32
#define Q_ILP32_BITS_LLONG		64
#define Q_ILP32_BITS_POINTER		32
#define Q_ILP32_BITS_SIZE		32

#define Q_ILP32_TYPE_UINT8		unsigned char
#define Q_ILP32_TYPE_UINT16		unsigned short int
#define Q_ILP32_TYPE_UINT32		unsigned int
#define Q_ILP32_TYPE_UINT64		unsigned long long int
#define Q_ILP32_TYPE_SIZE		unsigned long int
#define Q_ILP32_TYPE_INT8		signed char
#define Q_ILP32_TYPE_INT16		signed short int
#define Q_ILP32_TYPE_INT32		signed int
#define Q_ILP32_TYPE_INT64		signed long long int
#define Q_ILP32_TYPE_SSIZE		signed long int

#define Q_ILP32_BASE_TYPE_UINT8		Q_TYPE_UCHAR
#define Q_ILP32_BASE_TYPE_UINT16	Q_TYPE_USHORT
#define Q_ILP32_BASE_TYPE_UINT32	Q_TYPE_UINT
#define Q_ILP32_BASE_TYPE_UINT64	Q_TYPE_ULLONG
#define Q_ILP32_BASE_TYPE_INT8		Q_TYPE_CHAR
#define Q_ILP32_BASE_TYPE_INT16		Q_TYPE_SHORT
#define Q_ILP32_BASE_TYPE_INT32		Q_TYPE_INT
#define Q_ILP32_BASE_TYPE_INT64		Q_TYPE_LLONG

#define Q_ILP32_LITERAL_UINT32(value)	value
#define Q_ILP32_LITERAL_UINT64(value)	value##ULL
#define Q_ILP32_LITERAL_INT32( value)	value
#define Q_ILP32_LITERAL_INT64( value)	value##LL

#endif /* __Q_formats_data_model_ILP32_H__ */
