//
//  main.m
//  类别应用
//
//  Created by 张凯泽 on 15-1-13.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NSArray+join.h"
int main(int argc, const char * argv[])
{
    @autoreleasepool
    {
        NSArray *array=[NSArray arrayWithObjects:@"1",@"2",@"3",@"4", nil];
        //方法1
        //NSString *string=[array joinWith:@","];
        //方法2，数组中有这个行为
        NSString *string=[array componentsJoinedByString:@","];
       NSLog(@"%@",string);
        
        NSString *str1=@"a,b,c,d,e,";
        NSArray *arr1=[str1 componentsSeparatedByString:@","];
        for (NSString *s in arr1) {
            NSLog(@"%@",s);
        }
        
        
//       NSString *str3= [str1 stringByReplacingOccurrencesOfString:@"," withString:@""];
        
    }
    return 0;
}
