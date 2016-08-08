//
//  main.m
//  内存管理
//
//  Created by 张凯泽 on 15-1-12.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZKZStudent.h"
int main(int argc, const char * argv[])
{
    @autoreleasepool
    {
        ZKZStudent *zs=[[[ZKZStudent alloc]init]autorelease];
        ZKZStudent *ls=[ZKZStudent student];
        NSLog(@"%lu",(unsigned long)[zs retainCount]);
        //[zs release];
        int count=3;
        [zs performSelector:@selector(show:) withObject:count];
        
        
    }
    return 0;
}
