//
//  main.m
//  文件操作
//
//  Created by 张凯泽 on 15-1-14.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{
    @autoreleasepool
    {
        //1.字符串：
     /*NSString *str1=@"1234";
       BOOL b= [str1 writeToFile:@"string.txt" atomically:YES encoding:NSUTF8StringEncoding error:nil];
        if (b==NO)
        {
            NSLog(@"文件读取失败");
        }*/
        //NSError *error=nil;
       // NSString *str2=[NSString alloc]initWithContentsOfFile:<#(NSString *)#> usedEncoding:<#(NSStringEncoding *)#> error:<#(NSError *__autoreleasing *)#>//属于二级指针就是&error
//       if (str2==nil)
//        {
//            NSLog(@"%@",[error description]);
//        }
//        NSLog(@"%@",str2);
//——————————————————————————————————————————————————————————
 //2.数组：
//        NSArray *array=[[NSArray alloc]initWithObjects:@"zs",@"ls", nil];
//        [array writeToFile:@"name.plist" atomically:YES];
//        NSArray *arr1=[[NSArray alloc]initWithContentsOfFile:@"name.plist"];
//        NSLog(@"%@",arr1);
//        
//3.集合中没有把set直接写到文件中，可以把它转化成数组，在写到文件中去。
 //4.字典
//        NSDictionary *dic1=[[NSDictionary alloc]initWithObjectsAndKeys:@"zs",@"1",@"ls",@"2", nil];
//        [dic1 writeToFile:@"dic.plist" atomically:YES];
//
        NSDictionary *dic2=[[NSDictionary alloc]initWithContentsOfFile:@"dic.plist"];
        if (dic2==nil)
        {
            NSLog(@"读取失败");
        }
        else
        {
            NSLog(@"%@",dic2);
        }
        
    }
    return 0;
}
