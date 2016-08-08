//
//  main.c
//  条件判断
//
//  Created by zkz on 14-12-16.
//  Copyright (c) 2014年 wyzc. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b,c;
    printf("请输入二次项系数:");
    scanf("%d",&a);
    printf("请输入一次项系数:");
    scanf("%d",&b);
    printf("请输入常数项数:");
    scanf("%d",&c);
    /*if (b>0&&c>0) {
        printf("%d*x*x+%d*x+%d\n",a,b,c);
    }
    else if (b>0&&c<0) {
        printf("%d*x*x+%d*x%d\n",a,b,c);
    }
    else if (b<0&&c>0) {
        printf("%d*x*x%d*x+%d\n",a,b,c);
    }
    else
    {
        printf("%d*x*x%d*x%d\n",a,b,c);
    }*/
    /*if (b>0)
    {
        if (c>0)
        {
            printf("%d*x*x+%d*x+%d\n",a,b,c);
        }
        else
        {
        printf("%d*x*x+%d*x%d\n",a,b,c);
        }
    }
    if (b<0)
    {
        if (c>0)
        {
            printf("%d*x*x%d*x+%d\n",a,b,c);
        }
        else
        {
        printf("%d*x*x%d*x%d\n",a,b,c);
        }
    }*/
    
    /*printf("%d*x*x",a);//老师的方法
    if(b>0)
    {
        printf("+");
    }
    printf("%d*x",b);
    if (c>0)
    {
        printf("+");
    }
    printf("%d=0\n",c);
    int d=b*b-4*a*c;

    if (d<0)
    {
        printf("无解\n");
    }
    else if (d==0)
    {
        printf("根%g\n",(float)(-b)/(2*a));
    }
    else
    {
        printf("第一个根%g\n",(-b+sqrt(d))/(2*a));
        printf("第二个根%g\n",(-b-sqrt(d))/(2*a));
    }*/

    return 0;
}
