/* Q C API - inspection/private/compiler/template.h
	      __	   __
  _______ ___/ /______ ___/ /__
 / __/ -_) _  / __/ _ \ _  / -_)
/_/  \__/\_,_/\__/\___/_,_/\__/
Copyright © 2006-2015 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef __Q_inspection_private_template_H__
#define __Q_inspection_private_template_H__

#include <Q/keys/compiler.h>
#include <Q/keys/bit field.h>
#include <Q/macros/version.h>

/* MARK: - Identification */

/*#define Q_COMPILER*/
/*#define Q_COMPILER_STRING*/
/*#define Q_COMPILER_VERSION*/
/*#define Q_COMPILER_VERSION_STRING*/

/* MARK: - Bit field encoding */

/*#define Q_COMPILER_LITTLE_ENDIAN_8BIT_FIELD_ENCODING*/
/*#define Q_COMPILER_LITTLE_ENDIAN_BIT_FIELD_ENCODING*/
/*#define Q_COMPILER_BIG_ENDIAN_8BIT_FIELD_ENCODING*/
/*#define Q_COMPILER_BIG_ENDIAN_BIT_FIELD_ENCODING*/

/* MARK: - C Features */

/*#define Q_COMPILER_C_HAS_ANONYMOUS_FUNCTION*/
/*#define Q_COMPILER_C_HAS_ANONYMOUS_STRUCTURE*/
/*#define Q_COMPILER_C_HAS_ANONYMOUS_UNION*/
/*#define Q_COMPILER_C_HAS_ATOMIC_OPERATIONS*/
/*#define Q_COMPILER_C_HAS_CLOSURE*/
/*#define Q_COMPILER_C_HAS_COMPOUND_LITERAL*/
/*#define Q_COMPILER_C_HAS_DESIGNATED_INITIALIZER*/
/*#define Q_COMPILER_C_HAS_GENERIC_SELECTION*/

/* MARK: - C Attributes */

/*#define Q_COMPILER_C_ATTRIBUTE_ALIAS*/
/*#define Q_COMPILER_C_ATTRIBUTE_API*/
/*#define Q_COMPILER_C_ATTRIBUTE_API_ALIAS*/
/*#define Q_COMPILER_C_ATTRIBUTE_INLINE*/
/*#define Q_COMPILER_C_ATTRIBUTE_PRIVATE*/
/*#define Q_COMPILER_C_ATTRIBUTE_PUBLIC*/
/*#define Q_COMPILER_C_ATTRIBUTE_STRICT_SIZE_BEGIN*/
/*#define Q_COMPILER_C_ATTRIBUTE_STRICT_SIZE_END*/
/*#define Q_COMPILER_C_ATTRIBUTE_THREAD_LOCAL*/
/*#define Q_COMPILER_C_ATTRIBUTE_WEAK*/

/* MARK: - Built-in constants */

/*#define Q_COMPILER_CONSTANT_UCHAR_BITS*/
/*#define Q_COMPILER_CONSTANT_UCHAR_SIZE*/
/*#define Q_COMPILER_CONSTANT_UCHAR_MAXIMUM*/

/*#define Q_COMPILER_CONSTANT_USHORT_BITS*/
/*#define Q_COMPILER_CONSTANT_USHORT_SIZE*/
/*#define Q_COMPILER_CONSTANT_USHORT_MAXIMUM*/

/*#define Q_COMPILER_CONSTANT_UINT_BITS*/
/*#define Q_COMPILER_CONSTANT_UINT_SIZE*/
/*#define Q_COMPILER_CONSTANT_UINT_MAXIMUM*/

/*#define Q_COMPILER_CONSTANT_ULONG_BITS*/
/*#define Q_COMPILER_CONSTANT_ULONG_SIZE*/
/*#define Q_COMPILER_CONSTANT_ULONG_MAXIMUM*/

/*#define Q_COMPILER_CONSTANT_ULLONG_BITS*/
/*#define Q_COMPILER_CONSTANT_ULLONG_SIZE*/
/*#define Q_COMPILER_CONSTANT_ULLONG_MAXIMUM*/

