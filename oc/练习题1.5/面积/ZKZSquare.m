//
//  ZKZSquare.m
//  面积
//
//  Created by 张凯泽 on 15-1-5.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "ZKZSquare.h"

@implementation ZKZSquare
-(void)setSide:(double)_side
{
    side =_side;
}
-(double)area
{
    return side*side;
}
@end
