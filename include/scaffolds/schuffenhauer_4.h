/**********************************************************************
schuffenhauer_4.h - Stripper
 
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



#ifndef __SCHUFFENHAUER_4_H__
#define __SCHUFFENHAUER_4_H__



#include <scaffolds/schuffenhauer.h>



class Schuffenhauer_4: virtual public Schuffenhauer
{
   	public:
   
      	Schuffenhauer_4(void);
      	virtual ~Schuffenhauer_4(void);
      	Schuffenhauer_4(const Schuffenhauer_4&);
      	Schuffenhauer_4& operator=(const Schuffenhauer_4&);
};



#endif
