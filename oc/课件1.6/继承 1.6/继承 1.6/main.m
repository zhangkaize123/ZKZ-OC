//
//  main.m
//  继承 1.6
//
//  Created by 张凯泽 on 15-1-6.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZKZSperson.h"
#import "ZKZStudent.h"
int main(int argc, const char * argv[]) {
    @autoreleasepool {
        ZKZSperson *person=[[ZKZSperson alloc]initWithName:@"lisi" andWithAge:23];
        [person say];
        //NSLog(@"%@",person.description);
        //NSNumber *num=[NSNumber numberWithInt:3];
        NSLog(@"%@",person.description);
        
        
        //NSLog(@"%ld",[person retainCount]);
        //[person release];//在使用ARC时，程序运行结束后会自动调用[person release]方法。
        
        
        
        ZKZStudent *li= [[ZKZStudent alloc]initWithName:@"aaaa" andWithAge:23 andWithScore:67];
        [li say];
        
        
        
        
        
        
        
        
    }
    return 0;
}
