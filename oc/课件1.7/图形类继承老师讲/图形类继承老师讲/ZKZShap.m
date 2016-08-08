//
//  ZKZShap.m
//  图形类继承老师讲
//
//  Created by 张凯泽 on 15-1-7.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "ZKZShap.h"

@implementation ZKZShap
- (instancetype)init
{
    self = [super init];
    if (self)
    {
        width=1;
        height=1;
    }
    return self;
}
- (instancetype)initWithWidth:(double)_width andWithHeight:(double)_height
{
    self = [super init];
    if (self)
    {
        if (_width>1)
        {
            NSLog(@"大了");
            width=_width;
        }
        
        height=_height;
    }
    return self;
}
-(double)area
{
    return width*height;
}
@end
