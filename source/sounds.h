//-------------------------------------------------------------------------
/*
Copyright (C) 1996, 2003 - 3D Realms Entertainment
Copyright (C) 2000, 2003 - Matt Saettler (EDuke Enhancements)
Copyright (C) 2004, 2007 - EDuke32 developers
Copyright (C) 2009 - dimag0g

This file is part of eRampage port for Redneck Rampage series, derived from EDuke32

eRampage is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License version 2
as published by the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/
//-------------------------------------------------------------------------

//****************************************************************************
//
// sounds.h
//
//****************************************************************************

#ifndef _sounds_public_
#define _sounds_public_

void S_SoundStartup( void );
void S_SoundShutdown( void );
void S_MusicStartup( void );
void S_MusicShutdown( void );
void AudioUpdate(void);

struct audioenumdev {
    char *def;
    char **devs;
    struct audioenumdev *next;
};
struct audioenumdrv {
    char *def;
    char **drvs;
    struct audioenumdev *devs;
};
int32_t EnumAudioDevs(struct audioenumdrv **wave, struct audioenumdev **midi, struct audioenumdev **cda);

#endif
