/* Zeta API - Z/formats/snapshot/machine/computer/ZX_Spectrum/ZX-State.h
 ______ ____________  ___
|__   /|  ___|__  __|/   \
  /  /_|  __|  |  | /  *  \
 /_____|_____| |__|/__/ \__\
Copyright (C) 2006-2024 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3.

 _____________________________________________________________
|							      |
|	 Daft: Public.Snapshot.Computer.ZXSpectrum.ZXState    |
|      Author:						      |
|  Extensions: .szx					      |
|  Endianness:						      |
|    Supports:						      |
|     Used by: Spectaculator <https://www.spectaculator.com>  |
|							      |
|  Reference:						      |
|  https://www.spectaculator.com/docs/zx-state/intro.shtml    |
|  https://sinclair.wiki.zxnet.co.uk/wiki/ZX-State_format     |
|							      |
'============================================================*/

#ifndef Z_formats_snapshot_machine_computer_ZX_Spectrum_ZX_State_H
#define Z_formats_snapshot_machine_computer_ZX_Spectrum_ZX_State_H

#include <Z/types/bitwise.h>
#include <Z/formats/snapshot/machine/computer/ZX_Spectrum/ZXS.h>

#define Z_ZX_STATE_BLOCK_ID_ZXATASP			 Z_UINT32_STRING('Z','X','A','T') /* added in v1.3   */
#define Z_ZX_STATE_BLOCK_ID_ZXATASP_RAM			 Z_UINT32_STRING('A','T','R','P') /* added in v1.3   */
#define Z_ZX_STATE_BLOCK_ID_AY				 Z_UINT32_STRING('A','Y', 0 , 0 ) /* updated in v1.3 */
#define Z_ZX_STATE_BLOCK_ID_ZXCF			 Z_UINT32_STRING('Z','X','C','F') /* added in v1.3   */
#define Z_ZX_STATE_BLOCK_ID_ZXCF_RAM			 Z_UINT32_STRING('C','F','R','P') /* added in v1.3   */
#define Z_ZX_STATE_BLOCK_ID_COVOX			 Z_UINT32_STRING('C','O','V','X') /* added in v1.2   */
#define Z_ZX_STATE_BLOCK_ID_BETA_128_DISK_INTERFACE      Z_UINT32_STRING('B','1','2','8') /* added in v1.2   */
#define Z_ZX_STATE_BLOCK_ID_BETA_128_DISK_INTERFACE_DISK Z_UINT32_STRING('B','D','S','K') /* added in v1.2   */
#define Z_ZX_STATE_BLOCK_ID_CREATOR			 Z_UINT32_STRING('C','R','T','R') /* added in v1.1   */
#define Z_ZX_STATE_BLOCK_ID_DOCK			 Z_UINT32_STRING('D','O','C','K') /* added in v1.3   */
#define Z_ZX_STATE_BLOCK_ID_DISK			 Z_UINT32_STRING('D','S','K', 0 )
#define Z_ZX_STATE_BLOCK_ID_GENERAL_SOUND		 Z_UINT32_STRING('G','S', 0 , 0 ) /* added in v1.2   */
#define Z_ZX_STATE_BLOCK_ID_GENERAL_SOUND_RAM_PAGE       Z_UINT32_STRING('G','S','R','P') /* added in v1.2   */
#define Z_ZX_STATE_BLOCK_ID_KEYBOARD			 Z_UINT32_STRING('K','E','Y','B')
#define Z_ZX_STATE_BLOCK_ID_ZX_INTERFACE_1		 Z_UINT32_STRING('I','F','1', 0 )
#define Z_ZX_STATE_BLOCK_ID_ZX_INTERFACE_2_ROM		 Z_UINT32_STRING('I','F','2','R')
#define Z_ZX_STATE_BLOCK_ID_JOYSTICK			 Z_UINT32_STRING('J','O','Y', 0 ) /* added in v1.1   */
#define Z_ZX_STATE_BLOCK_ID_ZX_MICRODRIVE_TAPE		 Z_UINT32_STRING('M','D','R','V')
#define Z_ZX_STATE_BLOCK_ID_MOUSE			 Z_UINT32_STRING('A','M','X','M')
#define Z_ZX_STATE_BLOCK_ID_MULTIFACE			 Z_UINT32_STRING('M','F','C','E')
#define Z_ZX_STATE_BLOCK_ID_OPUS_DISCOVERY_1		 Z_UINT32_STRING('O','P','U','S') /* added in v1.4   */
#define Z_ZX_STATE_BLOCK_ID_OPUS_DISCOVERY_1_DISK	 Z_UINT32_STRING('O','D','S','K') /* added in v1.4   */
#define Z_ZX_STATE_BLOCK_ID_ZX_SPECTRUM_PLUS3		 Z_UINT32_STRING('+','3', 0 , 0 )
#define Z_ZX_STATE_BLOCK_ID_PLUSD			 Z_UINT32_STRING('P','L','S','D') /* added in v1.3   */
#define Z_ZX_STATE_BLOCK_ID_PLUSD_DISK			 Z_UINT32_STRING('P','D','S','K') /* added in v1.3   */
#define Z_ZX_STATE_BLOCK_ID_RAM_PAGE			 Z_UINT32_STRING('R','A','M','P')
#define Z_ZX_STATE_BLOCK_ID_ROM				 Z_UINT32_STRING('R','O','M', 0 )
#define Z_ZX_STATE_BLOCK_ID_TIMEX			 Z_UINT32_STRING('S','C','L','D') /* added in v1.2   */
#define Z_ZX_STATE_BLOCK_ID_SIMPLE_8BIT_INTERFACE	 Z_UINT32_STRING('S','I','D','E') /* added in v1.3   */
#define Z_ZX_STATE_BLOCK_ID_SPECDRUM			 Z_UINT32_STRING('D','R','U','M')
#define Z_ZX_STATE_BLOCK_ID_ZX_SPECTRUM			 Z_UINT32_STRING('S','P','C','R') /* updated in v1.1 and v1.3 */
#define Z_ZX_STATE_BLOCK_ID_TAPE			 Z_UINT32_STRING('T','A','P','E')
#define Z_ZX_STATE_BLOCK_ID_CURRAH_MICROSPEECH		 Z_UINT32_STRING('U','S','P','E')
#define Z_ZX_STATE_BLOCK_ID_ZX_PRINTER			 Z_UINT32_STRING('Z','X','P','R')
#define Z_ZX_STATE_BLOCK_ID_Z80				 Z_UINT32_STRING('Z','8','0','R') /* updated in v1.1 and v1.4 */

