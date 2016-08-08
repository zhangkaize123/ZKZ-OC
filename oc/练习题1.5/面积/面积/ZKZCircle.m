//
//  ZKZCircle.m
//  面积
//
//  Created by 张凯泽 on 15-1-5.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "ZKZCircle.h"

@implementation ZKZCircle

-(void)setRad:(double)_rad
{
    rad=_rad;
}
-(double)area
{
    return PI*rad*rad;
}
@end
