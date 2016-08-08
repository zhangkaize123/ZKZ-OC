//
//  main.c
//  条件判断语句
//
//  Created by zkz on 14-12-16.
//  Copyright (c) 2014年 wyzc. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[]) {
    //无条件转向语句
   /* printf("1\n");
    printf("2\n");
    goto l;
    printf("3\n");
    l:printf("4\n");
    printf("5\n");
    printf("6\n");*/
    //条件判断语句if，1. 改变程序流程2.对事物进行判断。
    //if (返回值是逻辑值得表达式）
    //{
    //表达式真时要做的事；
    //}
    /*if(21>2)
    {
        printf("Ok\n");
    }*/
    /*int a;
    printf("请输入一个整数：");
    scanf("%d",&a);
    if (a%2==0) {
        printf("偶数\n");
    }
    if (a%2!=0) {
        printf("奇数\n");
    }*/
    /*int score;
    scanf("%d",&score);
    if (score<60)
    {
        printf("不及格 %d\n",score);
    }
    else
    {
        if (score<=80)
        {
            printf("及格\n");
        }
        else
        {
            if (score<90)
            {
                printf("优良\n");
            }
            else
            {
                if (score<=100)
                {
                    printf("优秀\n");
                }
                else
                {
                    printf("非法输入\n");
                }
                
            }
        }
    }*/
    /*if (score>60&&score<=80)
    {
        printf("%d合格",score);
    }
    if (score>80&&score<=90)
    {
        printf("%d优良",score);
    }
    if (score>90&&score<=100)
    {
        printf("%d优秀",score);
    }
    else
    {
        printf("%d不及格",score);
    }*/
// 任意输入五个整数，统计偶数个数。
    /*int c=0;
    int n;
    scanf("%d",&n);
    if (n%2==0)
    {
        c++;
    }
    scanf("%d",&n);
    if (n%2==0)
    {
        c++;
    }
    scanf("%d",&n);
    if (n%2==0)
    {
        c++;
    }
    scanf("%d",&n);
    if (n%2==0)
    {
        c++;
    }
    scanf("%d",&n);
    if (n%2==0)
    {
        c++;
    }
    printf("%d\n",c);*/
    // 任意输入10个整数，求偶数平均值，奇数平均值。
    /*int c1=0,c2=0;
    int sum1=0,sum2=0;
    int a;
    scanf("%d",&a);
    if (a%2==0)
    {
        c1++;
        sum1+=a;
    }
    else
    {
        c2++;
        sum2+=a;
    }
    scanf("%d",&a);
    if (a%2==0)
    {
        c1++;
        sum1+=a;
    }
    else
    {
        c2++;
        sum2+=a;
    }
    scanf("%d",&a);
    if (a%2==0)
    {
        c1++;
        sum1+=a;
    }
    else
    {
        c2++;
        sum2+=a;
    }
    scanf("%d",&a);
    if (a%2==0)
    {
        c1++;
        sum1+=a;
    }
    else
    {
        c2++;
        sum2+=a;
    }
    scanf("%d",&a);
    if (a%2==0)
    {
        c1++;
        sum1+=a;
    }
    else
    {
        c2++;
        sum2+=a;
    }
    
    if (c1==0)
    {
        printf(" 偶数平均值:0\n");
    }
    else
    {
        printf("%g\n",(float)sum1/c1);
    }
    if (c2==0)
    {
        printf("奇数平均值:0\n");
    }
    else
    {
       printf("%g\n",(float)sum2/c2);
    }*/
    int a,b,c;
    printf("请输入二次项系数:");
    scanf("%d\n",&a);
    printf("请输入一次项系数:");
    scanf("%d\n",&b);
    printf("请输入常数项数:");
    scanf("%d\n",&c);
    printf("(%d)*x*x+(%d)*x+(%d)\n",a,b,c);
    if (b*b-4*a*c<0)
    {
        printf("无解\n");
    }
    else
    {
        printf("%g\n",((-b)+sqrt(b*b-4*a*c))/(2*a));
        printf("%g\n",((-b)-sqrt(b*b-4*a*c))/(2*a));
    }
    return 0;
}