Z_DEFINE_PACKED_STRUCTURE_BEGIN {
	zuint32 signature;
	zuint8	version_major;
	zuint8	version_minor;
	zuint8	machine_id;
	zuint8	flags;
} Z_DEFINE_PACKED_STRUCTURE_END (Z_ZXStateHeader);

#define Z_ZX_STATE_MACHINE_ID_ZX_SPECTRUM_16K       0
#define Z_ZX_STATE_MACHINE_ID_ZX_SPECTRUM_48K       1
#define Z_ZX_STATE_MACHINE_ID_ZX_SPECTRUM_PLUS_128K 2
#define Z_ZX_STATE_MACHINE_ID_ZX_SPECTRUM_PLUS2     3
#define Z_ZX_STATE_MACHINE_ID_ZX_SPECTRUM_PLUS2A    4
#define Z_ZX_STATE_MACHINE_ID_ZX_SPECTRUM_PLUS3     5
#define Z_ZX_STATE_MACHINE_ID_ZX_SPECTRUM_PLUS3E    6
#define Z_ZX_STATE_MACHINE_ID_PENTAGON_128          7
#define Z_ZX_STATE_MACHINE_ID_TIMEX_COMPUTER_2048   8
#define Z_ZX_STATE_MACHINE_ID_TIMEX_COMPUTER_2068   9
#define Z_ZX_STATE_MACHINE_ID_SCORPION              10
#define Z_ZX_STATE_MACHINE_ID_ZX_SPECTRUM_SE        11
#define Z_ZX_STATE_MACHINE_ID_TIMEX_SINCLAIR_2068   12
#define Z_ZX_STATE_MACHINE_ID_PENTAGON_512          13
#define Z_ZX_STATE_MACHINE_ID_PENTAGON_1024         14
#define Z_ZX_STATE_MACHINE_ID_ZX_SPECTRUM_48K_NTSC  15
#define Z_ZX_STATE_MACHINE_ID_ZX_SPECTRUM_128KE     16

#define ZX_STATE_FLAG_LATE_TIMINGS 1

Z_DEFINE_PACKED_STRUCTURE_BEGIN {
	zuint32 id;
	zuint32 body_size;
} Z_DEFINE_PACKED_STRUCTURE_END (Z_ZXStateBlockHeader);

/* MARK: - ID {'Z', 'X', 'A', 'T'} - ZXATASP (added in v1.3) */

