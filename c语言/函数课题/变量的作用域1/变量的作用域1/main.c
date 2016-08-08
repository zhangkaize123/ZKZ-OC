//
//  main.c
//  变量的作用域1
//
//  Created by 张凯泽 on 14-12-19.
//  Copyright (c) 2014年 wyzc. All rights reserved.
//

#include <stdio.h>

void f();
int main(int argc, const char * argv[])
{
    
    
    extern int a;//   声明一个外部的变量用extern.
    
    //printf("a=%d\n",a);
    //f();
    //f();
    //f();
    
    
    
    
    
    return 0;
}
void f()
{
    static int count=0;//具有计数存储功能
    count++;
    printf("count=%d\n",count);
}