//
//  main.m
//  自己定制的类如何保存
//
//  Created by 张凯泽 on 15-1-9.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZKZStudent.h"
int main(int argc, const char * argv[])
{
    @autoreleasepool
    {
//        ZKZStudent *s1=[[ZKZStudent alloc]initWithName:@"zhagnsan" andWithAge:23];
//        ZKZStudent *s2=[[ZKZStudent alloc]initWithName:@"lisi" andWithAge:22];
//        ZKZStudent *s3=[[ZKZStudent alloc]initWithName:@"wangwu" andWithAge:33];
        //NSArray *array1=[[NSArray alloc]initWithObjects:s1,s2,s3 ,nil];
//        for (id s in array1) {//可以使用id类型的对象。id代表任何类型的对象
//            NSLog(@"%@",s);//重写descriptin方法。
//        }
    }
//___________________动态数组NSMutableArray_____________________
//    ZKZStudent *s1=[[ZKZStudent alloc]initWithName:@"zhagnsan" andWithAge:23];
//    ZKZStudent *s2=[[ZKZStudent alloc]initWithName:@"lisi" andWithAge:22];
//    ZKZStudent *s3=[[ZKZStudent alloc]initWithName:@"wangwu" andWithAge:33];
//    NSMutableArray *array2=[[NSMutableArray alloc]initWithCapacity:1];
//    //增加
//    [array2 addObject:s1];
//    [array2 addObject:s2];
//    [array2 addObject:s3];
//    //插入
//    [array2 insertObject:s3 atIndex:0];
//    for (id s in array2) {
//        NSLog(@"%@",s);
//    }
//   // NSLog(@"%@",array2);
//    //删除
//    [array2 removeAllObjects];//删除所有
//    [array2 removeLastObject];//删除最后一个对象
//    [array2 removeObjectAtIndex:0];//删除指定位置对象
//    [array2 removeObject:s3];//删除哪个对象
//    
//    //替换
//    [array2 replaceObjectAtIndex:0 withObject:s3];
    //排序------>只能对字符串，NSnumber排序
    NSArray *array3=[[NSArray alloc]initWithObjects:@"a",@"sf",@"rt",@"sfr", nil];
    //NSArray *array4=[array3 sortedArrayUsingSelector:@selector(compare:)];
    NSArray *array4=[array3 sortedArrayUsingSelector:NSSelectorFromString(@"compare:")];
    NSLog(@"%@",array4);
    
    
    
    
    
    
    return 0;
}
