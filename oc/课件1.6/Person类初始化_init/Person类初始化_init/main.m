//
//  main.m
//  Person类初始化_init
//
//  Created by 张凯泽 on 15-1-6.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZKZPerson.h"
int main(int argc, const char * argv[])
{
    @autoreleasepool
    {
        
        ZKZPerson *person=[[ZKZPerson alloc]initWithName:@"zhagnkkkkk"];
        //       ZKZPerson *person=[[ZKZPerson alloc]initWithName:@"张三" andWithSex:@"男" andWithAge:66];
        [person say];
    }
    return 0;
}