/*#define Q_COMPILER_CONSTANT_CHAR_BITS*/
/*#define Q_COMPILER_CONSTANT_CHAR_SIZE*/
/*#define Q_COMPILER_CONSTANT_CHAR_MINIMUM*/
/*#define Q_COMPILER_CONSTANT_CHAR_MAXIMUM*/

/*#define Q_COMPILER_CONSTANT_SHORT_BITS*/
/*#define Q_COMPILER_CONSTANT_SHORT_SIZE*/
/*#define Q_COMPILER_CONSTANT_SHORT_MINIMUM*/
/*#define Q_COMPILER_CONSTANT_SHORT_MAXIMUM*/

/*#define Q_COMPILER_CONSTANT_INT_BITS*/
/*#define Q_COMPILER_CONSTANT_INT_SIZE*/
/*#define Q_COMPILER_CONSTANT_INT_MINIMUM*/
/*#define Q_COMPILER_CONSTANT_INT_MAXIMUM*/

/*#define Q_COMPILER_CONSTANT_LONG_BITS*/
/*#define Q_COMPILER_CONSTANT_LONG_SIZE*/
/*#define Q_COMPILER_CONSTANT_LONG_MINIMUM*/
/*#define Q_COMPILER_CONSTANT_LONG_MAXIMUM*/

/*#define Q_COMPILER_CONSTANT_LLONG_BITS*/
/*#define Q_COMPILER_CONSTANT_LLONG_SIZE*/
/*#define Q_COMPILER_CONSTANT_LLONG_MINIMUM*/
/*#define Q_COMPILER_CONSTANT_LLONG_MAXIMUM*/

/*#define Q_COMPILER_CONSTANT_FLOAT_BITS*/
/*#define Q_COMPILER_CONSTANT_FLOAT_SIZE*/
/*#define Q_COMPILER_CONSTANT_FLOAT_BIAS*/
/*#define Q_COMPILER_CONSTANT_FLOAT_EPSILON*/
/*#define Q_COMPILER_CONSTANT_FLOAT_MINIMUM*/
/*#define Q_COMPILER_CONSTANT_FLOAT_MAXIMUM*/
/*#define Q_COMPILER_CONSTANT_FLOAT_DECIMAL_DIGITS*/
/*#define Q_COMPILER_CONSTANT_FLOAT_MANTISSA_OFFSET*/
/*#define Q_COMPILER_CONSTANT_FLOAT_MANTISSA_BITS*/
/*#define Q_COMPILER_CONSTANT_FLOAT_MANTISSA_DIGITS*/
/*#define Q_COMPILER_CONSTANT_FLOAT_EXPONENT_OFFSET*/
/*#define Q_COMPILER_CONSTANT_FLOAT_EXPONENT_BITS*/
/*#define Q_COMPILER_CONSTANT_FLOAT_EXPONENT_RADIX*/
/*#define Q_COMPILER_CONSTANT_FLOAT_EXPONENT_MINIMUM*/
/*#define Q_COMPILER_CONSTANT_FLOAT_EXPONENT_MAXIMUM*/
/*#define Q_COMPILER_CONSTANT_FLOAT_EXPONENT_10_MINIMUM*/
/*#define Q_COMPILER_CONSTANT_FLOAT_EXPONENT_10_MAXIMUM*/
/*#define Q_COMPILER_CONSTANT_FLOAT_SIGN_OFFSET*/
/*#define Q_COMPILER_CONSTANT_FLOAT_SIGN_BITS*/
/*#define Q_COMPILER_CONSTANT_FLOAT_INFINITY*/
/*#define Q_COMPILER_CONSTANT_FLOAT_NAN*/

