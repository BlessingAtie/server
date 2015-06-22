/* Copyright (c) 2005 MySQL AB, 2009 Sun Microsystems, Inc.
   Use is subject to license terms.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; version 2 of the License.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301  USA */

#ifndef _my_plugin_udf_h
#define _my_plugin_udf_h
#include "plugin.h"

#define MYSQL_UDF_INTERFACE_VERSION 0x0100

/*************************************************************************
  API for UDF plugins. (MYSQL_UDF_PLUGIN)
*/

  /*
  User defined function descriptor.

*/

struct st_mysql_table_udf
{
  int interface_version;

  void (*init)(void);
  void (*udf)(void);
  void (*deinit)(void);
};

#endif