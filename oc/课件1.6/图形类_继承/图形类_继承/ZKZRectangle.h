//
//  ZKZRectangle.h
//  图形类_继承
//
//  Created by 张凯泽 on 15-1-6.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "ZKZShape.h"

@interface ZKZRectangle : ZKZShape

- (instancetype)initWithWidth:(double)_width andWithHeight:(double)_height;
+(instancetype)rectangleWithWidth:(double)_width andWithHeight:(double)_height;

@end
