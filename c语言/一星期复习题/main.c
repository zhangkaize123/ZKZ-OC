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
int main(int argc, const char * argv[])
{
    srandom((unsigned)time(0));
    //判断两个数
    //可以使用条件运算，函数。
    //int a,b;
    //printf("请输入两个数\n");
    //scanf("%d",&a);
    //scanf("%d",&b);
    //scanf("%d",&max);
    /*if (a>b)
    {
        printf("a和b中最大的数是%d\n",a);
    }
    else if(a<b)
    {
        printf("a和b中最大的数是%d\n",b);
    }
    else
    {
        printf("a与b 相等");
    }*/
    /*if (a>b)
    {
        printf("a和b中最大的数是%d\n",a);
    }
    else
    {
        if (a<b)
        {
            printf("a和b中最大的数是%d\n",b);
        }
        else
        {
            printf("a与b 相等");
        }
    }*/
    //printf("%d\n",a-b>0?a:b);
    //三个数字进行比较
    /*int a,b,c;//a,b,c进行比较时先用a与后边的数进行比较，比较完后，第二个数再和后边的数比较，依次类推
    int temp=0;//
    printf("请输入三个数\n");
    printf("请输入第一个数：");
    scanf("%d",&a);
    printf("请输入第二个数：");
    scanf("%d",&b);
    printf("请输入第三个数：");
    scanf("%d",&c);
    if(a<b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    if(a<c)
    {
        temp=a;
        a=c;
        c=temp;
    }
    if(b<c)
    {
        temp=b;
        b=c;
        c=temp;
    }
    printf("%d\t%d\t%d\t",a,b,c);*/
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
    /*for (int j=0; j<c; j++)
    {
        for ( k=0; k<10; k++)
        {
            if (n-k*(cou)<(cou))
            {
                if (k==1)
                {
                    printf("壹");
                }
                else if (k==2)
                {
                    printf("贰");
                }
                else if (k==3)
                {
                    printf("叁");
                }
                *else if(k==4)
                {
                    printf("肆");
                }
                else if(k==5)
                {
                    printf("伍");
                }
                else if(k==6)
                {
                    printf("陆");
                }
                else if(k==7)
                {
                    printf("柒");
                }
                else if(k==8)
                {
                    printf("捌");
                }
                else
                {
                    printf("玖");
                }
                break;
                
            }
        }
        
       n=n-k*(cou);
        (cou)/=10;
        if ((cou/10)>n-k*(cou))
         {
         printf("零");
         break;
         }*/
    //2。模拟产生五行，每行5列，每列里有5个字符（A-Z，a-b).65-90...97-122...91...96
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
    
    
    
    for (int i=0; i<5; i++) {
        
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
    }
    
    
    return 0;
}
