//
//  ZKZShape.m
//  图形类_继承
//
//  Created by 张凯泽 on 15-1-6.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "ZKZShape.h"

@implementation ZKZShape
- (instancetype)init
{
    self = [super init];
    if (self)
    {
        length=0;
        width=0;
    }
    return self;
}

- (instancetype)initWithLength:(double)_length andWithWidth:(double)_width
{
    self = [super init];
    if (self)
    {
        length=_length;
        width=_width;
    }
    return self;
}
+(instancetype)shapeWithLength:(double)_length andWithWidth:(double)_width
{
    return [[[self class]alloc]initWithLength:_length andWithWidth:_width];
}
-(double)area
{
    return length*width;
}
@end
