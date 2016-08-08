//
//  main.m
//  图形类继承老师讲
//
//  Created by 张凯泽 on 15-1-7.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZKZRectangle.h"
#import "ZKZSquare.h"
#import "ZKZCircle.h"
#import "ZKZTritangle.h"
int main(int argc, const char * argv[])
{
    @autoreleasepool
    {
//        ZKZRectangle *rect=[[ZKZRectangle alloc]initWithWidth:1000 andWithHeight:10];
//        NSLog(@"%g",[rect area]);
        ZKZSquare *square=[[ZKZSquare alloc]initSide:10];
        NSLog(@"%g",[square area]);
//        ZKZCircle *circle=[[ZKZCircle alloc]initWithRadus:10];
//        NSLog(@"%g",[circle area]);
//        ZKZTritangle *tri=[[ZKZTritangle alloc]initWithBottom:10 andWithHeight:10];
//        NSLog(@"%g",[tri area]);
//        
    }
    return 0;
}
