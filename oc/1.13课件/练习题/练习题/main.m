//
//  main.m
//  练习题
//
//  Created by 张凯泽 on 15-1-13.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZKZBoss.h"
int main(int argc, const char * argv[])
{
    @autoreleasepool
    {
        ZKZBoss *boss=[[ZKZBoss alloc]init];
        boss.name=@"zhangsan";
        [boss sendmoney];
        [boss makephone];
        [boss staff_train];
        
        
    }
    return 0;
}
