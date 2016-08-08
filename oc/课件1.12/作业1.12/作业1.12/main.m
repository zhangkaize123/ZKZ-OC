//
//  main.m
//  作业1.12
//
//  Created by 张凯泽 on 15-1-12.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZKZStudent.h"
int main(int argc, const char * argv[])
{
    @autoreleasepool
    {
        //字符串解析：
                NSMutableDictionary *mdic=[[NSMutableDictionary alloc]initWithCapacity:100];//建立一个动态字典
        NSString *str1=@"zhangsan:22,lisi:33,wangwu:24";//输入的字符串对象
        int count=0;
        while (1)
        {
            NSString *str2=@"";
            NSRange range=[str1 rangeOfString:@","];
            if (range.location==NSNotFound)
            {
                count++;
                NSNumber *num=[[NSNumber alloc]initWithInt:count];
                [mdic setObject:str1 forKey:num];
                break;
            }
            else
            {
                count++;
                str2=[str1 substringToIndex:range.location+1];
                NSNumber *num=[[NSNumber alloc]initWithInt:count];
                [mdic setObject:str2 forKey:num];
                str1=[str1 substringFromIndex:range.location+1];
            }
        }
        NSArray *array=[mdic allKeys];//把key放到数组中
        array=[array sortedArrayUsingSelector:@selector(compare:)];//给key值进行排序。
        
        NSLog(@"%@",mdic);
//        NSMutableArray *array3=[[NSMutableArray alloc]init];
//        for (NSString *string in array)//便利字典中key值
//        {
//            [array3 addObject:[mdic objectForKey:string]];//value放到数组中去。
//        }
//        NSString *sti=@"";
//        for (NSString *string3 in array3)//便利value值。
//        {
//            sti=[[NSString alloc]initWithFormat:@"%@%@",sti,string3 ];
//        }
//        NSLog(@"%@",sti);
        
   //老师做：
        //_________用逗号分割“，”怎么办____________________
        NSMutableArray *array6=[[NSMutableArray alloc]initWithCapacity:100];
        NSString *str=@"zhangsan:22,lisi:33,wangwu:24";
        NSArray *array1=[str componentsSeparatedByString:@","];//
        for (NSString *s in array1)
        {
            NSArray *array2=[s componentsSeparatedByString:@":"];
            NSString *name=array2[0];
            NSString *strAge=array2[1];
            int age=[strAge intValue];
            ZKZStudent *student=[[ZKZStudent alloc]initWithName:name andWithAge:age];
            [array6 addObject:student];
        }
        NSLog(@"%@",array1);
        
        
        
        
        
        
        
        
        
        
    
    }
    return 0;
}
