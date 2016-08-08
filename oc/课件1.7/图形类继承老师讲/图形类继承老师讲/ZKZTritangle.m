//
//  ZKZTritangle.m
//  图形类继承老师讲
//
//  Created by 张凯泽 on 15-1-7.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "ZKZTritangle.h"

@implementation ZKZTritangle
- (instancetype)initWithBottom:(double)_width andWithHeight:(double)_height
{
    self = [super initWithWidth:_width andWithHeight:_height];
        return self;
}
-(double)area
{
    return [super area]*0.5;
}
@end
