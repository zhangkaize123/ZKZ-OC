//
//  main.m
//  面积
//
//  Created by 张凯泽 on 15-1-5.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZKZRectangle.h"
#import "ZKZSquare.h"
#import "ZKZTriangle.h"
#import "ZKZCircle.h"
int main(int argc, const char * argv[]) {
    @autoreleasepool
    {
        ZKZRectangle *s=[[ZKZRectangle alloc]init];
        s.width=30;
        [s setHeight:10];
        //[s setWithWidth:20 WithHeight:10];
        double b=[s area];
        NSLog(@"%g",b);
//
//        ZKZSquare *s1=[[ZKZSquare alloc]init];
//        [s1 setSide:10];
//        double b1=[s1 area];
//        NSLog(@"正方形area：%g",b1);
//        
//        ZKZTriangle *s2=[[ZKZTriangle alloc]init];
//        [s2 setWithBottom:20 andWithHeight:15];
//        double b2=[s2 area];
//        NSLog(@"三角形面积：%g",b2);
//        ZKZCircle *s3=[[ZKZCircle alloc]init];
//        [s3 setRad:10];
//        double b3=[s3 area];
//        NSLog(@"圆的面积%g",b3);
        
    }
    return 0;
}
