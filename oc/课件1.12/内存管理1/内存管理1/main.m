//
//  main.m
//  内存管理1
//
//  Created by 张凯泽 on 15-1-12.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZKZStudent.h"
void f()
{
    ZKZStudent *zs=[[ZKZStudent alloc]init];//1
   // NSLog(@"%lu",(unsigned long)[zs retainCount]);

    ZKZStudent *ls=zs ;//2
    NSLog(@"%lu",(unsigned long)[zs retainCount]);
   }

int main(int argc, const char * argv[]) {
    @autoreleasepool {
       // f();
        
        ZKZStudent *zs=[[ZKZStudent alloc]init];//1
         NSLog(@"%lu",(unsigned long)[zs retainCount]);
        
        ZKZStudent *ls=[zs retain] ;//2
        NSLog(@"%lu",(unsigned long)[ls retainCount]);
        
        
        
        
        
        
//    //点操作是一次行为的调用
//        //1.有set字样而且是属性的首字母要大写。
//        ZKZStudent *student=[[ZKZStudent alloc]init];
//        student .name=@"zhagnsan";
//        NSLog(@"%@",student.name);
//    
    
    }
    return 0;
}