/*#define Q_COMPILER_CONSTANT_DOUBLE_BITS*/
/*#define Q_COMPILER_CONSTANT_DOUBLE_SIZE*/
/*#define Q_COMPILER_CONSTANT_DOUBLE_BIAS*/
/*#define Q_COMPILER_CONSTANT_DOUBLE_EPSILON*/
/*#define Q_COMPILER_CONSTANT_DOUBLE_MINIMUM*/
/*#define Q_COMPILER_CONSTANT_DOUBLE_MAXIMUM*/
/*#define Q_COMPILER_CONSTANT_DOUBLE_DECIMAL_DIGITS*/
/*#define Q_COMPILER_CONSTANT_DOUBLE_MANTISSA_OFFSET*/
/*#define Q_COMPILER_CONSTANT_DOUBLE_MANTISSA_BITS*/
/*#define Q_COMPILER_CONSTANT_DOUBLE_MANTISSA_DIGITS*/
/*#define Q_COMPILER_CONSTANT_DOUBLE_EXPONENT_OFFSET*/
/*#define Q_COMPILER_CONSTANT_DOUBLE_EXPONENT_BITS*/
/*#define Q_COMPILER_CONSTANT_DOUBLE_EXPONENT_RADIX*/
/*#define Q_COMPILER_CONSTANT_DOUBLE_EXPONENT_MINIMUM*/
/*#define Q_COMPILER_CONSTANT_DOUBLE_EXPONENT_MAXIMUM*/
/*#define Q_COMPILER_CONSTANT_DOUBLE_EXPONENT_10_MINIMUM*/
/*#define Q_COMPILER_CONSTANT_DOUBLE_EXPONENT_10_MAXIMUM*/
/*#define Q_COMPILER_CONSTANT_DOUBLE_SIGN_OFFSET*/
/*#define Q_COMPILER_CONSTANT_DOUBLE_SIGN_BITS*/
/*#define Q_COMPILER_CONSTANT_DOUBLE_INFINITY*/
/*#define Q_COMPILER_CONSTANT_DOUBLE_NAN*/

/*#define Q_COMPILER_CONSTANT_LDOUBLE_BITS*/
/*#define Q_COMPILER_CONSTANT_LDOUBLE_SIZE*/
/*#define Q_COMPILER_CONSTANT_LDOUBLE_BIAS*/
/*#define Q_COMPILER_CONSTANT_LDOUBLE_EPSILON*/
/*#define Q_COMPILER_CONSTANT_LDOUBLE_MINIMUM*/
/*#define Q_COMPILER_CONSTANT_LDOUBLE_MAXIMUM*/
/*#define Q_COMPILER_CONSTANT_LDOUBLE_DECIMAL_DIGITS*/
/*#define Q_COMPILER_CONSTANT_LDOUBLE_MANTISSA_OFFSET*/
/*#define Q_COMPILER_CONSTANT_LDOUBLE_MANTISSA_BITS*/
/*#define Q_COMPILER_CONSTANT_LDOUBLE_MANTISSA_DIGITS*/
/*#define Q_COMPILER_CONSTANT_LDOUBLE_EXPONENT_OFFSET*/
/*#define Q_COMPILER_CONSTANT_LDOUBLE_EXPONENT_BITS*/
/*#define Q_COMPILER_CONSTANT_LDOUBLE_EXPONENT_RADIX*/
/*#define Q_COMPILER_CONSTANT_LDOUBLE_EXPONENT_MINIMUM*/
/*#define Q_COMPILER_CONSTANT_LDOUBLE_EXPONENT_MAXIMUM*/
/*#define Q_COMPILER_CONSTANT_LDOUBLE_EXPONENT_10_MINIMUM*/
/*#define Q_COMPILER_CONSTANT_LDOUBLE_EXPONENT_10_MAXIMUM*/
/*#define Q_COMPILER_CONSTANT_LDOUBLE_SIGN_OFFSET*/
/*#define Q_COMPILER_CONSTANT_LDOUBLE_SIGN_BITS*/
/*#define Q_COMPILER_CONSTANT_LDOUBLE_INFINITY*/
/*#define Q_COMPILER_CONSTANT_LDOUBLE_NAN*/

/*#define Q_COMPILER_CONSTANT_SIZE_BITS*/
/*#define Q_COMPILER_CONSTANT_SIZE_SIZE*/
/*#define Q_COMPILER_CONSTANT_SIZE_MAXIMUM*/

/*#define Q_COMPILER_CONSTANT_UINTMIN_BITS*/
/*#define Q_COMPILER_CONSTANT_UINTMIN_SIZE*/
/*#define Q_COMPILER_CONSTANT_UINTMIN_MAXIMUM*/

/*#define Q_COMPILER_CONSTANT_UINTMAX_BITS*/
/*#define Q_COMPILER_CONSTANT_UINTMAX_SIZE*/
/*#define Q_COMPILER_CONSTANT_UINTMAX_MAXIMUM*/

