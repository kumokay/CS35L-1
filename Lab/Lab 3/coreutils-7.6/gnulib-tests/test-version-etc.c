/* -*- buffer-read-only: t -*- vi: set ro: */
/* DO NOT EDIT! GENERATED AUTOMATICALLY! */
#line 1
/* Test suite for version-etc.
   Copyright (C) 2009 Free Software Foundation, Inc.
   This file is part of the GNUlib Library.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

#include <config.h>

#include "version-etc.h"

#include "progname.h"

#define AUTHORS "Sergey Poznyakoff", "Eric Blake"

int
main (int argc, char **argv)
{
  set_program_name (argv[0]);
  version_etc (stdout, "test-version-etc", "dummy", "0", AUTHORS,
               (const char *) NULL);
  return 0;
}
