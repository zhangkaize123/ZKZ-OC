//
//  main.m
//  归档
//
//  Created by 张凯泽 on 15-1-14.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Person.h"
int main(int argc, const char * argv[])
{
    @autoreleasepool
    {
        Person *zs=[[Person alloc]init];
        zs.name=@"zhangsan";
        Person *ls=[[Person alloc]init];
        ls.name=@"lisi";
        NSArray *array=[[NSArray alloc]initWithObjects:zs,ls, nil];
        //BOOL b=[array writeToFile:@"name.plist" atomically:YES];
        BOOL b=[NSKeyedArchiver archiveRootObject:array toFile:@"name.plist"];
        if (b)
        {
            NSLog(@"成功");
        }
        else
        {
            NSLog(@"失败");
        }
        
//        NSArray *array1=[NSKeyedUnarchiver unarchiveObjectWithFile:@"name.plist"];
//        if (array1==nil)
//        {
//            NSLog(@"失败");
//        }
//        else
//        {
//            NSLog(@"%@",array1);
//        }
        
    }
    return 0;
}
