/**********************************************************************
schuffenhauer_1.h - Stripper
 
Copyright (C) 2005-2010 by Silicos NV
 
This file is part of the Open Babel project.
For more information, see <http://openbabel.sourceforge.net/>
 
This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation version 2 of the License.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
***********************************************************************/



#ifndef __SCHUFFENHAUER_1_H__
#define __SCHUFFENHAUER_1_H__



#include <scaffolds/schuffenhauer.h>



class Schuffenhauer_1: virtual public Schuffenhauer
{
   	public:
   
      	Schuffenhauer_1(void);
      	virtual ~Schuffenhauer_1(void);
      	Schuffenhauer_1(const Schuffenhauer_1&);
      	Schuffenhauer_1& operator=(const Schuffenhauer_1&);
};



#endif