Z_DEFINE_PACKED_STRUCTURE_BEGIN {
	zuint16 flags;
	zuint8 port_a;
	zuint8 port_b;
	zuint8 port_c;
	zuint8 control_port;
	zuint8 ram_page_count;
	zuint8 active_page;
} Z_DEFINE_PACKED_STRUCTURE_END (Z_ZXStateZXATASP);

#define Z_ZX_STATE_ZXATASP_FLAG_UPLOAD_JUMPER 1
#define Z_ZX_STATE_ZXATASP_FLAG_WRITE_PROTECT 2

/* MARK: - ID {'A', 'T', 'R', 'P'} - ZXATASP RAM (added in v1.3) */

Z_DEFINE_PACKED_STRUCTURE_BEGIN {
	zuint16 flags;
	zuint8  page_index;
	zuint8  data[1];
} Z_DEFINE_PACKED_STRUCTURE_END (Z_ZXStateZXATASPRAM);

#define Z_ZX_STATE_ZXATASP_RAM_FLAG_COMPRESSED 1

/* MARK: - ID {'A', 'Y', 0, 0} - AY chip */

Z_DEFINE_PACKED_STRUCTURE_BEGIN {
	zuint8 flags;
	zuint8 current_register;
	zuint8 registers[16];
} Z_DEFINE_PACKED_STRUCTURE_END (Z_ZXStateAY);

#define Z_ZX_STATE_AY_FLAG_FULLER_BOX 1
#define Z_ZX_STATE_AY_FLAG_128K	      2

/* MARK: - ID {'Z', 'X', 'C', 'F'} - ZXCF (added in v1.3) */

Z_DEFINE_PACKED_STRUCTURE_BEGIN {
	zuint16 flags;
	zuint8 memory_control_register;
	zuint8 ram_page_count;
} Z_DEFINE_PACKED_STRUCTURE_END (Z_ZXStateZXCF);

#define Z_ZX_STATE_ZXCF_FLAG_UPLOAD_JUMPER 1

/* MARK: - ID {'C', 'F', 'R', 'P'} - ZXCF RAM (added in v1.3) */

Z_DEFINE_PACKED_STRUCTURE_BEGIN {
	zuint16 flags;
	zuint8 page_index;
	zuint8 data[1];
} Z_DEFINE_PACKED_STRUCTURE_END (Z_ZXStateZXCFRAM);

#define Z_ZX_STATE_ZXCF_RAM_FLAG_COMPRESSED 1

/* MARK: - ID {'C', 'O', 'V', 'X'} - Covox (added in v1.2) */

Z_DEFINE_PACKED_STRUCTURE_BEGIN {
	zuint8 volume;
	zuint8 reserved[3];
} Z_DEFINE_PACKED_STRUCTURE_END (Z_ZXStateCovox);

/* MARK: - ID {'B', '1', '2', '8'} - Beta 128 Disk Interface (added in v1.2) */

Z_DEFINE_PACKED_STRUCTURE_BEGIN {
	zuint32 flags;
	zuint8 drive_count;
	zuint8 system_register;
	zuint8 track_register;
	zuint8 sector_register;
	zuint8 data_register;
	zuint8 satus_register;
	zuint8 rom_data[1];
} Z_DEFINE_PACKED_STRUCTURE_END (Z_ZXStateBeta128DiskInterface);

#define Z_ZX_STATE_BETA_128_DISK_INTERFACE_FLAG_CONNECTED  1
#define Z_ZX_STATE_BETA_128_DISK_INTERFACE_FLAG_CUSTOM_ROM 2
#define Z_ZX_STATE_BETA_128_DISK_INTERFACE_FLAG_PAGED	   4
#define Z_ZX_STATE_BETA_128_DISK_INTERFACE_FLAG_AUTOBOOT   8
#define Z_ZX_STATE_BETA_128_DISK_INTERFACE_FLAG_SEEK_LOWER 16
#define Z_ZX_STATE_BETA_128_DISK_INTERFACE_FLAG_COMPRESSED 32

/* MARK: - ID {'B', 'D', 'S', 'K'} - Beta Disk (added in v1.2) */

Z_DEFINE_PACKED_STRUCTURE_BEGIN {
	zuint32 flags;
	zuint8  drive_index;
	zuint8  cylinder;
	zuint8  format;
	zuint8  data[1];
} Z_DEFINE_PACKED_STRUCTURE_END (Z_ZXStateBeta128DiskInterfaceDisk);

