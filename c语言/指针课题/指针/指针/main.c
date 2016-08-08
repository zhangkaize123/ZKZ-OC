//
//  main.c
//  指针
//
//  Created by 张凯泽 on 14-12-25.
//  Copyright (c) 2014年 wyzc. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
void f(int a,int b);
void k(int *c,int *d);
void u(int *a,int *b);
int main(int argc, const char * argv[])
{    //使用指针情况
    //1.在一个函数中去使用另一个函数中的变量。
    //int a=1;
    //int b=2;
    //printf("a=%d\tb=%d\n",a,b);
     //f(a,b);
    //k(&a,&b);
    //u(&a,&b);
    //printf("a=%d\tb=%d\n",a,b);//不能改变 a,b的值想改变就用指针。
    //2.动态内存的申请
    /*int n;
    printf("请输入你班级的人数");
    scanf("%d",&n);
    //void*po//任意类型的指针
    int *score=malloc(sizeof(int)*n);//申请内存//int score[n];
    for (int i=0; i<n; i++)
    {
        printf("请输入第%d名同学的成绩",i+1);
        //scanf("%d",(score+i));
        scanf("%d",&score[i]);                     ///......................问题
    }
    for (int i=0; i<n; i++)
    {
       // printf("%d\t",*(score+i));
        printf("%d\t",score[i]);
    }
    free(score);//释放完以后这块空间别人还可以用，你也可以去访问。*/
    //3.数组的名和函数的名就是地址。
    /*int b[12];
    int *p1=b;
    printf("p的地址%p\n",p1);
    printf("a的地址%p\n",b);*/
    for (int i=0;i<12; i++)
    {
        //*(a+i)=i;
        //a[i]=i;
        //*(p+i)=i;
        //*(&a[i])=i;
    }
    
    for (int i=0;i<12; i++)
    {
        
        //printf("%d\t",*(p++));
        
        //printf("%d\t",*(p+i));
        //printf("%d\t",* &a[i]);
       // printf("%d\t",*(a+i));
    }

    /*int a,b,c;
    //前缀
    a=012;//一个常量的前面有0 代表八进制，
    b=0X12;//代表16进制
    c=0b11;// 代表二进制
    //后缀
    float f;
    f=1.2f;
    printf("%g",f);*/
    int a;
    a=33;
    int *p=&a;
    printf("a的地址%p\n",&a);
    printf("p的地址%p\n",p);//单独的p就是p这块空间里a的地址名称。
    printf("a的值%d\n",* &a);//& 符号是取a 的首地址（第一个字节）的地址。一共是4个字节
    
    printf("%d\n",*p);//取p地址单元对应的a地址里边的值
    scanf("%d",p);
    printf("%d\n",a);
    return 0;
}
void u(int *a,int *b)
{
    /*int t=*a;
    *a=*b;
    *b=t;*/
    *a=(*a+*b);
    *b=*a-*b;
    *a=*a-*b;
    
}



void k(int *c,int *d)
{
    *c=13;
    *d=14;
}


void f(int a,int b)
{
    a=13;
    b=14;
}


