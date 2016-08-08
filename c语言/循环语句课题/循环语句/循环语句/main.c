//
//  main.c
//  循环语句
//
//  Created by 张凯泽 on 14-12-17.
//  Copyright (c) 2014年 wyzc. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //程序从某一位置开始，连续不断的去做某件事情就叫循环。
    //知道循环次数的用for    不知道循环次数用while   do....while
    //for(表达式1; 表达式2;表达式3) 初值；终值；步长
    //{
    //   要循环的语句。
    //}
    /*for (; ; )//死循环
    {
        printf("你看到");
    }*/
    
    for (int i=1; i<=100; i++)//用循环变量来产生1到100.
    {
        printf("%d\t",i);//显示这次的数
        if (i%10==0)//够10
        {
            //printf("\n");//换行
            
        }
    }
    printf("\n");
    
    
    
        return 0;
}
