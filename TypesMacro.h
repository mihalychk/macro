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




#ifndef TypesMacro_h
#define TypesMacro_h



#define IS_VALID(_obj_, _class_)       (_obj_ != nil && [_obj_ isKindOfClass:_class_.class])
#define IS_ARRAY(_obj_)                IS_VALID(_obj_, NSArray)
#define IS_ARRAY_1(_obj_)              (IS_ARRAY(_obj_) && ((NSArray *)_obj_).count > 0)
#define IS_DATE(_obj_)                 IS_VALID(_obj_, NSDate)
#define IS_DATA(_obj_)                 IS_VALID(_obj_, NSData)
#define IS_DATA_1(_obj_)               (IS_DATA(_obj_) && ((NSData *)_obj_).length > 0)
#define IS_DICT(_obj_)                 IS_VALID(_obj_, NSDictionary)
#define IS_DICT_1(_obj_)               (IS_DICT(_obj_) && ((NSDictionary *)_obj_).count > 0)
#define IS_ERROR(_obj_)                IS_VALID(_obj_, NSError)
#define IS_MARRAY(_obj_)               IS_VALID(_obj_, NSMutableArray)
#define IS_MARRAY_1(_obj_)             (IS_MARRAY(_obj_) && ((NSMutableArray *)_obj_).count > 0)
#define IS_MDICT(_obj_)                IS_VALID(_obj_, NSMutableDictionary)
#define IS_MDICT_1(_obj_)              (IS_MDICT(_obj_) && ((NSMutableDictionary *)_obj_).count > 0)
#define IS_MSET(_obj_)                 IS_VALID(_obj_, NSMutableSet)
#define IS_MSET_1(_obj_)               (IS_MSET(_obj_) && ((NSMutableSet *)_obj_).count > 0)
#define IS_NULL(_obj_)                 IS_VALID(_obj_, NSNull)
#define IS_NUMBER(_obj_)               IS_VALID(_obj_, NSNumber)
#define IS_SET(_obj_)                  IS_VALID(_obj_, NSSet)
#define IS_SET_1(_obj_)                (IS_SET(_obj_) && ((NSSet *)_obj_).count > 0)
#define IS_STRING(_obj_)               IS_VALID(_obj_, NSString)
#define IS_STRING_1(_obj_)             (IS_STRING(_obj_) && ((NSString *)_obj_).length > 0)
#define IS_UINT_1(_obj_)               (IS_NUMBER(_obj_) && ((NSNumber *)_obj_).unsignedIntegerValue > 0)
#define IS_URL(_obj_)                  IS_VALID(_obj_, NSURL)
#define IS_URL_1(_obj_)                (IS_URL(_obj_) && ((NSURL *)_obj_).absoluteString.length > 0)



#endif /* TypesMacro_h */
