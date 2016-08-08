//
//  NSArray+join.m
//  类别应用
//
//  Created by 张凯泽 on 15-1-13.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "NSArray+join.h"

@implementation NSArray (join)
-(NSString *)joinWith:(NSString *)_stri
{
    NSMutableString*str=[[NSMutableString alloc]init];
    for (NSString *str2 in self)
    {
        [str appendFormat:@"%@%@",str2,_stri ];
    }
    if (self.count!=0)//注意当数组是空的时候进行判定
    {
        return [str substringToIndex:str.length-1] ;
    }
    return @"";
}
@end
