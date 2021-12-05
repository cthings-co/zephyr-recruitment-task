/*
 * Copyright (c) 2021 cthings.co
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#define DT_DRV_COMPAT dummy_dummy_driver

#include <device.h>
#include <kernel.h>
#include <logging/log.h>
#include <drivers/misc/dummy_driver/dummy_driver.h>

#include "dummy_driver_priv.h"

LOG_MODULE_REGISTER(dummy_driver, CONFIG_DISPLAY_LOG_LEVEL);

/* DRIVER CODE */

static int dummy_driver_init(const struct device *dev)
{
	return 0;
}
