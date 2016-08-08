//
//  ZKZBoss.m
//  练习题
//
//  Created by 张凯泽 on 15-1-13.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "ZKZBoss.h"

@implementation ZKZBoss
@synthesize name;
-(void)sendmoney
{
    NSLog(@"%@放工资",name);
}
-(void)makephone
{
    NSLog(@"%@打电话",name);
}
-(void)staff_train
{
    NSLog(@"%@员工培训",name);
}

@end
