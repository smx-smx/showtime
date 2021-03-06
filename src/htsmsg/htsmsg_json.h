/*
 *  Showtime Mediacenter
 *  Copyright (C) 2007-2013 Lonelycoder AB
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
 *
 *  This program is also available under a commercial proprietary license.
 *  For more information, contact andreas@lonelycoder.com
 */

#ifndef HTSMSG_JSON_H_
#define HTSMSG_JSON_H_

#include "htsmsg.h"
#include "htsbuf.h"
struct rstr;
/**
 * htsmsg_binary_deserialize
 */
htsmsg_t *htsmsg_json_deserialize(const char *src);

htsmsg_t *htsmsg_json_deserialize2(const char *src,
                                   char *errbuf, size_t errlen);

void htsmsg_json_serialize(htsmsg_t *msg, htsbuf_queue_t *hq, int pretty);

char *htsmsg_json_serialize_to_str(htsmsg_t *msg, int pretty);

struct rstr *htsmsg_json_serialize_to_rstr(htsmsg_t *msg, const char *prefix);

#endif /* HTSMSG_JSON_H_ */
