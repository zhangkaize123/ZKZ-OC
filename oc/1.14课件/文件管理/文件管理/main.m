//
//  main.m
//  文件管理
//
//  Created by 张凯泽 on 15-1-14.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{
    @autoreleasepool
    {
        NSFileManager *fm=[NSFileManager defaultManager];
        //创建文件
        [fm createDirectoryAtPath:@"abc" withIntermediateDirectories:YES attributes:nil error:nil];
        //移除
        //[fm removeItemAtPath:@"abc" error:nil];
        //显示创建的路径
        NSString *path=[fm currentDirectoryPath];
        NSLog(@"%@",path);
        NSString *path1=[path stringByAppendingPathComponent:@"----"];
        NSLog(@"%@",path1);
        [path1 writeToFile:@"s.txt" atomically:YES encoding:NSUTF8StringEncoding error:nil];
        NSLog(@"%@",path1);
        
        
        
        
    }
    return 0;
}
