//
//  ZKZShape.h
//  图形类_继承
//
//  Created by 张凯泽 on 15-1-6.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZKZShape : NSObject
{
    double length;
    double  width;
}
- (instancetype)initWithLength:(double)_length andWithWidth:(double)_width;
+(instancetype)shapeWithLength:(double)_length andWithWidth:(double)_width;
-(double)area;
@end
