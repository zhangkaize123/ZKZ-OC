//
//  main.c
//  循环4
//
//  Created by 张凯泽 on 14-12-17.
//  Copyright (c) 2014年 wyzc. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    /*int a;
    int c=0;
    for (int i=0; i<5; i++)
    {
        scanf("%d",&a);
        if (a%2==0)
        {
            c++;
            printf("偶数%d\n",a);
        }
    }
    printf("%d\n",c);*/
    int a;
    int co=0,cj=0,sumo=0,sumj=0;
    for (int i=0; i<10; i++)
    {
        scanf("%d",&a);
        if (a%2==0)
        {
            co++;
            sumo+=a;
        }
        else
        {
            cj++;
            sumj+=a;
        }
        
    }
    if (co==0)//多注意一些判断，全都是偶数或者全都是奇数时
    {
        printf(" 偶数平均值:0\n");
    }
    else
    {
        printf("%g\n",(float)sumo/co);
    }
    if (cj==0)
    {
        printf("奇数平均值:0\n");
    }
    else
    {
        printf("%g\n",(float)sumj/cj);
    }

    
    return 0;
}
