//
//  main.c
//  一星期复习题
//
//  Created by 张凯泽 on 14-12-19.
//  Copyright (c) 2014年 wyzc. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void convert(int a);
int count(int n);
int main(int argc, const char * argv[])
{
    srandom((unsigned)time(0));
       
    //1.从键盘上任意输入一个正整数，把它用汉字显示。如：123-  壹贰叁   307  .    268
    //零 壹 贰 叁 肆 伍  陆 柒 捌 玖
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
    scanf("%d",&a);
    int n=count(a);// 得到位数。
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
    convert(a%10);
    //2。模拟产生五行，每行5列，每列4444里有5个字符（A-Z，a-b).65-90...97-122...91...96
    /*for (int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
        {
            int a=(int)random()%58+65;
            //printf("%c\t",(int)random()%58+65);
            if (a>90&&a<97)
            {
                j--;
            }
            else
            {
                printf("%c\t",a);
            }
        }
        printf("\n");
    }*/
   /* for (int i=0; i<5; i++) {
        
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
                printf("%c \t",a);
            }
        }
        printf("\n");
    }*/
    
    
    return 0;
}
int count(int n)//统计位数
{
    int c=0;

    while (n=n/10)
    {
        c++;
    }
    return c+1;
}
void convert(int a)//显示一位数对应的位数
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


