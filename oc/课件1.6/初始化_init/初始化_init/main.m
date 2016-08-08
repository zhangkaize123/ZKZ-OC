//
//  main.m
//  初始化_init
//
//  Created by 张凯泽 on 15-1-6.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZKZRectangle.h"
int main(int argc, const char * argv[]) {
    @autoreleasepool
   {
        ZKZRectangle *rec=[[ZKZRectangle alloc]initWithWidth:10 andWithHeight:34];
    //ZKZRectangle *rec1=[[ZKZRectangle alloc]init];
       
       NSLog(@"%g",[rec area]);
       
        
        
        
    }
    return 0;
}
