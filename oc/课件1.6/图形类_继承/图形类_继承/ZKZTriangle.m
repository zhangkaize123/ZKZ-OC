//
//  ZKZTriangle.m
//  图形类_继承
//
//  Created by 张凯泽 on 15-1-6.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "ZKZTriangle.h"

@implementation ZKZTriangle
- (instancetype)initWithBottom:(double)_bottom andWithHeight:(double)_height
{
    self = [super initWithLength:_bottom andWithWidth:_height];
        return self;
}
-(double)area//重写父类行为。
{
    return [super area] *0.5;
}
@end
