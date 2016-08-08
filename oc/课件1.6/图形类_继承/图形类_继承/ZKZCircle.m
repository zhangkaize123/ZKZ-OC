//
//  ZKZCircle.m
//  图形类_继承
//
//  Created by 张凯泽 on 15-1-6.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "ZKZCircle.h"

@implementation ZKZCircle
- (instancetype)initWithRadius:(double)_radius
{
    self=[super initWithLength:_radius andWithWidth:_radius];
        return self;
}
-(double)area//重写父类的行为。
{
    return [super area]*M_PI;
}

@end
