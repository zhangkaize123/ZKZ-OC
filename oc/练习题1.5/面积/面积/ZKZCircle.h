//
//  ZKZCircle.h
//  面积
//
//  Created by 张凯泽 on 15-1-5.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>
#define PI 3.1415926
@interface ZKZCircle : NSObject
{
    double rad;
}

-(void)setRad:(double)_rad;
-(double)area;
@end
