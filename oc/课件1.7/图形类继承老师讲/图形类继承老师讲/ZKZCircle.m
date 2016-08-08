//
//  ZKZCircle.m
//  图形类继承老师讲
//
//  Created by 张凯泽 on 15-1-7.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "ZKZCircle.h"

@implementation ZKZCircle
- (instancetype)initWithRadus:(double)_radus
{
    self = [super initWithWidth:_radus andWithHeight:_radus];
        return self;
}
-(double)area
{
    return [super area]*M_PI;
}
@end
