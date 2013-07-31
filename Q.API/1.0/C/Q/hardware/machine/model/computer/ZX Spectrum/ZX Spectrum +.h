/* Q API - hardware/machine/model/computer/ZX Spectrum/ZX Spectrum +.h
	      __	   __
  _______ ___/ /______ ___/ /__
 / __/ -_) _  / __/ _ \ _  / -_)
/_/  \__/\_,_/\__/\___/_,_/\__/
Copyright © 2009 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU General Public License v3.

   .-----------------------------............................-----------.
   |  ___. __  __    __ . __						|
   | __\ ||  ||__|__|--|||						|
   |--------------------------------------------------------------------|
   | ZX Spectrum +							|
   |--.-----------------------------------------------------.-----------|
   |  |( )|( )|(1)|(2)|(3)|(4)|(5)|(6)|(7)|(1)|(1)|(1)|(BRK)|		|
   |--|-----------------------------------------------------|-----------|
   |  |(DEL)|(1)|(Q)|(W)|(E)|(R)|(T)|(Y)|(U)|(I)|(O)|(P)|.-.|		|
   |--|-------------------------------------------------|| ||-----------|
   |  |(EXT)|(ED)|(A)|(S)|(D)|(F)|(G)|(H)|(J)|(K)|(L)|(____'|		|
   |--|-----------------------------------------------------|-----------|
   |  |(CAPS S)|( )|(Z)|(X)|(C)|(V)|(B)|(N)|(M)|(.)|(CAPS S)|		|
   |--|-----------------------------------------------------|-----------|
   |  |( )|(;)|(")|(_)|(_)|(_______________)|(_)|(_)|(,)|(_)|	   //// |
   |--'-----------------------------------------------------'-----------|
   |									|
   '--------------------------------------------------------------------' */

#ifndef __Q_hardware_machine_model_computer_ZX_Spectrum_ZX_Spectrum_Plus_H__
#define __Q_hardware_machine_model_computer_ZX_Spectrum_ZX_Spectrum_Plus_H__

#pragma mark - Screen

/*					---
	  Invisible Top Border		 | 8
   .---------------------------------.  ---   ---
   |	   Visible Top Border	     |	 | 48  |
   |----.-----------------------.----|  ---    |
   |L   |			|R   |	 |     |
   |e   |			|i   |	 |     |
   |f  B|			|g  B|	 |     |
   |t  o|	  Paper		|h  o|   | 192 | 296
   |   r|			|t  r|	 |     |
   |   d|			|   d|	 |     |
   |   e|			|   e|	 |     |
   |   r|			|   r|	 |     |
   |----'-----------------------'----|  ---    |
   |	      Bottom Border	     |	 | 56  |
   '---------------------------------'  ---   ---

   |----|-----------------------|----|
     48		   256		  48
   |---------------------------------|
		   352			*/

#define Q_ZX_SPECTRUM_PLUS_SCREEN_WIDTH				Q_ZX_SPECTRUM_SCREEN_WIDTH
#define Q_ZX_SPECTRUM_PLUS_SCREEN_HEIGHT			Q_ZX_SPECTRUM_SCREEN_HEIGHT
#define Q_ZX_SPECTRUM_PLUS_SCREEN_PIXELS			Q_ZX_SPECTRUM_SCREEN_PIXELS
#define Q_ZX_SPECTRUM_PLUS_SCREEN_PAPER_WIDTH			Q_ZX_SPECTRUM_SCREEN_PAPER_WIDTH
#define Q_ZX_SPECTRUM_PLUS_SCREEN_PAPER_HEIGHT			Q_ZX_SPECTRUM_SCREEN_PAPER_HEIGHT
#define Q_ZX_SPECTRUM_PLUS_SCREEN_PAPER_PIXELS			Q_ZX_SPECTRUM_SCREEN_PAPER_PIXELS
#define Q_ZX_SPECTRUM_PLUS_SCREEN_TOP_BORDER_HEIGHT		Q_ZX_SPECTRUM_SCREEN_TOP_BORDER_HEIGHT
#define Q_ZX_SPECTRUM_PLUS_SCREEN_INVISIBLE_TOP_BORDER_HEIGHT	Q_ZX_SPECTRUM_SCREEN_INVISIBLE_TOP_BORDER_HEIGHT
#define Q_ZX_SPECTRUM_PLUS_SCREEN_VISIBLE_TOP_BORDER_HEIGHT	Q_ZX_SPECTRUM_SCREEN_VISIBLE_TOP_BORDER_HEIGHT
#define Q_ZX_SPECTRUM_PLUS_SCREEN_BOTTOM_BORDER_HEIGHT		Q_ZX_SPECTRUM_SCREEN_BOTTOM_BORDER_HEIGHT
#define Q_ZX_SPECTRUM_PLUS_SCREEN_LEFT_BORDER_WIDTH		Q_ZX_SPECTRUM_SCREEN_LEFT_BORDER_WIDTH
#define Q_ZX_SPECTRUM_PLUS_SCREEN_RIGHT_BORDER_WIDTH		Q_ZX_SPECTRUM_SCREEN_RIGHT_BORDER_WIDTH

