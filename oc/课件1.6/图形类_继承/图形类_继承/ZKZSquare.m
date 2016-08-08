//
//  ZKZSquare.m
//  图形类_继承
//
//  Created by 张凯泽 on 15-1-6.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "ZKZSquare.h"

@implementation ZKZSquare
- (instancetype)initWithSide:(double)_side
{
    self = [super initWithLength:_side andWithWidth:_side];
    return self;
}

@end
