//
//  main.c
//  一周练习题老师做
//
//  Created by 张凯泽 on 14-12-22.
//  Copyright (c) 2014年 wyzc. All rights reserved.
//

#include <stdio.h>
#include<time.h>
#include<stdlib.h>
void convert(int a);
int count (int a);
int main(int argc, const char * argv[]) {
    // 自己做
    /*printf("请输入一个正整数：");
     int n;
     int c=0;
     int count=1;
     int cou;
     scanf("%d",&n);
     
     for (int i=1; i<=n; i*=10)
     {
     c++;
     count*=10;
     }
     cou=count/10;
     int e;
     for (int i=1; i<=c; i++)
     {
     int t=0;
     for (int j=0; j<i; j++)
     {
     e=n/(count/10);
     count/=10;
     if (e==0)
     {
     t++;
     printf("零");
     }
     else if (e==1)
     {
     t++;
     printf("壹");
     }
     
     else if (e==2)
     {
     t++;
     printf("贰");
     }
     else if (e==3)
     {
     t++;
     printf("叁");
     }
     else if (e==4)
     {
     t++;
     printf("肆");
     }
     else if(e==5)
     {
     t++;
     printf("伍");
     }
     else if(e==6)
     {
     t++;
     printf("陆");
     }
     else if(e==7)
     {
     t++;
     printf("柒");
     }
     else if(e==8)
     {
     t++;
     printf("捌");
     }
     else
     {
     t++;
     printf("玖");
     }
     if (t==1)
     {
     n=(n%count);
     break;
     //j=i;
     }
     }
     }
     printf("\n");*/
    int a;
    //int t=1;
    
    scanf("%d",&a);
    int n=count(a);
    printf("%d",n);
    for (int i=n; i>0; i--)
    {
        int b=1;
        for (int j=1; j<i; j++)
        {
            
            b*=10;
        }
        int cur=a/b;
        convert(cur);
        a=a-cur*b;
        
    }
    //convert(a);
    //printf("%d\n",b);
    
    srandom((unsigned)time(NULL));
    //老师做
    /*for (int k=0; k<5; k++)
    {
        for (int j=0; j<5; j++)
        {
            for (int i=0; i<5; i++)
            {
                int a=random()%26;
                int c=random()%2;
                if (c==0)
                {
                    printf("%c",a+65);
                }
                else
                {
                    printf("%c",a+97);
                }
            }
            printf("  ");
        }
        printf("\n");
    }*/
    //自己做
    /*for (int k=0; k<5; k++)
    {
        
        
        for (int i=0; i<5; i++)
        {
            
            for (int j=0; j<5; j++)
            {
                int a = random()%58+65;//92
                //int b = random()%6+91;//91
                if (a>=91&&a<=96)
                {
                    j--;
                    
                }
                else
                {
                    printf("%c",a);
                }
            }
            printf("  ");
            
        }
        printf("\n");
    }*/
    
    return 0;
}
int count (int a)
{
    int c=0;
    while (a/=10)
    {
        
        c++;
    }
    return c+1;
}
void convert(int a)
{
    if (a==0)
    {
        printf("零");
    }
    else if (a==1)
    {
        printf("壹");
    }
    else if (a==2)
    {
        printf("贰");
    }
    else if (a==3)
    {
        printf("叁");
    }
    else if (a==4)
    {
        printf("肆");
    }
    else if (a==5)
    {
        printf("伍");
    }
    else if (a==6)
    {
        printf("陆");
    }
    else if (a==7)
    {
        printf("柒");
    }
    else if (a==8)
    {
        printf("捌");
    }
    else if (a==9)
    {
        printf("玖");
    }
  
}


