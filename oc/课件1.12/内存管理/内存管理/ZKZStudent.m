//
//  ZKZStudent.m
//  内存管理
//
//  Created by 张凯泽 on 15-1-12.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "ZKZStudent.h"
@implementation ZKZStudent
+(instancetype)student
{
    return [[[[self class]alloc ]init]autorelease];
    
}
- (void)dealloc
{
    NSLog(@"内存被回收");
    [super dealloc];
}
-(void)show:(int )count
{
    NSLog(@"_______%d",count);
}
@end
