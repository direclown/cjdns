/* vim: set expandtab ts=4 sw=4: */
/*
 * You may redistribute this program and/or modify it under the terms of
 * the GNU General Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef InterfaceConnector_H
#define InterfaceConnector_H

#error poison

#include "util/Linker.h"
Linker_require("interface/InterfaceConnector.c")

/**
 * Connect two interfaces together like a double female adapter.
 * Any traffic coming in on one will be forwarded to the other.
 *
 * @param a one interface.
 * @param b another interface.
 */
void InterfaceConnector_connect(struct Iface* a, struct Iface* b);

#endif