#pragma mark - Timmings

#define Q_ZX_SPECTRUM_PLUS_Z80_HZ				Q_ZX_SPECTRUM_Z80_HZ
#define Q_ZX_SPECTRUM_PLUS_CYCLES_PER_FRAME			Q_ZX_SPECTRUM_CYCLES_PER_FRAME
#define Q_ZX_SPECTRUM_PLUS_CYCLES_PER_SCANLINE			Q_ZX_SPECTRUM_CYCLES_PER_SCANLINE
#define Q_ZX_SPECTRUM_PLUS_CYCLES_PER_HBLANK			Q_ZX_SPECTRUM_CYCLES_PER_HBLANK
#define Q_ZX_SPECTRUM_PLUS_CYCLES_PER_VBLANK			Q_ZX_SPECTRUM_CYCLES_PER_VBLANK
#define Q_ZX_SPECTRUM_PLUS_CYCLES_PER_TOP_BORDER_LINE		Q_ZX_SPECTRUM_CYCLES_PER_TOP_BORDER_LINE
#define Q_ZX_SPECTRUM_PLUS_CYCLES_PER_LEFT_BORDER_LINE		Q_ZX_SPECTRUM_CYCLES_PER_LEFT_BORDER_LINE
#define Q_ZX_SPECTRUM_PLUS_CYCLES_PER_RIGHT_BORDER_LINE		Q_ZX_SPECTRUM_CYCLES_PER_RIGHT_BORDER_LINE
#define Q_ZX_SPECTRUM_PLUS_CYCLES_PER_BOTTOM_BORDER_LINE	Q_ZX_SPECTRUM_CYCLES_PER_BOTTOM_BORDER_LINE
#define Q_ZX_SPECTRUM_PLUS_CYCLES_PER_PAPER_LINE		Q_ZX_SPECTRUM_CYCLES_PER_PAPER_LINE
#define Q_ZX_SPECTRUM_PLUS_CYCLES_PER_INT			Q_ZX_SPECTRUM_CYCLES_PER_INT
#define Q_ZX_SPECTRUM_PLUS_CYCLES_AT_VBLANK			Q_ZX_SPECTRUM_CYCLES_AT_VBLANK
#define Q_ZX_SPECTRUM_PLUS_CYCLES_AT_INT			Q_ZX_SPECTRUM_CYCLES_AT_INT
#define Q_ZX_SPECTRUM_PLUS_CYCLES_AT_INVISIBLE_TOP_BORDER	Q_ZX_SPECTRUM_CYCLES_AT_INVISIBLE_TOP_BORDER
#define Q_ZX_SPECTRUM_PLUS_CYCLES_AT_VISIBLE_TOP_BORDER		Q_ZX_SPECTRUM_CYCLES_AT_VISIBLE_TOP_BORDER
#define Q_ZX_SPECTRUM_PLUS_CYCLES_AT_PAPER_REGION		Q_ZX_SPECTRUM_CYCLES_AT_PAPER_REGION
#define Q_ZX_SPECTRUM_PLUS_CYCLES_AT_BOTTOM_BORDER		Q_ZX_SPECTRUM_CYCLES_AT_BOTTOM_BORDER
#define Q_ZX_SPECTRUM_PLUS_CYCLES_AT_LINE			Q_ZX_SPECTRUM_CYCLES_AT_LINE

#pragma mark - Memory

#define Q_ZX_SPECTRUM_PLUS_MEMORY_SIZE			(1024 * 16 + 1024 * 48)
#define Q_ZX_SPECTRUM_PLUS_RAM_SIZE			(1024 * 48)
#define Q_ZX_SPECTRUM_PLUS_ROM_SIZE			Q_ZX_SPECTRUM_ROM_SIZE
#define Q_ZX_SPECTRUM_PLUS_FIRMWARE_SIZE		Q_ZX_SPECTRUM_FIRMWARE_SIZE
#define Q_ZX_SPECTRUM_PLUS_FIRMWARE_BASE_ADDRESS	Q_ZX_SPECTRUM_FIRMWARE_BASE_ADDRESS

#endif /* __Q_hardware_machine_model_computer_ZX_Spectrum_ZX_Spectrum_Plus_H__ */
