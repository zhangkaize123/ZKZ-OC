//
//  main.c
//  函数
//
//  Created by 张凯泽 on 14-12-18.
//  Copyright (c) 2014年 wyzc. All rights reserved.
//

#include <stdio.h>
#include "isPrimer.h"
void fun();//函数的声明
int f(int a);
double sum(double a,double b);

int main(int argc, const char * argv[]) {
    //1.   定义，声明，调用
    //2.   定义  返回值  函数名称（参数列表）｛ ｝
    //3.    如何把函数放到一个文件里来调用函数
    //fun();//函数调用
    //int b;
    //scanf("%d",&b);
    //printf("%d\n",f(b));//4.相当于int a=b,如果b是float型的话，根据。。赋值语句。。自动转换成a类型的数据。
    /*double c,d;
    scanf("%lg",&c);
    scanf("%lg",&d);
    double h=sum(c, d);
    printf("%lg\n",h);*/
    
    //输出100到999之间的质数
    for (int i=100; i<=999; i++)
    {
        if (isPrimer(i))      //5. 非0即为真       if里边的逻辑变量都是为真的
        {
            printf("%d\t",i);
        }
    }
    
    
    
    return 0;
}
double sum(double a,double b)
{
    return a+b;
}

//函数定义
void fun()
{
    printf("1\n");
    printf("2\n");
}
int f(int a)
{
    int sum=0;
    for (int i=0; i<=a; i++)
    {
        sum+=i;
    }
    return sum;
}





