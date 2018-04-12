/* Z Kit C++ API - classes/base/InitializerList.hpp
 _____  _______________
/_   /_/  -_/_   _/  _ |
 /____/\___/ /__//___/_| Kit
Copyright (C) 2006-2018 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef __Z_classes_base_InitializerList_HPP__
#define __Z_classes_base_InitializerList_HPP__

#include <Z/types/base.hpp>


namespace Zeta {template <class T> class InitializerList {

	private:
	const T* _begin;
	USize	 _size;

	public:

	Z_INLINE_MEMBER InitializerList()
	: _begin(NULL), _size(0) {}

	Z_INLINE_MEMBER InitializerList(const T *begin, USize size)
	: _begin(begin), _size(size) {}

	Z_INLINE_MEMBER USize	 size () const {return _size;}
	Z_INLINE_MEMBER const T *begin() const {return _begin;}
	Z_INLINE_MEMBER const T *end  () const {return _begin + _size;} 
};}


#endif // __Z_classes_base_InitializerList_HPP__