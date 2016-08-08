//
//  Person.m
//  结构2
//
//  Created by 张凯泽 on 16/4/14.
//  Copyright © 2016年 wyzc. All rights reserved.
//

#import "Person.h"

@implementation Person
-(void)sayClasMethod
{
    NSLog(@"this is classmethod");
    //[self sayClasMethod];
}
-(void)say
{
    NSLog(@"person say");
}
//私有方法
-(void)say1
{
    NSLog(@"Person say");
}
//协议方法
-(void)attendace
{
    NSLog(@"在考勤");
}
//协议方法
-(void)phone
{
    NSLog(@"在接电话");
}
//协议方法
-(void)pay
{
    NSLog(@"在开工资");
}

@end
