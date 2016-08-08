//
//  ZKZHelper.m
//  代理模式
//
//  Created by 张凯泽 on 15-1-14.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "ZKZHelper.h"

@implementation ZKZHelper

-(void)attendace
{
    NSLog(@"%@在考勤",self.name);
}
-(void)phone
{
    NSLog(@"%@在接电话",self.name);
}
-(void)pay
{
    NSLog(@"%@在开工资",self.name);
}
-(void)dealloc
{
    NSLog(@"%@被销毁",self.name);
    [super dealloc];
}

@end
