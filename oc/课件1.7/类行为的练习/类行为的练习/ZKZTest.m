//
//  ZKZTest.m
//  类行为的练习
//
//  Created by 张凯泽 on 15-1-7.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "ZKZTest.h"

@implementation ZKZTest
-(instancetype)initWithStr:(NSString *)_str
{
     
        self=[super init];
    if (self)
    {
        str=_str;
    }
    return self;
}
+(instancetype)testWithStr:(NSString*)_str
{
    return [[[self class]alloc]initWithStr:_str];
}
@end
