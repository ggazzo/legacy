/* vim:fdm=marker ts=4 et ai
 * {{{
 *
 * Copyright (c) 2007 by Christian Dietrich <stettberger@dokucode.de>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 * For more information on the GPL, please go to:
 * http://www.gnu.org/copyleft/gpl.html
 }}} */

#include "dns_net.h"
#include "../uip/uip.h"
#include "../debug.h"
#include "../dns/resolv.h"

#include "../config.h"

#ifdef DNS_SUPPORT
void dns_net_init(void)
{
  resolv_init();
}

void dns_net_main(void)
{
  if(uip_poll()) {
    resolv_periodic();
  }
  if(uip_newdata()) {
    resolv_newdata();
  }
}
#endif
