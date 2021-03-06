/****************************************************************************
*                                                                           *
* Project 64 - A Nintendo 64 emulator.                                      *
* http://www.pj64-emu.com/                                                  *
* Copyright (C) 2012 Project64. All rights reserved.                        *
*                                                                           *
* License:                                                                  *
* GNU/GPLv2 http://www.gnu.org/licenses/gpl-2.0.html                        *
*                                                                           *
****************************************************************************/
#pragma once

class CCodeSection;


class CCodeBlock;


typedef struct {
	CCodeSection * Parent;
	CJumpInfo     * JumpInfo;
} BLOCK_PARENT;

typedef std::vector<BLOCK_PARENT> BLOCK_PARENT_LIST;