/*#define Q_COMPILER_CONSTANT_UINTPTR_BITS*/
/*#define Q_COMPILER_CONSTANT_UINTPTR_SIZE*/
/*#define Q_COMPILER_CONSTANT_UINTPTR_MAXIMUM*/

/*#define Q_COMPILER_CONSTANT_UINTTOP_BITS*/
/*#define Q_COMPILER_CONSTANT_UINTTOP_SIZE*/
/*#define Q_COMPILER_CONSTANT_UINTTOP_MAXIMUM*/

/*#define Q_COMPILER_CONSTANT_SSIZE_BITS*/
/*#define Q_COMPILER_CONSTANT_SSIZE_SIZE*/
/*#define Q_COMPILER_CONSTANT_SSIZE_MINIMUM*/
/*#define Q_COMPILER_CONSTANT_SSIZE_MAXIMUM*/

/*#define Q_COMPILER_CONSTANT_INTMIN_BITS*/
/*#define Q_COMPILER_CONSTANT_INTMIN_SIZE*/
/*#define Q_COMPILER_CONSTANT_INTMIN_MINIMUM*/
/*#define Q_COMPILER_CONSTANT_INTMIN_MAXIMUM*/

/*#define Q_COMPILER_CONSTANT_INTMAX_BITS*/
/*#define Q_COMPILER_CONSTANT_INTMAX_SIZE*/
/*#define Q_COMPILER_CONSTANT_INTMAX_MINIMUM*/
/*#define Q_COMPILER_CONSTANT_INTMAX_MAXIMUM*/

/*#define Q_COMPILER_CONSTANT_INTPTR_BITS*/
/*#define Q_COMPILER_CONSTANT_INTPTR_SIZE*/
/*#define Q_COMPILER_CONSTANT_INTPTR_MINIMUM*/
/*#define Q_COMPILER_CONSTANT_INTPTR_MAXIMUM*/

/*#define Q_COMPILER_CONSTANT_INTTOP_BITS*/
/*#define Q_COMPILER_CONSTANT_INTTOP_SIZE*/
/*#define Q_COMPILER_CONSTANT_INTTOP_MINIMUM*/
/*#define Q_COMPILER_CONSTANT_INTTOP_MAXIMUM*/

/* MARK: - Built-in types */

/*#define Q_COMPILER_TYPE_UINT8*/
/*#define Q_COMPILER_TYPE_UINT16*/
/*#define Q_COMPILER_TYPE_UINT32*/
/*#define Q_COMPILER_TYPE_UINT64*/
/*#define Q_COMPILER_TYPE_UINT128*/
/*#define Q_COMPILER_TYPE_INT8*/
/*#define Q_COMPILER_TYPE_INT16*/
/*#define Q_COMPILER_TYPE_INT32*/
/*#define Q_COMPILER_TYPE_INT128*/
/*#define Q_COMPILER_TYPE_SIZE*/
/*#define Q_COMPILER_TYPE_UINTMIN*/
/*#define Q_COMPILER_TYPE_UINTMAX*/
/*#define Q_COMPILER_TYPE_UINTPTR*/
/*#define Q_COMPILER_TYPE_UINTTOP*/
/*#define Q_COMPILER_TYPE_SSIZE*/
/*#define Q_COMPILER_TYPE_INTMIN*/
/*#define Q_COMPILER_TYPE_INTMAX*/
/*#define Q_COMPILER_TYPE_INTPTR*/
/*#define Q_COMPILER_TYPE_INTTOP*/

/*#define Q_COMPILER_TYPE_VAL*/

/* MARK: - Built-in functions: Struture */

/*#define Q_COMPILER_FUNCTION_OFFSETOF*/

/* MARK: - Built-in functions: VAL */

/*#define Q_COMPILER_FUNCTION_VAL_INITIALIZE*/
/*#define Q_COMPILER_FUNCTION_VAL_FINALIZE*/
/*#define Q_COMPILER_FUNCTION_VAL_READ*/
/*#define Q_COMPILER_FUNCTION_VAL_COPY*/

/* MARK: - Built-in functions: Atomic operations */

