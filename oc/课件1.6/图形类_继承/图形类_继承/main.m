//
//  main.m
//  图形类_继承
//
//  Created by 张凯泽 on 15-1-6.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZKZRectangle.h"
#import "ZKZSquare.h"
#import "ZKZTriangle.h"
#import "ZKZCircle.h"

int main(int argc, const char * argv[])
{
    @autoreleasepool
    {
//        ZKZShape*rec=[[ZKZRectangle alloc]initWithWidth:10 andWithHeight:3];
        ZKZShape  *test=[ZKZRectangle rectangleWithWidth:20 andWithHeight:3];
        
        NSLog(@"%g",[test area]);
        
//        ZKZSquare *square=[[ZKZSquare alloc]initWithSide:10];
//        NSLog(@"%g",[square area]);
//        
//        ZKZTriangle *tri=[[ZKZTriangle alloc]initWithBottom:10 andWithHeight:15];
//        NSLog(@"%g",[tri area]);
//        
//
//        ZKZCircle  *circle=[[ZKZCircle alloc]initWithRadius:10];
//        NSLog(@"%g",[circle area]);
        
    }
    return 0;
}
