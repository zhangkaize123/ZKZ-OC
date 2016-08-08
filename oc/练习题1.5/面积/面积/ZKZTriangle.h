//
//  ZKZTriangle.h
//  面积
//
//  Created by 张凯泽 on 15-1-5.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZKZTriangle : NSObject
{
    double bottom;
    double height;
}
/*
 */
-(void)setWithBottom:(double)_bottom andWithHeight:(double)_height;
-(double)area;
@end
