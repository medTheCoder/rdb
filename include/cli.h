/*  rdb - In-memory database optimized for embedded world
 *  Copyright (C) 2013  Raphaël POGGI
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef CLI_H
#define CLI_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#include <trace.h>
#include <types.h>
#include <zmemory.h>
#include <thread.h>
#include <db.h>

#define CLI_COUNT_COMMAND       7
#define SET_CLI_COUNT_COMMAND   3

typedef struct cliCommand
{
    char *command;
    char *( *func )( void );

}cliCommand_t;

typedef struct setCliCommand
{
    char *command;
    char *( *func )( unsigned int , unsigned int );

}setCliCommand_t;

void *doCommand( char *cmd );

#endif /* CLI_H */
