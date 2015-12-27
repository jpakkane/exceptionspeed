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

#define _GNU_SOURCE

#include"cimpl.h"
#include<stdlib.h>
#include<string.h>

struct Error* new_error(const char *msg) {
    struct Error *err = malloc(sizeof(struct Error));
    err->message = strdup(msg);
    return err;
}

void free_error(struct Error *err) {
    free(err->message);
    free(err);
}

void do_something(int should_error, struct Error **err) {
    if(should_error) {
        *err = new_error("Some error message.");
    }
}
