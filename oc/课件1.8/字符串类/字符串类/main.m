//
//  main.m
//  字符串类
//
//  Created by 张凯泽 on 15-1-8.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{
    @autoreleasepool
    {
//_______________________字符串________________________________
        //构建一个对象
//        NSString *str1=[[NSString alloc]init];//空串@“”
//        NSString *str2=[NSString new];//等同于str1
//        NSString *str3=[[NSString alloc]initWithFormat:@"%d,%s",1234,"name"];
//        NSLog(@"%@",str3);
//        NSString *str4=[NSString stringWithUTF8String:"abc"];
//        NSLog(@"%@",str4);
//        
//        NSString*str=@"123";
//        str=@"abcd";// str内存里开始存的是@"123"的地址牌号，后来又指向了@"abcd"；
        //c 的字符
//        char name[40]="zhangkaize";
//        NSString *str5=[NSString stringWithUTF8String:name];
//        NSLog(@"str5=%@",str5);
//        NSString *str6=[[NSString alloc]initWithCString:name encoding:NSUTF8StringEncoding];
//        NSLog(@"%@",str6);
        //格式化
        //文件
        //通过URL
//___________________ 字符串长度__________________________________
//        NSString *str7=@"SKFJadkv";
//        NSLog(@"count=%lu",(unsigned long)[str7 length]);
//        char *name1="zhangkaize";
//        NSString *str8=[[NSString alloc]init];
//        for (int i=0; i<strlen(name1); i++)
//        {
//            str8=[NSString stringWithCharacters:name1 length:i];
   //     }有问题
//        NSLog(@"循环转化%@",str8);
        
//        NSLog(@"str8=%@",str8);
//___________________大小写转化______________________________
//        NSString *lowstring=[str7 lowercaseString];
//        NSLog(@"lowstring=%@",lowstring);
//        NSString *upstring=[str7 uppercaseString];
//        NSLog(@"upstring=%@",upstring);
////____________________提取字符串______________________________
//        NSString *str8=[NSString stringWithFormat:@"123456%d%s",78,name];
        //NSLog(@"wowowo%@",str18);
        //NSString *overstring=[str8 substringFromIndex:3];//从下标3——到结束，包括3这个下标的字符。
       // NSLog(@"%@",overstring);
        //NSString *st=[str8 substringToIndex:1];
//        NSLog(@"%@",st);
//        NSString *str9=@"123456";
//        NSRange r={3,2};
//        NSString *str10=[str9 substringWithRange:r];
//        NSLog(@"%@",str10);
//        NSString *s4=[[NSString alloc]init];
//        NSRange range1={0,1};
//        for (long i=str8.length-1; i>=0; i--)
//        {
//            range1.location=i;
//            NSString *stri1=[str8 substringWithRange:range1];
//            s4=[NSString stringWithFormat:@"%@%@",s4,stri1 ];
//        }
//        str8=s4;
//        NSLog(@"%@....",str8);
      // 方法很重要，注意理解老师讲的思路。
        //abcdef-------->fedcba倒序显示出来
        char string[40];
        string[39]='\0';
        scanf("%s",string);
        NSString  *str=[NSString stringWithUTF8String:string];
        NSString *s3=[[NSString alloc]init];
        for (long i=str.length-1; i>=0; i--)
        {
            NSString*s1=[str substringFromIndex:i];
            NSString *s2=[s1 substringToIndex:1];
            s3=[[NSString alloc]initWithFormat:@"%@%@",s3,s2];
        }
        str=s3;
        NSLog(@"yyyyy%@",str);
        NSString *ss=@"xxx";
        
        
    }
    return 0;
}
