//
//  main.m
//  练习题
//
//  Created by 张凯泽 on 15-1-9.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{
    @autoreleasepool
    {
        //int a = 5?10:2;
        NSString * ss = @"01";
        NSMutableString * sr = [NSMutableString string];
        int a = 4;
        for (int index = 0; index<ss.length; index+=4)
        {
            if ((ss.length-index)<4) {
                a = (int)(ss.length-index);
            }
            NSRange range = {index,a};
            // ss=[ss substringWithRange:range];
            //[sr appendString:@"%@%@",[ss substringWithRange:range],@""];
            [sr appendFormat:@"%@%@",[ss substringWithRange:range],@""];
            
            NSLog(@"sr = %@",sr);
            //break;
            
        }
//        while (1) {
//            NSRange range = {0,4};
//           // ss=[ss substringWithRange:range];
//            [sr appendString:[ss substringWithRange:range]];
//            
//            NSLog(@"%@",ss);
//            break;
//        }
        //也可以用倒序循环。
        //方法1老是做
      /*NSString *str=@"11sd11rty1";
        NSString *str2=@"11";
        int count=0;
        for (int i=0; i<[str length];)
        {
            NSString *temp=[str substringFromIndex:i];
            if (temp.length<str2.length)
            {
                break;
            }
            NSString *s=[str substringWithRange:NSMakeRange(i, str2.length )];
            if ([s isEqualToString:str2])
            {
                count++;
                i+=str2.length;
            }
            else
            {
            i++;
            }
        }
        NSLog(@"%d",count);*/
        //方法2自己根据方法1思路重新做
//        NSString *str=@"1111333";
//        NSString *str1=@"11";
//        int count=0;
//        for (unsigned long i=0; i<str.length;)
//        {
//            if ([str substringFromIndex:i].length<str1.length)
//            {
//                break;
//            }
//            NSRange r1={i,str1.length};
//            NSString *s=[str substringWithRange:r1];
//            if ([s isEqualToString:str1])
//            {
//                count++;
//                i+=str1.length;
//            }
//            else
//            {
//                i++;
//            }
//            
//        }
//        NSLog(@"%d",count);
        /*NSString *str=@"112";
        NSString *str1=@"11";
        int count =0;
        while (1)
        {
            NSRange range=[str rangeOfString:str1];
            if (range.location==NSNotFound)
            {
                break;
            }
            str=[str substringFromIndex:(range.location+range.length)];
            count++;
        }
                NSLog(@"%d",count);*/
//        NSString *str=@"1111333";
//        NSString *str1=@"1";
//        int count=0;
//        while (1)
//        {
//            NSRange range={[str rangeOfString:str1].location,str1.length};
//            NSString *temp=[str substringWithRange:range];
//            if ([temp isEqualToString:str1])
//            {
//                count++;
//            }
//            str=[str substringFromIndex:([str rangeOfString:str1].location+str1.length) ];
//            if ([str rangeOfString:str1].location==NSNotFound)
//            {
//                break;
//            }
//            
//        }
        //NSLog(@"%d",count);

        
        
        
    }
    return 0;
}
