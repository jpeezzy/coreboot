/*
 * This file is part of the coreboot project.
 *
 * Copyright 2018 Google LLC
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef BASEBOARD_VARIANTS_H
#define BASEBOARD_VARIANTS_H

#include <soc/cnl_memcfg_init.h>
#include <soc/gpio.h>
#include <stdint.h>
#include <vendorcode/google/chromeos/chromeos.h>

/* The next set of functions return the gpio table and fill in the number of
 * entries for each table. */
const struct pad_config *variant_gpio_table(size_t *num);
const struct pad_config *variant_early_gpio_table(size_t *num);

/* Return memory SKU for the board. */
int variant_memory_sku(void);

/* Return board specific memory configuration */
void variant_memory_params(struct cnl_mb_cfg *bcfg);

/* Return ChromeOS gpio table and fill in number of entries. */
const struct cros_gpio *variant_cros_gpios(size_t *num);

#endif /* BASEBOARD_VARIANTS_H */
