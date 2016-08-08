//
//  ZKZShap.h
//  图形类继承老师讲
//
//  Created by 张凯泽 on 15-1-7.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZKZShap : NSObject
{
    double width;
    double height;
}
- (instancetype)initWithWidth:(double)_width andWithHeight:(double)_height;
-(double)area;
@end
