//
//  ZKZRectangle.h
//  面积
//
//  Created by 张凯泽 on 15-1-5.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZKZRectangle : NSObject
{
    double width;
    double height;
}
//-(void)setWithWidth:(double)_width WithHeight:(double)_height;
-(void)setWidth:(double)_width;
-(void)setHeight:(double)_height;
-(double)area;
@end
