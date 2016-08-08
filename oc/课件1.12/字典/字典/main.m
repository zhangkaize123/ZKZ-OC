//
//  main.m
//  字典
//
//  Created by 张凯泽 on 15-1-12.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>
int main(int argc, const char * argv[])
{
    @autoreleasepool
    {
        
        
        
        
        NSDictionary *dictionary=[NSDictionary dictionaryWithObjectsAndKeys:@"zhangsan",@"1",@"lisi",@"2", nil];
        NSArray *arr=[dictionary allKeys];
        
        for (id st in arr)
        {
            NSLog(@"keys=%@,value=%@",st,[dictionary objectForKey:st]);
        }
//_____________________________________________________________
        NSMutableDictionary *mdic=[[NSMutableDictionary alloc]initWithCapacity:100];
        
//        //加
//        [mdic setObject:@"zhangsan" forKey:@"name"];
//        //修改
//        [mdic setObject:@"lisi" forKey:@"name"];
//        //个数
//        int a=(int)[mdic count];
//        //移除
//        [mdic removeAllObjects];
//        [mdic removeObjectForKey:@"name"];
//_________________________时间_______________________________________
        NSDate *date=[NSDate date];//当前日期
        //NSLog(@"%@",date);
        NSDateFormatter *formater=[[NSDateFormatter alloc]init];
        [formater setDateFormat:@"yyyy-MM-dd "];
        //把字符串转化成日期
        // NSDate *date1=[formater dateFromString:@"1234-12-12 12:12:12"];
        //把日期转化成字符串。
        //NSString *datestring=[formater stringFromDate:date];
        //NSLog(@"%@",datestring);
        //前后几天是哪个日期
       NSDate *date1=[NSDate dateWithTimeIntervalSinceNow:10*24*60*60];
        
//        NSDateFormatter *formater=[[NSDateFormatter alloc]init];
//        [formater setDateFormat:@"yyyy-MM-dd HH:mm:ss "];
//        NSString *datestring1=[formater stringFromDate:date1];
//        NSLog(@"%@",datestring1);
        
//        NSDate *date2=[NSDate dateWithTimeIntervalSinceNow:-10*24*60*60];
//        //这两个日期之间的间隔。
//       double b= [date1 timeIntervalSince1970];
//        NSLog(@"%g",b);
        
        
        
        
//__________________________二进制______________________________________
//        NSString *str=@"1234";
//        NSData *data=[str dataUsingEncoding:NSUTF8StringEncoding];
//        NSLog(@"%@",data);
        
        
        
        
        
        
        
    
    
    }
    return 0;
}
