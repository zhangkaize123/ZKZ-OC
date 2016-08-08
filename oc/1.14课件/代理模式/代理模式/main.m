//
//  main.m
//  代理模式
//
//  Created by 张凯泽 on 15-1-14.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZKZBoss.h"
#import "ZKZHelper.h"
int main(int argc, const char * argv[]) {
    @autoreleasepool {
        ZKZBoss *zs=[[[ZKZBoss alloc]init]autorelease];
        ZKZHelper*ls=[[[ZKZHelper alloc]init]autorelease];//1
        ls.name=@"enir";
        zs.name=@"jake";
        zs.delegate=ls;//2
        NSLog(@"%lu",(unsigned long)[ls retainCount]);
        [zs train];
        [zs.delegate attendace];
        [zs pay];
        [zs phone];
        
        
    }
    return 0;
}
