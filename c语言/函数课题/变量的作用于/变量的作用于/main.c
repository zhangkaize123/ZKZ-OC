//
//  main.c
//  变量的作用于
//
//  Created by 张凯泽 on 14-12-19.
//  Copyright (c) 2014年 wyzc. All rights reserved.
//

#include <stdio.h>
//void swap(int a,int b);
void swap();
int a=1;
int b=2;
int main(int argc, const char * argv[])
{     //1.全局变量（定义在所有的大括号外边的变量）
    //  2.局部变量（大括号里边的）。
    /*for (int i=1; i<10; i++)
    {
        <#statements#>
    }
    printf("%d\",i);//有问题因为作用域的原因  （大括号）所以i看不到。
                   //想看到的话就把int i  提前。*/
    
    /*int a;
    for (int i=1; i<10; i++)
    {
        int a=123;
    }
    printf("....%d...",a);*/
    /*//3.不用第三者交换a与b
    int a=1,b=3;
    a=a+b;
    b=a-b;
    a=a-b;*/
    /*int a=1;
    int b=2;*/
    printf("a=%d,b=%d\n",a,b);
    //swap(a, b);
    swap();
    printf("a=%d,b=%d\n",a,b);//输出的a与b一样。想要改变，就得提升权限。
    
    
        return 0;
}
/*void swap(int a,int b)
{
    int t=a;
    a=b;
    b=t;
}*/
void swap()
{
    int t=a;
    a=b;
    b=t;
}





