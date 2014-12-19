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

#include "util.h"
#include "handles.h"
#include "mem.h"
#include "arm11.h"

#include "service_macros.h"

SERVICE_START(am_sys);

SERVICE_CMD(0x000A0000)   //GetDeviceID
{
    DEBUG("GetDeviceID --STUB--");
    RESP(4, 0x12345678); //DeviceID
    RESP(3, 6); //Result code 
    RESP(2, 4); //4 = 3DS? unknown
    RESP(1, 0); //result
    return 0;
}
SERVICE_CMD(0x00140040)   //FinishInstallToMedia
{
    DEBUG("FinishInstallToMedia %02x --STUB--",CMD(1));
    RESP(1, 0); //result
    return 0;
}

SERVICE_CMD(0x00190040)   //ReloadDBS
{
    DEBUG("ReloadDBS %02x --STUB--", CMD(1));
    RESP(2, 0); //unk u8
    RESP(1, 0); //result
    return 0;
}

SERVICE_CMD(0x00180080)   //unk
{
    DEBUG("unk18 %02x %02x --STUB--", CMD(1), CMD(2));
    RESP(1, 0); //result
    return 0;
}

SERVICE_END();
