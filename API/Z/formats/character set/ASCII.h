/* Zeta API - Z/formats/character set/ASCII.h
 ______ ____________  ___
|__   /|  ___|__  __|/   \
  /  /_|  __|  |  | /  *  \
 /_____|_____| |__|/__/ \__\
Copyright (C) 2006-2023 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef Z_formats_character_set_ASCII_H
#define Z_formats_character_set_ASCII_H

#define Z_ASCII_NULL			  0x00
#define Z_ASCII_START_OF_HEADING	  0x01
#define Z_ASCII_START_OF_TEXT		  0x02
#define Z_ASCII_END_OF_TEXT		  0x03
#define Z_ASCII_END_OF_TRANSMISSION	  0x04
#define Z_ASCII_ENQUIRY			  0x05
#define Z_ASCII_ACKNOWLEDGE		  0x06
#define Z_ASCII_BELL			  0x07
#define Z_ASCII_BACKSPACE		  0x08
#define Z_ASCII_CHARACTER_TABULATION	  0x09
#define Z_ASCII_LINE_FEED		  0x0A
#define Z_ASCII_LINE_TABULATION		  0x0B
#define Z_ASCII_FORM_FEED		  0x0C
#define Z_ASCII_CARRIAGE_RETURN		  0x0D
#define Z_ASCII_SHIFT_OUT		  0x0E
#define Z_ASCII_SHIFT_IN		  0x0F
#define Z_ASCII_DATA_LINK_ESCAPE	  0x10
#define Z_ASCII_DEVICE_CONTROL_ONE	  0x11
#define Z_ASCII_DEVICE_CONTROL_TWO	  0x12
#define Z_ASCII_DEVICE_CONTROL_THREE	  0x13
#define Z_ASCII_DEVICE_CONTROL_FOUR	  0x14
#define Z_ASCII_NEGATIVE_ACKNOWLEDGE	  0x15
#define Z_ASCII_SYNCHRONOUS_IDLE	  0x16
#define Z_ASCII_END_OF_TRANSMISSION_BLOCK 0x17
#define Z_ASCII_CANCEL			  0x18
#define Z_ASCII_END_OF_MEDIUM		  0x19
#define Z_ASCII_SUBSTITUTE		  0x1A
#define Z_ASCII_ESCAPE			  0x1B
#define Z_ASCII_INFO_SEPARATOR_FOUR	  0x1C
#define Z_ASCII_INFO_SEPARATOR_THREE	  0x1D
#define Z_ASCII_INFO_SEPARATOR_TWO	  0x1E
#define Z_ASCII_INFO_SEPARATOR_ONE	  0x1F
#define Z_ASCII_SPACE			  0x20
#define Z_ASCII_EXCLAMATION_MARK	  0x21
#define Z_ASCII_QUOTATION_MARK		  0x22
#define Z_ASCII_NUMBER_SIGN		  0x23
#define Z_ASCII_DOLLAR_SIGN		  0x24
#define Z_ASCII_PERCENT_SIGN		  0x25
#define Z_ASCII_AMPERSAND		  0x26
#define Z_ASCII_APOSTROPHE		  0x27
#define Z_ASCII_LEFT_PARENTHESIS	  0x28
#define Z_ASCII_RIGHT_PARENTHESIS	  0x29
#define Z_ASCII_ASTERISK		  0x2A
#define Z_ASCII_PLUS_SIGN		  0x2B
#define Z_ASCII_COMMA			  0x2C
#define Z_ASCII_HYPHEN_MINUS		  0x2D
#define Z_ASCII_FULL_STOP		  0x2E
#define Z_ASCII_SOLIDUS			  0x2F
#define Z_ASCII_DIGIT_ZERO		  0x30
#define Z_ASCII_DIGIT_ONE		  0x31
#define Z_ASCII_DIGIT_TWO		  0x32
#define Z_ASCII_DIGIT_THREE		  0x33
#define Z_ASCII_DIGIT_FOUR		  0x34
#define Z_ASCII_DIGIT_FIVE		  0x35
#define Z_ASCII_DIGIT_SIX		  0x36
#define Z_ASCII_DIGIT_SEVEN		  0x37
#define Z_ASCII_DIGIT_EIGHT		  0x38
#define Z_ASCII_DIGIT_NINE		  0x39
#define Z_ASCII_COLON			  0x3A
#define Z_ASCII_SEMICOLON		  0x3B
#define Z_ASCII_LESS_THAN_SIGN		  0x3C
#define Z_ASCII_EQUALS_SIGN		  0x3D
#define Z_ASCII_GREATER_THAN_SIGN	  0x3E
#define Z_ASCII_QUESTION_MARK		  0x3F
#define Z_ASCII_COMMERCIAL_AT		  0x40
#define Z_ASCII_LATIN_CAPITAL_LETTER_A	  0x41
#define Z_ASCII_LATIN_CAPITAL_LETTER_B	  0x42
#define Z_ASCII_LATIN_CAPITAL_LETTER_C	  0x43
#define Z_ASCII_LATIN_CAPITAL_LETTER_D	  0x44
#define Z_ASCII_LATIN_CAPITAL_LETTER_E	  0x45
#define Z_ASCII_LATIN_CAPITAL_LETTER_F	  0x46
#define Z_ASCII_LATIN_CAPITAL_LETTER_G	  0x47
#define Z_ASCII_LATIN_CAPITAL_LETTER_H	  0x48
#define Z_ASCII_LATIN_CAPITAL_LETTER_I	  0x49
#define Z_ASCII_LATIN_CAPITAL_LETTER_J	  0x4A
#define Z_ASCII_LATIN_CAPITAL_LETTER_K	  0x4B
#define Z_ASCII_LATIN_CAPITAL_LETTER_L	  0x4C
#define Z_ASCII_LATIN_CAPITAL_LETTER_M	  0x4D
#define Z_ASCII_LATIN_CAPITAL_LETTER_N	  0x4E
#define Z_ASCII_LATIN_CAPITAL_LETTER_O	  0x4F
#define Z_ASCII_LATIN_CAPITAL_LETTER_P	  0x50
#define Z_ASCII_LATIN_CAPITAL_LETTER_Q	  0x51
#define Z_ASCII_LATIN_CAPITAL_LETTER_R	  0x52
#define Z_ASCII_LATIN_CAPITAL_LETTER_S	  0x53
#define Z_ASCII_LATIN_CAPITAL_LETTER_T	  0x54
#define Z_ASCII_LATIN_CAPITAL_LETTER_U	  0x55
#define Z_ASCII_LATIN_CAPITAL_LETTER_V	  0x56
#define Z_ASCII_LATIN_CAPITAL_LETTER_W	  0x57
#define Z_ASCII_LATIN_CAPITAL_LETTER_X	  0x58
#define Z_ASCII_LATIN_CAPITAL_LETTER_Y	  0x59
#define Z_ASCII_LATIN_CAPITAL_LETTER_Z	  0x5A
#define Z_ASCII_LEFT_SQUARE_BRACKET	  0x5B
#define Z_ASCII_REVERSE_SOLIDUS		  0x5C
#define Z_ASCII_RIGHT_SQUARE_BRACKET	  0x5D
#define Z_ASCII_CIRCUMFLEX_ACCENT	  0x5E
#define Z_ASCII_LOW_LINE		  0x5F
#define Z_ASCII_GRAVE_ACCENT		  0x60
#define Z_ASCII_LATIN_SMALL_LETTER_A	  0x61
#define Z_ASCII_LATIN_SMALL_LETTER_B	  0x62
#define Z_ASCII_LATIN_SMALL_LETTER_C	  0x63
#define Z_ASCII_LATIN_SMALL_LETTER_D	  0x64
#define Z_ASCII_LATIN_SMALL_LETTER_E	  0x65
#define Z_ASCII_LATIN_SMALL_LETTER_F	  0x66
#define Z_ASCII_LATIN_SMALL_LETTER_G	  0x67
#define Z_ASCII_LATIN_SMALL_LETTER_H	  0x68
#define Z_ASCII_LATIN_SMALL_LETTER_I	  0x69
#define Z_ASCII_LATIN_SMALL_LETTER_J	  0x6A
#define Z_ASCII_LATIN_SMALL_LETTER_K	  0x6B
#define Z_ASCII_LATIN_SMALL_LETTER_L	  0x6C
#define Z_ASCII_LATIN_SMALL_LETTER_M	  0x6D
#define Z_ASCII_LATIN_SMALL_LETTER_N	  0x6E
#define Z_ASCII_LATIN_SMALL_LETTER_O	  0x6F
#define Z_ASCII_LATIN_SMALL_LETTER_P	  0x70
#define Z_ASCII_LATIN_SMALL_LETTER_Q	  0x71
#define Z_ASCII_LATIN_SMALL_LETTER_R	  0x72
#define Z_ASCII_LATIN_SMALL_LETTER_S	  0x73
#define Z_ASCII_LATIN_SMALL_LETTER_T	  0x74
#define Z_ASCII_LATIN_SMALL_LETTER_U	  0x75
#define Z_ASCII_LATIN_SMALL_LETTER_V	  0x76
#define Z_ASCII_LATIN_SMALL_LETTER_W	  0x77
#define Z_ASCII_LATIN_SMALL_LETTER_X	  0x78
#define Z_ASCII_LATIN_SMALL_LETTER_Y	  0x79
#define Z_ASCII_LATIN_SMALL_LETTER_Z	  0x7A
#define Z_ASCII_LEFT_CURLY_BRACKET	  0x7B
#define Z_ASCII_VERTICAL_LINE		  0x7C
#define Z_ASCII_RIGHT_CURLY_BRACKET	  0x7D
#define Z_ASCII_TILDE			  0x7E
#define Z_ASCII_DELETE			  0x7F

#endif /* Z_formats_character_set_ASCII_H */