#define Z_ZX_STATE_BETA_128_DISK_INTERFACE_DISK_FLAG_EMBEDDED	   1
#define Z_ZX_STATE_BETA_128_DISK_INTERFACE_DISK_FLAG_COMPRESSED	   2
#define Z_ZX_STATE_BETA_128_DISK_INTERFACE_DISK_FLAG_WRITE_PROTECT 4

#define Z_ZX_STATE_BETA_128_DISK_INTERFACE_DISK_FORMAT_TRD 0
#define Z_ZX_STATE_BETA_128_DISK_INTERFACE_DISK_FORMAT_SCL 1
#define Z_ZX_STATE_BETA_128_DISK_INTERFACE_DISK_FORMAT_FDI 2
#define Z_ZX_STATE_BETA_128_DISK_INTERFACE_DISK_FORMAT_UDI 3

/* MARK: - ID {'C', 'R', 'T', 'R'} - Beta Disk (added in v1.1) */

Z_DEFINE_PACKED_STRUCTURE_BEGIN {
	char name[32];
	zuint16 major_version;
	zuint16 minor_version;
	zuint8 data[1];
} Z_DEFINE_PACKED_STRUCTURE_END (Z_ZXStateCreator);

/* MARK: - ID {'D', 'O', 'C', 'K'} - Dock (added in v1.3) */

Z_DEFINE_PACKED_STRUCTURE_BEGIN {
	zuint16 flags;
	zuint8 page_index;
	zuint8 data[1];
} Z_DEFINE_PACKED_STRUCTURE_END (Z_ZXStateDock);

#define Z_ZX_STATE_DOCK_FLAG_COMPRESSED	 1
#define Z_ZX_STATE_DOCK_FLAG_RAM	 2
#define Z_ZX_STATE_DOCK_FLAG_EX_ROM_DOCK 3 /* TODO: Rename this */

/* MARK: - ID {'D', 'S', 'K', 0} - Disk */

Z_DEFINE_PACKED_STRUCTURE_BEGIN {
	zuint16 flags;
	zuint8  drive_index;
	zuint32 uncompressed_size;
	zuint8  data[1];
} Z_DEFINE_PACKED_STRUCTURE_END (Z_ZXStateDisk);

#define Z_ZX_STATE_DISK_FLAG_COMPRESSED 1
#define Z_ZX_STATE_DISK_FLAG_EMBEDDED	2
#define Z_ZX_STATE_DISK_FLAG_SIDE_B	4

/* MARK: - ID {'G', 'S', 0, 0'} - General Sound (added in v1.2) */

Z_DEFINE_PACKED_STRUCTURE_BEGIN {
	zuint8 model;
	zuint8 uppper_page_index;
	zuint8 volume_level[4];
	zuint8 output_level[4];
	zuint8 flags;
	ZInt16 af, bc, de, hl;
	ZInt16 af_, bc_, de_, hl_;
	ZInt16 ix, iy, sp, pc;
	zuint8 i;
	zuint8 r;
	zuint8 iff1, iff2;
	zuint8 im;
	zuint32 cycles_start;
	zuint8 hold_int_cycles;
	zuint8 memptrl;
	zuint8 rom[1];
} Z_DEFINE_PACKED_STRUCTURE_END (Z_ZXStateGeneralSound);

#define Z_ZX_STATE_GENERAL_SOUND_FLAG_EI_LAST	     1
#define Z_ZX_STATE_GENERAL_SOUND_FLAG_HALTED	     2
#define Z_ZX_STATE_GENERAL_SOUND_FLAG_GSF_CUSTOMROM  64
#define Z_ZX_STATE_GENERAL_SOUND_FLAG_GSF_COMPRESSED 128

#define Z_ZX_STATE_GENERAL_SOUND_MODEL_128 0
#define Z_ZX_STATE_GENERAL_SOUND_MODEL_512 1

/* MARK: - ID {'G', 'S', 'R', 'P'} - General Sound RAM Page (added in v1.2) */

Z_DEFINE_PACKED_STRUCTURE_BEGIN {
	zuint16 flags;
	zuint8  page_index;
	zuint8  data[1];
} Z_DEFINE_PACKED_STRUCTURE_END (Z_ZXStateGeneralSoundRAMPage);

#define Z_ZXS_TATE_GENERAL_SOUND_RAM_PAGE_FLAG_COMPRESSED 1

/* MARK: - ID {'K', 'E', 'Y', 'B'} - Keyboard */

