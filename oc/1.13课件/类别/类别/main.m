//
//  main.m
//  类别
//
//  Created by 张凯泽 on 15-1-13.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NSString+trim.h"
int main(int argc, const char * argv[])
{
    @autoreleasepool
    {
      //给现有的类添加行为时，需要使用类别。----->很重要
        NSString *str=@"  123  ";
        NSLog(@"a%@a",str);
        str=[str trim];
        NSLog(@"%@",str);
    
    
    }
    return 0;
}
