//
//  main.m
//  1.9作业
//
//  Created by 张凯泽 on 15-1-9.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{
    @autoreleasepool
    {
        //输入俩个字符串 删除第一个字符串中，有第二个字符串的内容
        /*char str1[100];
        NSLog(@"请输入一个字符串");
        scanf("%s",str1);
        char str2[40];
        NSLog(@"请输入一个字符串");
        scanf("%s",str2);
        str1[99]=0;
        str2[39]=0;
        NSMutableString *str3=[NSMutableString stringWithCString:str1 encoding:NSUTF8StringEncoding];
        NSMutableString *str4=[NSMutableString stringWithUTF8String:str2];
        while (1)
        {
            NSRange r1=[str3 rangeOfString:str4];
            if (r1.location==NSNotFound)
            {
                break;
            }
            //[str3 replaceCharactersInRange:r1 withString:@" "];
           
        
        }
        char ch[50];
        NSMutableArray *array=[[NSMutableArray alloc]initWithCapacity:100];
        for (int i=0; i<str3.length; i++) {
            ch[i]=[str3 characterAtIndex:i];
            NSString *str6=[[NSString alloc]initWithUTF8String:&ch[i]];
            
            [array addObject:str6];
            [array removeObject:@" "];
        }
        NSMutableString *stri=[[NSMutableString alloc]initWithCapacity:100];
        for (NSString *s in array)
        {
            [stri appendFormat:@"%@%@",@"",s ];
        }
        NSLog(@"delete string=%@",stri);
        
        //使用数组做？*/
        //把某个指定字符用某个字符代替。
        NSString *string1= @"1122";
        NSString *string2= @"12";
        string1=[string1 stringByReplacingOccurrencesOfString:string2 withString:@""];
        NSLog(@"%@",string1);
        
        
    }
    return 0;
}
