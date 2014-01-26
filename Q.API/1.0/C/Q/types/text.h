/* Q API - types/text.h
	      __	   __
  _______ ___/ /______ ___/ /__
 / __/ -_) _  / __/ _ \ _  / -_)
/_/  \__/\_,_/\__/\___/_,_/\__/
Copyright © 2006-2014 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU General Public License v3. */

#ifndef __Q_types_text_H__
#define __Q_types_text_H__

#include <Q/types/base.h>
#include <Q/keys/text.h>
#include <Q/keys/formats/character set.h>

typedef quint8	QTextLineBreakMode;
typedef quint16 QCharacterSet;

typedef struct {
	qsize	      size;
	QString*      data;
	qsize	      character_count;
	QCharacterSet character_set;
} QText;

#endif /* __Q_types_text_H__ */
