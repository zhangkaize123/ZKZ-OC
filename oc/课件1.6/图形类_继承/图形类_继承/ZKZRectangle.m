//
//  ZKZRectangle.m
//  图形类_继承
//
//  Created by 张凯泽 on 15-1-6.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "ZKZRectangle.h"

@implementation ZKZRectangle
- (instancetype)initWithWidth:(double)_width andWithHeight:(double)_height
{
    self = [super initWithLength:_height andWithWidth:_width];
    return self;
}
+(instancetype)rectangleWithWidth:(double)_width andWithHeight:(double)_height
{
    return [[[self class]alloc]initWithLength:_width andWithWidth:_height];
}

-(double)area
{
    return 4;
}



@end
