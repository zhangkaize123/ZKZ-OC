//
//  main.m
//  类的数据与行为
//
//  Created by 张凯泽 on 15-1-7.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZKZPerson.h"

//创建的几个对象都想拥有某个数据，就把它定义为类的数据（属于全局）。
//类的行为又叫工厂行为，负责创建自身对象。
int main(int argc, const char * argv[])
{
    @autoreleasepool
    {
        //ZKZPerson *zs=[[ZKZPerson alloc]iniWithtName:@"张三" andWithAge:22];
        //int a=[zs count];
        
        //[zs say];
//        [ZKZPerson show];
//        ZKZPerson *li=[[ZKZPerson alloc]initName:@"李四"];
//        [zs say];
//        [ZKZPerson show];
   //________________1.类的行为_______________________________
        ZKZPerson *a=[ZKZPerson personWithName:@"rrrr" andWithAge:45];
        //[a say];
        
        
        
        
        
        
        
    }
    return 0;
}