Z_DEFINE_PACKED_STRUCTURE_BEGIN {
	zuint32 flags;
	zuint8  joystick; /* added in v1.1 */
} Z_DEFINE_PACKED_STRUCTURE_END (Z_ZXStateKeyboard);

// Keyboard state
#define Z_ZX_STATE_KEYBOARD_FLAG_ISSUE_2 1

// Supported joystick types
#define Z_ZX_STATE_KEYBOARD_JOYSTICK_KEMPSTON       0
#define Z_ZX_STATE_KEYBOARD_JOYSTICK_FULLER         1
#define Z_ZX_STATE_KEYBOARD_JOYSTICK_CURSOR         2
#define Z_ZX_STATE_KEYBOARD_JOYSTICK_SINCLAIR1      3
#define Z_ZX_STATE_KEYBOARD_JOYSTICK_SINCLAIR2      4
#define Z_ZX_STATE_KEYBOARD_JOYSTICK_SPECTRUMPLUS   5
#define Z_ZX_STATE_KEYBOARD_JOYSTICK_TIMEX1         6
#define Z_ZX_STATE_KEYBOARD_JOYSTICK_TIMEX2         7
#define Z_ZX_STATE_KEYBOARD_JOYSTICK_NONE           8

/* MARK: - ID {'I', 'F', '1', 0} - ZX Interface 1 */

Z_DEFINE_PACKED_STRUCTURE_BEGIN {
	zuint16 flags;
	zuint8  microdrive_count;
	zuint8  reserved_1[3];
	zuint32 reserved_2[8];
	zuint16 rom_size;
	zuint8  rom[1];
} Z_DEFINE_PACKED_STRUCTURE_END (Z_ZXStateZXInterface1);

#define Z_ZX_STATE_ZX_INTERFACE_1_FLAG_ENABLED    1
#define Z_ZX_STATE_ZX_INTERFACE_1_FLAG_COMPRESSED 2
#define Z_ZX_STATE_ZX_INTERFACE_1_FLAG_PAGED      4

/* MARK: - ID {'I', 'F', '2', 'R'} - ZX Interface 2 ROM */

Z_DEFINE_PACKED_STRUCTURE_BEGIN {
	zuint32 rom_size;
	zuint8  rom[1];
} Z_DEFINE_PACKED_STRUCTURE_END (Z_ZXStateZXInterface2ROM);

/* MARK: - ID {'J', 'O', 'Y', 0} - Joystick (added in v1.1) */

Z_DEFINE_PACKED_STRUCTURE_BEGIN {
	zuint32 flags;
	zuint8  type_player_1;
	zuint8  type_player_2;
} Z_DEFINE_PACKED_STRUCTURE_END (Z_ZXStateJoystick);

#define Z_ZX_STATE_JOYSTICK_FLAG_ALWAYS_PORT_31 1 /* Deprecated */

#define Z_ZX_STATE_JOYSTICK_TYPE_KEMPSTON   0
#define Z_ZX_STATE_JOYSTICK_TYPE_FULLER     1
#define Z_ZX_STATE_JOYSTICK_TYPE_CURSOR     2
#define Z_ZX_STATE_JOYSTICK_TYPE_SINCLAIR_1 3
#define Z_ZX_STATE_JOYSTICK_TYPE_SINCLAIR_2 4
#define Z_ZX_STATE_JOYSTICK_TYPE_COMCOM     5
#define Z_ZX_STATE_JOYSTICK_TYPE_TIMEX1     6
#define Z_ZX_STATE_JOYSTICK_TYPE_TIMEX2     7
#define Z_ZX_STATE_JOYSTICK_TYPE_DISABLED   8

/* MARK: - ID {'M', 'D', 'R', 'V'} - ZX Microdrive Tape */

Z_DEFINE_PACKED_STRUCTURE_BEGIN {
	zuint16 flags;
	zuint8  drive_index;
	zuint8  drive_is_running;
	zuint16 drive_position;
	zuint16 preamble;
	zuint32 uncompressed_size;
	zuint8  data[1];
} Z_DEFINE_PACKED_STRUCTURE_END (Z_ZXStateZXMicrodriveTape);

#define Z_ZX_STATE_ZX_MICRODRIVE_TAPE_FLAG_COMPRESSED 1
#define Z_ZX_STATE_ZX_MICRODRIVE_TAPE_FLAG_EMBEDDED   2

/* MARK: - ID {'A', 'M', 'X', 'M'} - Mouse */

