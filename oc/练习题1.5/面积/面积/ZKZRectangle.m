//
//  ZKZRectangle.m
//  面积
//
//  Created by 张凯泽 on 15-1-5.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "ZKZRectangle.h"

@implementation ZKZRectangle

-(void)setWidth:(double)_width
{
    width=_width;
}
-(void)setHeight:(double)_height
{
    height=_height;
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
