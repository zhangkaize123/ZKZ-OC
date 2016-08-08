//
//  main.c
//  指针2
//
//  Created by 张凯泽 on 14-12-26.
//  Copyright (c) 2014年 wyzc. All rights reserved.
//

#include <stdio.h>
void f(int* n);
void s(int n,int *t);
int main(int argc, const char * argv[]) {
    //int n1;
    //scanf("%d",&n1);
    //n=100;
    //f(&n1);
    //printf("%d\n",n1);
    int a;
    s(100,&a);
    printf("sum=%d\n",a);
    
    
    return 0;
}
void s(int n,int *t)
{
    *t=0;
    for (int i=1; i<=n; i++)
    {
        *t+=i;
    }

}
void f(int* n)
{
    int sum=0;
    int *p=&sum;
    
    for (int i=0; i<=*n; i++)
    {
        *p+=i;
    }
    *n=*p;
    
}