Z_DEFINE_PACKED_STRUCTURE_BEGIN {
	zuint8 type;
	zuint8 ctrl_a_registers[3];
	zuint8 ctrl_b_registers[3];
} Z_DEFINE_PACKED_STRUCTURE_END (Z_ZXStateMouse);

#define Z_ZX_STATE_MOUSE_TYPE_NONE     0
#define Z_ZX_STATE_MOUSE_TYPE_AMX      1
#define Z_ZX_STATE_MOUSE_TYPE_KEMPSTON 2

/* MARK: - ID {'M', 'F', 'C', 'E'} - Multiface */

Z_DEFINE_PACKED_STRUCTURE_BEGIN {
	zuint8 model_48k;
	zuint8 flags;
	zuint8 data[1];
} Z_DEFINE_PACKED_STRUCTURE_END (Z_ZXStateMultiface);

#define Z_ZX_STATE_MULTIFACE_FLAG_PAGEDIN             0x01
#define Z_ZX_STATE_MULTIFACE_FLAG_COMPRESSED          0x02
#define Z_ZX_STATE_MULTIFACE_FLAG_SOFTWARE_LOCKOUT    0x04
#define Z_ZX_STATE_MULTIFACE_FLAG_RED_BUTTON_DISABLED 0x08
#define Z_ZX_STATE_MULTIFACE_FLAG_DISABLED            0x10
#define Z_ZX_STATE_MULTIFACE_FLAG_16K_RAM_MODE        0x20

#define Z_ZX_STATE_MULTIFACE_MODEL_MULTIFACE_ONE 0
#define Z_ZX_STATE_MULTIFACE_MODEL_MULTIFACE_128 1

/* MARK: - ID {'O', 'P', 'U', 'S'} - Opus Discovery 1 (added in v1.4) */

Z_DEFINE_PACKED_STRUCTURE_BEGIN {
	zuint32 flags;
	zuint32 ram_size;
	zuint32 rom_size;
	zuint8  control_register_a;
	zuint8  peripheral_register_a;
	zuint8  data_direction_register_a;
	zuint8  control_register_b;
	zuint8  peripheral_register_b;
	zuint8  data_direction_register_b;
	zuint8  drive_count;
	zuint8  track_register;
	zuint8  sector_register;
	zuint8  data_register;
	zuint8  status_register;
	zuint8  ram[1];
} Z_DEFINE_PACKED_STRUCTURE_END (Z_ZXStateOpusDiscovery1);

#define Z_ZX_STATE_OPUS_DISCOVERY_1_FLAG_PAGED      1
#define Z_ZX_STATE_OPUS_DISCOVERY_1_FLAG_COMPRESSED 2
#define Z_ZX_STATE_OPUS_DISCOVERY_1_FLAG_SEEK_LOWER 4
#define Z_ZX_STATE_OPUS_DISCOVERY_1_FLAG_CUSTOMROM  8

/* MARK: - ID {'O', 'D', 'S', 'K'} - Opus Discovery 1 Disk (added in v1.4) */

Z_DEFINE_PACKED_STRUCTURE_BEGIN {
	zuint32 flags;
	zuint8  drive_index;
	zuint8  cylinder;
	zuint8  type;
	zuint8  data[1];
} Z_DEFINE_PACKED_STRUCTURE_END (Z_ZXStateOpusDiscovery1Disk);

#define Z_ZX_STATE_OPUS_DISCOVERY_1_DISK_TYPE_OPD      0
#define Z_ZX_STATE_OPUS_DISCOVERY_1_DISK_TYPE_OPU      1
#define Z_ZX_STATE_OPUS_DISCOVERY_1_DISK_TYPE_FLOPPY_0 2
#define Z_ZX_STATE_OPUS_DISCOVERY_1_DISK_TYPE_FLOPPY_1 3

#define Z_ZX_STATE_BETA_128_DISK_INTERFACE_DISK_FLAG_EMBEDDED     1
#define Z_ZX_STATE_BETA_128_DISK_INTERFACE_DISK_FLAG_COMPRESSED   2
#define Z_ZX_STATE_BETA_128_DISK_INTERFACE_DISK_FLAG_WRITEPROTECT 4

/* MARK: - ID {'+', '3', 0, 0} - ZX Spectrum +3 */

Z_DEFINE_PACKED_STRUCTURE_BEGIN {
	zuint8 drive_count;
	zuint8 motor_is_on;
} Z_DEFINE_PACKED_STRUCTURE_END (Z_ZXStateZXSpectrumPlus3);

/* MARK: - ID {'P', 'L', 'S', 'D'} - +D (added in v1.3) */

