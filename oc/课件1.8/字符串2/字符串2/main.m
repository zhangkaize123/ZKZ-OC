//
//  main.m
//  字符串2
//
//  Created by 张凯泽 on 15-1-8.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{
    @autoreleasepool
    {
        //__________________ 数字与字符串转化__________________________
        //数字转化成字符串
//        NSString *str1=[NSString stringWithFormat:@"%d",1234];
//        //字符串转化成数字
//        NSString *str2=@"3456";
//        int a=[str2 intValue];
//        NSLog(@"%d",a);
//        NSString *str3=@"3456.78";
//        int b=[str2 doubleValue];
        //字符串转化成c的字符串。
        //方法1：
        NSString *str5=@"fds234nkvs";
        char c[40];
       const char *ne=[str5 UTF8String];
        NSLog(@"转化%s",ne);
        //方法2:
        for (int i=0; i<str5.length; i++)
        {
            c[i]=[str5 characterAtIndex:i];
        }
        
            NSLog(@"通过character=%c",c[0]);
        
//___________________比较_________________________________________
        NSString *str4=@"3456";
        if ([str4 isEqualToString:@"345"])
        {
            NSLog(@"相等");
        }
        else
        {
            NSLog(@"不相等");
        }
        //
        
//___________________剔除两端空格__________________________________
        NSString *str6=@"   3456sd   ";
        NSLog(@"a%@a",str6);
        NSString *str7=[str6 stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]];
        str6=str7;
    NSLog(@"a%@a",str6);
//__________________以什么开头后结尾__________________________
        if ([str6 hasPrefix:@" "])
        {
            NSLog(@"以空格开头");
        }
        
        if ([str6 hasSuffix:@" "])
        {
            NSLog(@"以空格结尾");
        }
        NSRange range=[str6 rangeOfString:@"314"];
        NSLog(@"%@",NSStringFromRange(range));//{9223372036854775807, 0}

        if (range.location==NSNotFound)//NSNotFound等于NSIntegerMax，也可以用range.length==0;
        {
            NSLog(@"没有");
        }
    
        //课后作业：
        //输入两个字符串判断第二个字符在第一个字符串里有几个
        
        NSString *s1=@"sfdsF234张35";
        if([s1 hasPrefix:@"s"])
        {
            NSLog(@"yes");
        }
        
        
        
        
        
        
        
        
        
        
    
    }
    return 0;
}
