//
//  ZKZSquare.m
//  图形类继承老师讲
//
//  Created by 张凯泽 on 15-1-7.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "ZKZSquare.h"

@implementation ZKZSquare
- (instancetype)initSide:(double)_side
{
    self = [super initWithWidth:_side andWithHeight:_side];
    return self;
}
@end