Z_DEFINE_PACKED_STRUCTURE_BEGIN {
	zuint32 flags;
	zuint32 ram_size;
	zuint32 rom_size;
	zuint8  rom_type;
	zuint8  control_register;
	zuint8  drive_count;
	zuint8  track_register;
	zuint8  sector_register;
	zuint8  data_register;
	zuint8  status_register;
	zuint8  ram[1];
} Z_DEFINE_PACKED_STRUCTURE_END (Z_ZXStatePlusD);

#define Z_ZX_STATE_PLUSD_FLAG_PAGED      1
#define Z_ZX_STATE_PLUSD_FLAG_COMPRESSED 2
#define Z_ZX_STATE_PLUSD_FLAG_SEEK_LOWER 4

#define Z_ZX_STATE_PLUSD_ROM_TYPE_GDOS   0
#define Z_ZX_STATE_PLUSD_ROM_TYPE_UNIDOS 1
#define Z_ZX_STATE_PLUSD_ROM_TYPE_CUSTOM 2

/* MARK: - ID {'P', 'D', 'S', 'K'} - +D Disk (added in v1.3) */

Z_DEFINE_PACKED_STRUCTURE_BEGIN {
	zuint32 flags;
	zuint8  drive_index;
	zuint8  cylinder;
	zuint8  type;
	zuint8  data[1];
} Z_DEFINE_PACKED_STRUCTURE_END (Z_ZXStatePlusDDisk);

#define Z_ZX_STATE_PLUSD_DISK_TYPE_MGT      0
#define Z_ZX_STATE_PLUSD_DISK_TYPE_IMG      1
#define Z_ZX_STATE_PLUSD_DISK_TYPE_FLOPPY_0 2
#define Z_ZX_STATE_PLUSD_DISK_TYPE_FLOPPY_1 3

#define Z_ZX_STATE_PLUSD_DISK_FLAG_EMBEDDED      1
#define Z_ZX_STATE_PLUSD_DISK_FLAG_COMPRESSED    2
#define Z_ZX_STATE_PLUSD_DISK_FLAG_WRITEP_ROTECT 4

/* MARK: - ID {'R', 'A', 'M', 'P'} - RAM Page */

Z_DEFINE_PACKED_STRUCTURE_BEGIN {
	zuint16 flags;
	zuint8	index;
	zuint8	data[1];
} Z_DEFINE_PACKED_STRUCTURE_END (Z_ZXStateRAMPage);

#define Z_ZX_STATE_RAM_PAGE_FLAG_COMPRESSED 1

/* MARK: - ID {'R', 'O', 'M', 0} - ROM */

Z_DEFINE_PACKED_STRUCTURE_BEGIN {
	zuint16 flags;
	zuint32 uncompressed_size;
	zuint8 data[1];
} Z_DEFINE_PACKED_STRUCTURE_END (ZXSTROM);

#define Z_ZX_STATE_ROM_FLAG_COMPRESSED 1

/* MARK: - ID {'S', 'C', 'L', 'D'} - Timex (added in v1.2) */

Z_DEFINE_PACKED_STRUCTURE_BEGIN {
	zuint8 port_f4;
	zuint8 port_ff;
} Z_DEFINE_PACKED_STRUCTURE_END (Z_ZXStateTimex);

/* MARK: - ID {'S', 'I', 'D', 'E'} - Simple 8-bit Interface (added in v1.3) */

/* https://worldofspectrum.org/zxplus3e/interface.html#simple */

Z_DEFINE_PACKED_STRUCTURE_BEGIN {
} Z_DEFINE_PACKED_STRUCTURE_END (Z_ZXStateSimple8BitInterface);

/* MARK: - ID {'D', 'R', 'U', 'M'} - SpecDrum */

Z_DEFINE_PACKED_STRUCTURE_BEGIN {
	zuint8 volume;
} Z_DEFINE_PACKED_STRUCTURE_END (Z_ZXStateSpecDrum);

/* MARK: - ID {'S', 'P', 'C', 'R'} - ZX Spectrum */

Z_DEFINE_PACKED_STRUCTURE_BEGIN {
	zuint8 border_color;
	zuint8 port_7ffd;
	zuint8 port_1ffd_eff7; /* EFF7h added in v1.3 */
	zuint8 port_fe; /* added in v1.1 */
	zuint8 reserved[4];
} Z_DEFINE_PACKED_STRUCTURE_END (Z_ZXStateZXSpectrum);

