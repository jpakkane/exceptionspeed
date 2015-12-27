/*
 * Copyright (C) 2015 Jussi Pakkanen
 *
 * This library is free software; you can redistribute it and/or modify it under
 * the terms of version 3 of the GNU General Public License as published
 * by the Free Software Foundation.
 *
 * This library is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include"cppimpl.h"
#include"common.h"
#include<exception>

int main(int argc, char **argv) {
    for(int i=0; i<NUM_ITERATIONS; i++) {
        try {
            do_something(false);
        } catch(const std::exception &e) {
        }
    }
    return 0;
}