/*#define Q_COMPILER_FUNCTION_UINT8_ATOMIC_SET_IF_EQUAL*/
/*#define Q_COMPILER_FUNCTION_UINT16_ATOMIC_SET_IF_EQUAL*/
/*#define Q_COMPILER_FUNCTION_UINT32_ATOMIC_SET_IF_EQUAL*/
/*#define Q_COMPILER_FUNCTION_UINT64_ATOMIC_SET_IF_EQUAL*/
/*#define Q_COMPILER_FUNCTION_UINT128_ATOMIC_SET_IF_EQUAL*/
/*#define Q_COMPILER_FUNCTION_INT8_ATOMIC_SET_IF_EQUAL*/
/*#define Q_COMPILER_FUNCTION_INT16_ATOMIC_SET_IF_EQUAL*/
/*#define Q_COMPILER_FUNCTION_INT32_ATOMIC_SET_IF_EQUAL*/
/*#define Q_COMPILER_FUNCTION_INT64_ATOMIC_SET_IF_EQUAL*/
/*#define Q_COMPILER_FUNCTION_INT128_ATOMIC_SET_IF_EQUAL*/

/*#define Q_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_SET*/
/*#define Q_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_SET*/
/*#define Q_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_SET*/
/*#define Q_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_SET*/
/*#define Q_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_SET*/
/*#define Q_COMPILER_FUNCTION_INT8_ATOMIC_GET_THEN_SET*/
/*#define Q_COMPILER_FUNCTION_INT16_ATOMIC_GET_THEN_SET*/
/*#define Q_COMPILER_FUNCTION_INT32_ATOMIC_GET_THEN_SET*/
/*#define Q_COMPILER_FUNCTION_INT64_ATOMIC_GET_THEN_SET*/
/*#define Q_COMPILER_FUNCTION_INT128_ATOMIC_GET_THEN_SET*/

/*#define Q_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_INCREMENT*/
/*#define Q_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_INCREMENT*/
/*#define Q_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_INCREMENT*/
/*#define Q_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_INCREMENT*/
/*#define Q_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_INCREMENT*/
/*#define Q_COMPILER_FUNCTION_INT8_ATOMIC_GET_THEN_INCREMENT*/
/*#define Q_COMPILER_FUNCTION_INT16_ATOMIC_GET_THEN_INCREMENT*/
/*#define Q_COMPILER_FUNCTION_INT32_ATOMIC_GET_THEN_INCREMENT*/
/*#define Q_COMPILER_FUNCTION_INT64_ATOMIC_GET_THEN_INCREMENT*/
/*#define Q_COMPILER_FUNCTION_INT128_ATOMIC_GET_THEN_INCREMENT*/

/*#define Q_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_ADD*/
/*#define Q_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_ADD*/
/*#define Q_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_ADD*/
/*#define Q_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_ADD*/
/*#define Q_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_ADD*/
/*#define Q_COMPILER_FUNCTION_INT8_ATOMIC_GET_THEN_ADD*/
/*#define Q_COMPILER_FUNCTION_INT16_ATOMIC_GET_THEN_ADD*/
/*#define Q_COMPILER_FUNCTION_INT32_ATOMIC_GET_THEN_ADD*/
/*#define Q_COMPILER_FUNCTION_INT64_ATOMIC_GET_THEN_ADD*/
/*#define Q_COMPILER_FUNCTION_INT128_ATOMIC_GET_THEN_ADD*/

/*#define Q_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_DECREMENT*/
/*#define Q_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_DECREMENT*/
/*#define Q_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_DECREMENT*/
/*#define Q_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_DECREMENT*/
/*#define Q_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_DECREMENT*/
/*#define Q_COMPILER_FUNCTION_INT8_ATOMIC_GET_THEN_DECREMENT*/
/*#define Q_COMPILER_FUNCTION_INT16_ATOMIC_GET_THEN_DECREMENT*/
/*#define Q_COMPILER_FUNCTION_INT32_ATOMIC_GET_THEN_DECREMENT*/
/*#define Q_COMPILER_FUNCTION_INT64_ATOMIC_GET_THEN_DECREMENT*/
/*#define Q_COMPILER_FUNCTION_INT128_ATOMIC_GET_THEN_DECREMENT*/

