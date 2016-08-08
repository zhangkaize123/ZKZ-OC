//
//  main.m
//  集合_NSset
//
//  Created by 张凯泽 on 15-1-9.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{
    @autoreleasepool
    {
       // set //1.里边不能保存重复的东西
              //2.没有下标
        NSArray *array1=[NSArray arrayWithObjects:@2,@4,@8,@5,@8, nil];
        //3.可以对数组中的数据进行筛选.
        NSSet *set1= [NSSet setWithArray:array1];
        NSLog(@"%@",set1);
        //4.对set里边的数据(1)分配下标（2）进行排序
        NSArray*array2=[set1 allObjects];
        NSLog(@"%@",array2);
        //数组中元素的排序，从小到大排序。
        NSArray*array3=[array2 sortedArrayUsingSelector:@selector(compare:)];
        NSLog(@"%@",array3);
        
//____________________动态集合__________________________________
        NSMutableSet *set2=[[NSMutableSet alloc]initWithCapacity:100];
        
        
        
        
        
        
        
        
    }
    return 0;
}
