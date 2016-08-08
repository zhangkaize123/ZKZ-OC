//
//  ZKZBoss.m
//  代理模式
//
//  Created by 张凯泽 on 15-1-14.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "ZKZBoss.h"

@implementation ZKZBoss
@synthesize name,delegate;
-(void)attendace
{
    //NSLog(@"助手%@在考勤",delegate);
    [delegate attendace];
}
-(void)phone
{
    //NSLog(@"助手%@在接电话",self.name);
    [delegate phone];
}
-(void)pay
{
    //NSLog(@"助手%@在开工资",self.name);
    [delegate pay];
}
-(void)train
{
    NSLog(@"老板%@在培训",self.name);
}
-(void)dealloc
{
    [delegate release];
    NSLog(@"%@被销毁",name);
    [super dealloc];
}
@end
