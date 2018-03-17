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




#ifndef ColorAndFontsMacro_h
#define ColorAndFontsMacro_h




#import "CommonMacro.h"




#define FONT(_size_, _weight_)                  ([UIFont respondsToSelector:@selector(systemFontOfSize:weight:)] ? [UIFont systemFontOfSize:_size_ weight:UIFontWeight ## _weight_] : [UIFont fontWithName:@"HelveticaNeue-"MACRO_VALUE_TO_STRING(_weight_)@"" size:_size_])
#define FONT_ITALIC(_size_)                     ([UIFont italicSystemFontOfSize:_size_])
#define FONT_ULTRA_LIGHT(_size_)                FONT(_size_, UltraLight)
#define FONT_THIN(_size_)                       FONT(_size_, Thin)
#define FONT_LIGHT(_size_)                      FONT(_size_, Light)
#define FONT_NORMAL(_size_)                     ([UIFont systemFontOfSize:_size_])
#define FONT_MEDIUM(_size_)                     FONT(_size_, Medium)
#define FONT_SEMIBOLD(_size_)                   FONT(_size_, Semibold)
#define FONT_BOLD(_size_)                       ([UIFont boldSystemFontOfSize:_size_])


#define RGBA(_red_, _green_, _blue_, _alpha_)   ([UIColor colorWithRed:((CGFloat)_red_)/255.0f green:((CGFloat)_green_)/255.0f blue:((CGFloat)_blue_)/255.0f alpha:((CGFloat)(_alpha_))/255.0f])
#define RGB(_red_, _green_, _blue_)             RGBA(_red_, _green_, _blue_, 255.0f)
#define RGBA_HEX(_hex_)                         RGBA((((unsigned long)(_hex_) & 0xFF000000) >> 24), (((_hex_) & 0xFF0000) >> 16), (((_hex_) & 0xFF00) >> 8), ((_hex_) & 0xFF))
#define RGB_HEX(_hex_)                          RGBA_HEX(_hex_ ##FF)




#endif /* ColorAndFontsMacro_h */
