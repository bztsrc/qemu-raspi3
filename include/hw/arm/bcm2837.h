/*
 * Raspberry Pi emulation (c) 2012 Gregory Estrade
 * Upstreaming code cleanup [including bcm2835_*] (c) 2013 Jan Petrous
 *
 * Rasperry Pi 2 emulation and refactoring Copyright (c) 2015, Microsoft
 * Written by Andrew Baumann
 *
 * This code is licensed under the GNU GPLv2 and later.
 */

#ifndef BCM2837_H
#define BCM2837_H

#include "hw/arm/bcm2836.h"

#define TYPE_BCM2837 "bcm2837"
#define BCM2837(obj) OBJECT_CHECK(BCM2836State, (obj), TYPE_BCM2837)

#endif /* BCM2837_H */
