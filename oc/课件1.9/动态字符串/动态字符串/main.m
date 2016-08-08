//
//  main.m
//  动态字符串
//
//  Created by 张凯泽 on 15-1-9.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{
    @autoreleasepool
    {
//__________________动态字符串___________________________________
       // NSMutableString是NSString的子类。
        //NSMutableString *s＝@“2324”不能这样做，
       // NSMutableString *s1=[[NSMutableString alloc]initWithFormat:@"123"];
        //NSMutableString *s2=[[NSMutableString alloc]initWithCapacity:100];
        //NSLog(@"s1=%@",s1);
        //增"abcabvab"------>"ab"
//        [s1 appendString:@"abcabvab"];//在末尾加
//        NSLog(@"appendstring=%@",s1);
//        NSString *s2=@"ab";
//        NSLog(@"s2=%@",s2);
//        [s1 appendFormat:@"%d",456];
//        NSLog(@"appendformat=%@",s1);
//        [s1 insertString:@"hhh" atIndex:2];//在对应的下标的前边加。
//        NSLog(@"insert=%@",s1);
        
        
        //删
//        NSRange r={1,2};
//        [s1 deleteCharactersInRange:r];
        //NSLog(@"delete=%@",s1);
//        while (1)
//        {
//            NSRange r1=[s1 rangeOfString:s2];
//            if (r1.location==NSNotFound)
//            {
//                break;
//            }
//            [s1 deleteCharactersInRange:r1];
//            NSLog(@"delete=%@",s1);
//        }
//        for (unsigned long i=0; i<s1.length;i++)
//        {
//            NSRange r={i,s2.length};
//            NSString *temp=[s1 substringWithRange:r];
//            
//            if ([temp isEqualToString:s2])
//            {
//                [s1 deleteCharactersInRange:r];
//            }
//            
//        }
        //NSLog(@"delete=%@",s1);
        //1.改
       // NSRange rang={0,s1.length};
        
        //[s1 replaceCharactersInRange:rang withString:@"1111"];
        //2.替换字符串中所有关于某个字符的内容。
        NSString *s1=@"1ufy111";
        NSString *s2=[s1 stringByReplacingOccurrencesOfString:@"1" withString:@"2"];
        NSLog(@"replace=%@",s2);
        
        
        
    }
    return 0;
}
