//
//  ZKZTriangle.m
//  面积
//
//  Created by 张凯泽 on 15-1-5.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "ZKZTriangle.h"

@implementation ZKZTriangle
-(void)setWithBottom:(double)_bottom andWithHeight:(double)_height
{
    bottom=_bottom;
    height=_height;
}
-(double)area
{
    return bottom*height*0.5;
}
@end
