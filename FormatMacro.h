/* 
 * This file is part of the Macro distribution (https://github.com/mihalychk/macro).
 * Copyright (c) 2014 Michael Kalinin.
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License 
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
*/




#ifndef FormatMacro_h
#define FormatMacro_h




#define FORMAT(...)                    ([NSString stringWithFormat:__VA_ARGS__])
#define IMAGE(_name_)                  ([UIImage imageNamed:(_name_)])
#define IMAGE_FORMAT(...)              IMAGE(FORMAT(__VA_ARGS__))
#define MREQUEST(...)                  ([[NSMutableURLRequest alloc] initWithURL:URL(__VA_ARGS__)])
#define MREQUEST_FORMAT(...)           ([[NSMutableURLRequest alloc] initWithURL:URL_FORMAT(__VA_ARGS__)])
#define REQUEST(...)                   ([[NSURLRequest alloc] initWithURL:URL(__VA_ARGS__)])
#define REQUEST_FORMAT(...)            ([[NSURLRequest alloc] initWithURL:URL_FORMAT(__VA_ARGS__)])
#define URL(_string_)                  ([NSURL URLWithString:(_string_)])
#define URL_FORMAT(...)                URL(FORMAT(__VA_ARGS__))




#endif /* FormatMacro_h */
