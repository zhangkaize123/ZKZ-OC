//
//  main.m
//  属性
//
//  Created by 张凯泽 on 15-1-13.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>
//#import "ZKZStudent.h"
int main(int argc, const char * argv[])
{
    @autoreleasepool
    {
 //strong,weak,assign,readonly,copy,readwrite关键字
        
        
//        
//        ZKZStudent *zs=[[ZKZStudent alloc]init];
//        //zs.name=@"zhangsan";
//        zs.age=23;
//        [zs show];
//        //ZKZStudent *ls=[zs copy];///自己的类没有copy能力就会cash掉，必须给他这个能力
//        NSLog(@"%@",zs);
 //_________________________________________________________
        NSMutableString *str1=[[NSMutableString alloc]initWithFormat:@"%d",123];
        NSLog(@"%@",str1);
        NSMutableString *str2=[str1 mutableCopy];//需要使用动态拷贝，动态的东西得需要动态的拷贝。现成的类都有拷贝功能。
        NSLog(@"retain count=%lu",(unsigned long)[str1 retainCount]);
        NSLog(@"retain count=%lu",(unsigned long)[str2 retainCount]);
        [str2 insertString:@"aaa" atIndex:0];
        NSLog(@"%@",str2);
        NSLog(@"%@",str1);
        if (str1==str2)//str1 与str2对应的地址不相同,str1与str2是两个不同的空间因为是拷贝,如果是retain,他们引用的时同一块内存。
        {
            NSLog(@"地址相同");
        }

        
        
        

//        
        
        
        
    }
    return 0;
}
