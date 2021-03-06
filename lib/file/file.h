/*
 *  Copyright (C) 2013 Jeremy Kerr <jk@ozlabs.org>
 *  Copyright (C) 2016 Raptor Engineering, LLC
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; version 2 of the License.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */
#ifndef FILE_H
#define FILE_H

int copy_file_secure_dest(void *ctx,
	const char * source_file, char ** destination_file);
int read_file(void *ctx, const char *filename, char **bufp, int *lenp);
int replace_file(const char *filename, char *buf, int len);

#endif /* FILE_H */

