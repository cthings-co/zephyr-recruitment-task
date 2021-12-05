/*
 * Copyright (c) 2021 cthings.co
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr.h>
#include <sys/printk.h>
#include <device.h>

void main(void)
{
	printk("Hello World! %s\n", CONFIG_BOARD);

	/* ENTER YOUR CODE HERE */
}
