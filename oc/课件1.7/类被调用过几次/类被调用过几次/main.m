//
//  main.m
//  类被调用过几次
//
//  Created by 张凯泽 on 15-1-7.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZKZStudents.h"

int main(int argc, const char * argv[])
{
    @autoreleasepool
    {
        ZKZStudents *s=[ZKZStudents studentsWithName:@"sss" andWithAge:23];
        [s saycount];//对象行为
        [ZKZStudents show];//类的行为
        ZKZStudents *s1=[ZKZStudents studentsWithName:@"hhh" andWithAge:63];
        [s1 saycount];
        [ZKZStudents show];
        
    }
    return 0;
}
