//
//  ZKZUIDelegate.m
//  代理练习
//
//  Created by 张凯泽 on 15-1-14.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "ZKZUIDelegate.h"

@implementation ZKZUIDelegate
-(void)comeBefore
{
    NSLog(@"%@进入前台",self.name);
}
-(void)comeAfter
{
    NSLog(@"%@进入后台",self.name);
    
}

@end