/*#define Q_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Q_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Q_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Q_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Q_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Q_COMPILER_FUNCTION_INT8_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Q_COMPILER_FUNCTION_INT16_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Q_COMPILER_FUNCTION_INT32_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Q_COMPILER_FUNCTION_INT64_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Q_COMPILER_FUNCTION_INT128_ATOMIC_GET_THEN_SUBTRACT*/

/*#define Q_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_AND*/
/*#define Q_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_AND*/
/*#define Q_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_AND*/
/*#define Q_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_AND*/
/*#define Q_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_AND*/
/*#define Q_COMPILER_FUNCTION_INT8_ATOMIC_GET_THEN_AND*/
/*#define Q_COMPILER_FUNCTION_INT16_ATOMIC_GET_THEN_AND*/
/*#define Q_COMPILER_FUNCTION_INT32_ATOMIC_GET_THEN_AND*/
/*#define Q_COMPILER_FUNCTION_INT64_ATOMIC_GET_THEN_AND*/
/*#define Q_COMPILER_FUNCTION_INT128_ATOMIC_GET_THEN_AND*/

/*#define Q_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_OR*/
/*#define Q_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_OR*/
/*#define Q_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_OR*/
/*#define Q_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_OR*/
/*#define Q_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_OR*/
/*#define Q_COMPILER_FUNCTION_INT8_ATOMIC_GET_THEN_OR*/
/*#define Q_COMPILER_FUNCTION_INT16_ATOMIC_GET_THEN_OR*/
/*#define Q_COMPILER_FUNCTION_INT32_ATOMIC_GET_THEN_OR*/
/*#define Q_COMPILER_FUNCTION_INT64_ATOMIC_GET_THEN_OR*/
/*#define Q_COMPILER_FUNCTION_INT128_ATOMIC_GET_THEN_OR*/

/*#define Q_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_XOR*/
/*#define Q_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_XOR*/
/*#define Q_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_XOR*/
/*#define Q_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_XOR*/
/*#define Q_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_XOR*/
/*#define Q_COMPILER_FUNCTION_INT8_ATOMIC_GET_THEN_XOR*/
/*#define Q_COMPILER_FUNCTION_INT16_ATOMIC_GET_THEN_XOR*/
/*#define Q_COMPILER_FUNCTION_INT32_ATOMIC_GET_THEN_XOR*/
/*#define Q_COMPILER_FUNCTION_INT64_ATOMIC_GET_THEN_XOR*/
/*#define Q_COMPILER_FUNCTION_INT128_ATOMIC_GET_THEN_XOR*/

/*#define Q_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_NAND*/
/*#define Q_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_NAND*/
/*#define Q_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_NAND*/
/*#define Q_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_NAND*/
/*#define Q_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_NAND*/
/*#define Q_COMPILER_FUNCTION_INT8_ATOMIC_GET_THEN_NAND*/
/*#define Q_COMPILER_FUNCTION_INT16_ATOMIC_GET_THEN_NAND*/
/*#define Q_COMPILER_FUNCTION_INT32_ATOMIC_GET_THEN_NAND*/
/*#define Q_COMPILER_FUNCTION_INT64_ATOMIC_GET_THEN_NAND*/
/*#define Q_COMPILER_FUNCTION_INT128_ATOMIC_GET_THEN_NAND*/

/*#define Q_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_NOT*/
/*#define Q_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_NOT*/
/*#define Q_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_NOT*/
/*#define Q_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_NOT*/
/*#define Q_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_NOT*/
/*#define Q_COMPILER_FUNCTION_INT8_ATOMIC_GET_THEN_NOT*/
/*#define Q_COMPILER_FUNCTION_INT16_ATOMIC_GET_THEN_NOT*/
/*#define Q_COMPILER_FUNCTION_INT32_ATOMIC_GET_THEN_NOT*/
/*#define Q_COMPILER_FUNCTION_INT64_ATOMIC_GET_THEN_NOT*/
/*#define Q_COMPILER_FUNCTION_INT128_ATOMIC_GET_THEN_NOT*/

/*#define Q_COMPILER_FUNCTION_UINT8_ATOMIC_INCREMENT_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_UINT16_ATOMIC_INCREMENT_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_UINT32_ATOMIC_INCREMENT_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_UINT64_ATOMIC_INCREMENT_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_UINT128_ATOMIC_INCREMENT_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_INT8_ATOMIC_INCREMENT_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_INT16_ATOMIC_INCREMENT_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_INT32_ATOMIC_INCREMENT_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_INT64_ATOMIC_INCREMENT_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_INT128_ATOMIC_INCREMENT_THEN_GET*/

