/*
 * Copyright (C) 2012 The CyanogenMod Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef DEVICE_PERMS_H
#define DEVICE_PERMS_H

#define PROPERTY_PERMS_APPEND \
    { "lge.",   AID_SYSTEM,   0 }, \
    { "lge.factoryversion",   AID_SYSTEM,   AID_SYSTEM }, \
    { "lge.factoryversion.",   AID_SYSTEM,   AID_SYSTEM }, \
    { "persist.audio.",   AID_SYSTEM,   0 }, \
    { "persist.sys.camera.", AID_MEDIA, 0 }, \
    { "sys.media.vdec.sw", AID_SHELL, 0 }, \
    { "wifi.",   AID_WIFI,   0 }, \
    { "com.google.clientidbase",   AID_SYSTEM,   AID_SYSTEM }, \
    { "com.google.clientidbase.",   AID_SYSTEM,   AID_SYSTEM }, \
    { "persist.service.brcm.bt.mac",   AID_BLUETOOTH,   AID_BLUETOOTH }, \
    { "service.brcm.bt.", AID_BLUETOOTH, 0 }, \
    { "persist.camera.", AID_MEDIA, AID_MEDIA },
#endif /* DEVICE_PERMS_H */