/* MARK: - ID {'T', 'A', 'P', 'E'} - Tape */

Z_DEFINE_PACKED_STRUCTURE_BEGIN {
	zuint16 block_index;
	zuint16 flags;
	zuint32 uncompressed_size;
	zuint32 compressed_size;
	char	file_extension[16];
	zuint8	data[1];
} Z_DEFINE_PACKED_STRUCTURE_END (Z_ZXStateTape);

#define Z_ZX_STATE_TAPE_FLAG_EMBEDDED   1
#define Z_ZX_STATE_TAPE_FLAG_COMPRESSED 2

/* MARK: - ID {'U', 'S', 'P', 'E'} - Currah μSpeech */

Z_DEFINE_PACKED_STRUCTURE_BEGIN {
	zuint8 rom_is_paged_in;
} Z_DEFINE_PACKED_STRUCTURE_END (Z_ZXStateCurrahMicroSpeech);

/* MARK: - ID {'Z', 'X', 'P', 'R'} - ZX Printer */

Z_DEFINE_PACKED_STRUCTURE_BEGIN {
	zuint16 flags;
} Z_DEFINE_PACKED_STRUCTURE_END (Z_ZXStateZXPrinter);

#define Z_ZX_STATE_ZX_PRINTER_FLAG_ENABLED 1

/* MARK: - ID {'Z', '8', '0', 'R'} - Z80 */

Z_DEFINE_PACKED_STRUCTURE_BEGIN {
	ZInt16	af, bc, de, hl, af_, bc_, de_, hl_, ix, iy, sp, pc;
	zuint8	i, r;
	zuint8	iff1, iff2;
	zuint8	im;
	zuint32	frame_cycles;
	zuint8	hold_int_cycles;
	zuint8	flags;  /* added in v1.1 (size unchanged) */
	ZInt16	memptr; /* added in v1.4 (size unchanged) */
} Z_DEFINE_PACKED_STRUCTURE_END (Z_ZXStateZ80);

#define Z_ZX_STATE_Z80_FLAG_EI_LAST 1
#define Z_ZX_STATE_Z80_FLAG_HALTED  2


Z_DEFINE_PACKED_STRUCTURE ({
	Z_ZXStateBlockHeader header;

	union {	Z_ZXStateZXATASP		  zxatasp;
		Z_ZXStateZXATASPRAM		  zxatasp_ram;
		Z_ZXStateAY			  ay;
		Z_ZXStateZXCF			  zxcf;
		Z_ZXStateZXCFRAM		  zxcf_ram;
		Z_ZXStateCovox			  covox;
		Z_ZXStateBeta128DiskInterface	  beta_128_disk_interface;
		Z_ZXStateBeta128DiskInterfaceDisk beta_128_disk_interface_disk;
		Z_ZXStateCreator		  creator;
		Z_ZXStateDock			  dock;
		Z_ZXStateDisk			  disk;
		Z_ZXStateGeneralSound		  general_sound;
		Z_ZXStateGeneralSoundRAMPage	  general_sound_ram_page;
		Z_ZXStateKeyboard		  keyboard;
		Z_ZXStateZXInterface1		  zx_interface_1;
		Z_ZXStateZXInterface2ROM	  zx_interface_2_rom;
		Z_ZXStateJoystick		  joystick;
		Z_ZXStateZXMicrodriveTape	  zx_microdrive_tape;
		Z_ZXStateMouse			  mouse;
		Z_ZXStateMultiface		  multiface;
		Z_ZXStateOpusDiscovery1		  opus_discovery_1;
		Z_ZXStateOpusDiscovery1Disk	  opus_discovery_1_disk;
		Z_ZXStateZXSpectrumPlus3	  zx_spectrum_plus3;
		Z_ZXStatePlusD			  plusd;
		Z_ZXStatePlusDDisk		  plusd_disk;
		Z_ZXStateRAMPage		  ram_page;
		Z_ZXStateTimex			  timex;
		Z_ZXStateSimple8BitInterface	  simple_8bit_interface;
		Z_ZXStateSpecDrum		  specdrum;
		Z_ZXStateZXSpectrum		  zx_spectrum;
		Z_ZXStateTape			  zx_tape;
		Z_ZXStateCurrahMicroSpeech	  currah_microspeech;
		Z_ZXStateZXPrinter		  zx_printer;
		Z_ZXStateZ80			  z80;
	} body;
}, Z_ZXStateBlock);

#endif /* Z_formats_snapshot_machine_computer_ZX_Spectrum_ZX_State_H */
