//
//  main.c
//  数组指针
//
//  Created by 张凯泽 on 14-12-25.
//  Copyright (c) 2014年 wyzc. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    /*int*shuzu=malloc(sizeof(int)*5);
    *(shuzu+0)=1;//shuzu[0]=1
    *(shuzu+1)=2;
    *(shuzu+2)=3;
    *(shuzu+3)=4;
    *(shuzu+4)=5;
    int *p=shuzu;
    for (int i=0; i<5; i++)
    {
        //printf("%d\t",*(p++));
        //printf("%d\t",*(shuzu++));这样做有问题自加后shuzu的地址改变。
        printf("%d\t",*(shuzu+i));
    }
    free(shuzu);*/
    
    
    char*name="zhang";
    //char*name;  //这么做不可以因为定义的的指针是空指针不能赋值。
    //strcpy(name, "zhangsan ");//这么做不可以因为定义的的指针是空指针不能赋值。
//    printf("%s\n",name);
   // printf("%c\t",*(name+1));//对于字符串数组“zhang”，name代表组“z”占用的空间，而＊name代表的是取第一个空间的值--->"z"
    //char name[20];
    //strcpy(name, "zhangsan ");
    //printf("%s\n",name);
    //二维数组
    //1//char str[][30]={"占三","里斯","王五"};
    char *str[]={"zhangsan","里斯","qwer"};
//    printf("%s\t",str[0]);
//    printf("%s\t",*(str+1));
//    printf("%c\t",*(*(str+2)+0));//
    
    /*char*names[10];//不可以
    strcpy(names[0], "zhang");
   // printf("%s",&names);*/
    
    
    int a[5] = {0,1,2,3,4};
    int * b = (int *) (&a +1) ;
    
   // printf("%d",* (b-1));
    char * aa = NULL;
    char * bb = "hello";
    aa = bb;
    printf("%s",*bb);
    
    return 0;
}
