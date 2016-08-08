//
//  ZKZRectangle.m
//  面积
//
//  Created by 张凯泽 on 15-1-5.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "ZKZRectangle.h"

@implementation ZKZRectangle
//初始化的行为。
- (instancetype)init//instancetype是实例话的对象。
{
    self = [super init];//self 与super都是对象，self指的是自身的对象，super指的是父类对象。
    if (self)
    {
        width=1;
        height=1;
    }
    return self;
}
- (instancetype)initWithWidth:(double)_width andWithHeight:(double)_height
{
    self = [super init];
    if (self)
    {
        width=_width;
        height=_height;
    }
    return self;
}

//-(void)setWithWidth:(double)_width WithHeight:(double)_height
//{
//    width=_width;
//    height=_height;
//    
//}
-(double)area
{
    return width*height;
}
@end
