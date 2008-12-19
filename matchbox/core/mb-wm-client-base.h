/*
 *  Matchbox Window Manager II - A lightweight window manager not for the
 *                               desktop.
 *
 *  Authored By Matthew Allum <mallum@o-hand.com>
 *
 *  Copyright (c) 2005 OpenedHand Ltd - http://o-hand.com
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 */

#ifndef _HAVE_MB_WM_CLIENT_BASE_H
#define _HAVE_MB_WM_CLIENT_BASE_H

#define MB_WM_CLIENT_BASE(c) ((MBWMClientBase*)(c))
#define MB_WM_CLIENT_BASE_CLASS(c) ((MBWMClientBaseClass*)(c))
#define MB_WM_TYPE_CLIENT_BASE (mb_wm_client_base_class_type ())

typedef struct MBWMClientBase
{
  MBWindowManagerClient parent;
}
MBWMClientBase;

typedef struct MBWMClientBaseClass
{
  MBWindowManagerClientClass parent;

}
MBWMClientBaseClass;

int
mb_wm_client_base_class_type ();

void base_foo(void);

#endif
