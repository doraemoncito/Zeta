/* Q API - types/allocation.h
	      __	   __
  _______ ___/ /______ ___/ /__
 / __/ -_) _  / __/ _ \ _  / -_)
/_/  \__/\_,_/\__/\___/_,_/\__/
Copyright © 2006-2013 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU General Public License v3. */

#ifndef __Q_types_allocation_H__
#define __Q_types_allocation_H__

#include <Q/ABIs/QAllocationABI.h>

typedef struct {
	QAllocationABI *abi;
	void *context;
} QZone;

#define Q_ZONE(p) ((QZone *)(p))

#endif /* __Q_types_allocation_H__ */
