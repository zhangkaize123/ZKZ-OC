//
//  main.c
//  指针的使用
//
//  Created by 张凯泽 on 14-12-25.
//  Copyright (c) 2014年 wyzc. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
void swap(int *a,int *b);
void shuzudizhi(int n,char * r);
int main(int argc, const char * argv[]) {
   /* double d;
    d=123.4;
   // printf("%g\t",d);
    printf("%p\t",&d);
    printf("%ld\t",&d);*/
    //int *p=NULL;
    //printf("%p\n",p);//指针里边保存的地址名称
    //printf("%p\n",&p);
    //int number[4]={1,2,3,4};
    //printf("%p\n",number);
    //printf("%p",&number);
    //printf("%d",*p);//空指针不能访问
    //printf("%ld",sizeof(p));
    
    
   // p=malloc(sizeof(int));
    /*int a=123;
   int* p=&a;
    printf("%p\n",p);//单独的 p 拿出来就是变量a的地址牌号和  &a  一样
    printf("%p\n",&a);
    printf("%d\n",*p);
    printf("%p\n",&p);*/
    int a[2][2]={(1,2),(3,4)};
    //printf("%d\n",*(a[0]));
    //printf("%d\n",*((*(a+1))+1));
    //free(p);
    /*int a=1;
    int b=2;
    printf("a=%d,b=%d",a,b);
    swap(&a,&b);
    printf("a=%d,b=%d",a,b);*/
//    int shuzu[]={1,2,3,4,5};
    char * ch4="ABCDEttttttt";
    printf("ch4=%ld",sizeof(ch4));

//    char  ch1[1024]={'0'};
    char ch1[1024]={'0','1','2','3','4','5','6'};
    ch1[1023]='\0';
    //printf("r_____=%ld",strlen(ch1));
    char ch2[]={'w','e'};
    char ch3[50];
    
    shuzudizhi(1, ch1);
    
}
void swap(int *c,int *d)//这样做有问题
{
    int *t=c;//c是一个指针里边放的是a的地址牌号，把a的地址牌号给t
    c=d;
    d=t;
    
}
void shuzudizhi(int n,char * r)
{
    int zkz=(int)strlen(r);
    //printf("zkz=%d",zkz);
    //printf("r+n=%d",*(r+n));
    printf("r=%ld",sizeof(r));
}

