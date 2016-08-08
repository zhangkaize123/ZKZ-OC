//
//  NSString+trim.m
//  类别
//
//  Created by 张凯泽 on 15-1-13.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "NSString+trim.h"

//@implementation NSString (trim)
//-(NSString*)trim
//{
//    return [self ]
//}
//@end
@implementation NSString(trim)

-(NSString*)trim
{
    return [self stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]];
}


@end