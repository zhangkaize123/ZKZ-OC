//
//  main.m
//  类行为的练习
//
//  Created by 张凯泽 on 15-1-7.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZKZTest.h"
#import "ZKZPerson.h"
int main(int argc, const char * argv[]) {
    @autoreleasepool
    {
        ZKZPerson*p=[[ZKZPerson alloc]initWithName:@"zhagnaog" andWithAge:34];
        extern int count;
        //这是一个不加static的例子利用extern。
        NSLog(@"%d",count);
        
        
    
    }
    return 0;
}
