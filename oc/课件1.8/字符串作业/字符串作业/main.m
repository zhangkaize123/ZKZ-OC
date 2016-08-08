//
//  main.m
//  字符串作业
//
//  Created by 张凯泽 on 15-1-8.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{
    @autoreleasepool
    {
        //输入两个字符串判断第二个字符在第一个字符串里有几个
        
//        char str1[100];
//        NSLog(@"请输入一个字符串");
//        scanf("%s",str1);
//        char str2[40];
//        NSLog(@"请输入一个字符串");
//        scanf("%s",str2);
//        str1[99]=0;
//        str2[39]=0;
//        int count=0;
//        NSString *str3=[NSString stringWithCString:str1 encoding:NSUTF8StringEncoding];
//        NSString *str4=[NSString stringWithUTF8String:str2];
//        NSRange range=[str3 rangeOfString:str4];
//        if (range.length==0)
//        {
//            NSLog(@"没有此字符串");
//        }
//        else
//        {
//            while(1){
//                NSString *str5=[str3 substringFromIndex:range.location+range.length];
//                   count++;
//                range=[str5 rangeOfString:str4];
//                if (range.location!=NSNotFound)
//                {
//                    count++;
//                    str3=[str5 substringFromIndex:range.location+range.length];
//                    range=[str3 rangeOfString:str4];
//                }
//                if(range.location==NSNotFound)
//                {
//                    break;
//                }
//            }
//            NSLog(@"%d",count);
//        }
        
//       NSString* s1=@"11112";
//        NSString*s2=@"1";
//        int count=0;
//        while (1)
//        {
//            NSRange range=[s1 rangeOfString:s2];
//            if (range.location==NSNotFound)
//            {
//                break;
//            }
//            else
//            {
//                count++;
//            }
//            s1=[s1 substringFromIndex:(range.location+range.length)];
//                                       
//            
//        }
//        NSLog(@"%d",count);
//        
        NSString * ss = @"0123456789";
        for (int index = 0; index <ss.length; index ++) {
            NSString * sss = [ss substringFromIndex:0];
            NSLog(@"sss = %@",sss);
        }
        
        
        
        
        
        
    }
    return 0;
}