/*#define Q_COMPILER_FUNCTION_UINT8_ATOMIC_ADD_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_UINT16_ATOMIC_ADD_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_UINT32_ATOMIC_ADD_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_UINT64_ATOMIC_ADD_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_UINT128_ATOMIC_ADD_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_INT8_ATOMIC_ADD_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_INT16_ATOMIC_ADD_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_INT32_ATOMIC_ADD_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_INT64_ATOMIC_ADD_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_INT128_ATOMIC_ADD_THEN_GET*/

/*#define Q_COMPILER_FUNCTION_UINT8_ATOMIC_DECREMENT_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_UINT16_ATOMIC_DECREMENT_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_UINT32_ATOMIC_DECREMENT_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_UINT64_ATOMIC_DECREMENT_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_UINT128_ATOMIC_DECREMENT_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_INT8_ATOMIC_DECREMENT_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_INT16_ATOMIC_DECREMENT_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_INT32_ATOMIC_DECREMENT_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_INT64_ATOMIC_DECREMENT_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_INT128_ATOMIC_DECREMENT_THEN_GET*/

/*#define Q_COMPILER_FUNCTION_UINT8_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_UINT16_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_UINT32_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_UINT64_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_UINT128_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_INT8_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_INT16_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_INT32_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_INT64_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_INT128_ATOMIC_SUBTRACT_THEN_GET*/

/*#define Q_COMPILER_FUNCTION_UINT8_ATOMIC_AND_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_UINT16_ATOMIC_AND_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_UINT32_ATOMIC_AND_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_UINT64_ATOMIC_AND_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_UINT128_ATOMIC_AND_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_INT8_ATOMIC_AND_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_INT16_ATOMIC_AND_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_INT32_ATOMIC_AND_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_INT64_ATOMIC_AND_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_INT128_ATOMIC_AND_THEN_GET*/

/*#define Q_COMPILER_FUNCTION_UINT8_ATOMIC_OR_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_UINT16_ATOMIC_OR_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_UINT32_ATOMIC_OR_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_UINT64_ATOMIC_OR_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_UINT128_ATOMIC_OR_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_INT8_ATOMIC_OR_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_INT16_ATOMIC_OR_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_INT32_ATOMIC_OR_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_INT64_ATOMIC_OR_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_INT128_ATOMIC_OR_THEN_GET*/

/*#define Q_COMPILER_FUNCTION_UINT8_ATOMIC_XOR_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_UINT16_ATOMIC_XOR_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_UINT32_ATOMIC_XOR_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_UINT64_ATOMIC_XOR_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_UINT128_ATOMIC_XOR_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_INT8_ATOMIC_XOR_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_INT16_ATOMIC_XOR_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_INT32_ATOMIC_XOR_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_INT64_ATOMIC_XOR_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_INT128_ATOMIC_XOR_THEN_GET*/

/*#define Q_COMPILER_FUNCTION_UINT8_ATOMIC_NAND_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_UINT16_ATOMIC_NAND_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_UINT32_ATOMIC_NAND_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_UINT64_ATOMIC_NAND_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_UINT128_ATOMIC_NAND_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_INT8_ATOMIC_NAND_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_INT16_ATOMIC_NAND_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_INT32_ATOMIC_NAND_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_INT64_ATOMIC_NAND_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_INT128_ATOMIC_NAND_THEN_GET*/

/*#define Q_COMPILER_FUNCTION_UINT8_ATOMIC_NOT_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_UINT16_ATOMIC_NOT_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_UINT32_ATOMIC_NOT_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_UINT64_ATOMIC_NOT_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_UINT128_ATOMIC_NOT_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_INT8_ATOMIC_NOT_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_INT16_ATOMIC_NOT_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_INT32_ATOMIC_NOT_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_INT64_ATOMIC_NOT_THEN_GET*/
/*#define Q_COMPILER_FUNCTION_INT128_ATOMIC_NOT_THEN_GET*/

#endif /* __Q_inspection_private_template_H__ */
