/*
 * Raspberry Pi emulation (c) 2012 Gregory Estrade
 * Upstreaming code cleanup [including bcm2835_*] (c) 2013 Jan Petrous
 *
 * Rasperry Pi 2 emulation and refactoring Copyright (c) 2015, Microsoft
 * Written by Andrew Baumann
 * 
 * Raspberry Pi 3 emulation 2017 by bzt
 *
 * This code is licensed under the GNU GPLv2 and later.
 */

#ifndef BCM2837_H
#define BCM2837_H

#include "hw/arm/arm.h"
#include "hw/arm/bcm2835_peripherals.h"
#include "hw/intc/bcm2836_control.h"

#define TYPE_BCM2837 "bcm2837"
#define BCM2837(obj) OBJECT_CHECK(BCM2836State, (obj), TYPE_BCM2837)

#define BCM2837_NCPUS 4

/* According to https://www.raspberrypi.org/documentation/hardware/raspberrypi/bcm2837/README.md
 * The underlying architecture of the BCM2837 is identical to the BCM2836. The only significant
 * difference is the replacement of the ARMv7 quad core cluster with a quad-core ARM Cortex A53
 * (ARMv8) cluster. So we use BCM2836ControlState here. */

typedef struct BCM2837State {
    /*< private >*/
    DeviceState parent_obj;
    /*< public >*/

    uint32_t enabled_cpus;

    ARMCPU cpus[BCM2837_NCPUS];
    BCM2836ControlState control;
    BCM2835PeripheralState peripherals;
} BCM2837State;

#endif /* BCM2837_H */
