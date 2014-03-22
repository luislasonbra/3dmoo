/*
 * Copyright (C) 2014 - plutoo
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#define HANDLE_TYPE_UNK       0
#define HANDLE_TYPE_PORT      1
#define HANDLE_TYPE_SERVICE   2

#define PORT_TYPE_SRV         0

#define SERVICE_TYPE_APT_U    0
#define SERVICE_TYPE_GSP_GPU  1

typedef struct {
    bool taken;
    u32  type;
    u32  subtype;
} handleinfo;

handleinfo* handle_Get(u32 handle);
u32 handle_New(u32 type, u32 subtype);

