//
//  main.c
//  循环while
//
//  Created by 张凯泽 on 14-12-18.
//  Copyright (c) 2014年 wyzc. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i=10;
    while (i>0)
    {
        
        printf("%d\n",i);
        i--;
        
    }
    
    
    /*int count=0;
    int sum=0;
    while (sum!=3003)
    {
        count++;
        sum+=count;
        
    }
    printf("%d\n",count);*/
    
    //求学生平均分
    /*int score,i,sum;
     i=0;
     sum=0;
     scanf("%d",&score);
     while (score>=0)
     {
        sum+=score;
        i++;
        scanf("%d",&score);
     }
     printf("平均分为%g\n",(float)sum/i);
     printf("人数为%d\n",i);*/
    
    
    //(2)方法
    /*int a;//学生成绩
    int n;//学生的总数
    int sum=0;//和
    printf(" 请输入你班级的总人数");
    scanf("%d",&n);
    for (int i=1; i<=n; i++)
    {
        printf("请输入第%d名同学的成绩：",i);
        scanf("%d",&a);
        sum+=a;
    }
    printf("你班级的平均分是：%g\n",(float)sum/n);*/
    
   /* int score;
    int n=0;
    int sum=0;
    while (1)
    {
        printf("请输入第%d名同学成绩:",n+1);
        scanf("%d",&score);
        if (score<0)
        {
            break;
        }
        else
        {
            sum+=score;
            n++;
        }
    }
    printf("%d\n",sum);
    printf("%d\n",n);*/
//    int a;
//    int sum=0;
//    int n=0;
//    do
//    {
//        sum+=a;
//        n++;
//        scanf("%d",&a);
//        
//    }while(a!=-100);
//    printf("%d\n",sum);
//    printf("%d",n-1);
        return 0;
}
