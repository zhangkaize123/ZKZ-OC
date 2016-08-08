//
//  main.c
//  数组
//
//  Created by 张凯泽 on 14-12-22.
//  Copyright (c) 2014年 wyzc. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, const char * argv[])
{
    srandom((unsigned)time(NULL));
    //输入十个数从小到大排列......选择排序
   /* const int max=10;//或者定义宏＃difine MAX 10;
    int num[max];
    for (int i=0; i<max; i++)
    {
        scanf("%d",&num[i]);
    }
    
    
    for (int j=0; j<max-1; j++)
    {
        for (int k=j+1; k<max; k++)
        {
            if (num[j]>num[k])
            {
                int t=num[k];
                num[k]=num[j];
                num[j]=t;
            }
        }
    }
    
    
    for (int i=0; i<max; i++)
    {
        printf("%d\t",num[i]);
    }*/
    //输入十个数选择最大的数字
    /*int a;
    int max=0;
    for (int i=0; i<10; i++)
    {
        scanf("%d",&a);
        if (max<a)
        {
            max=a;
            
        }
    }
    printf("%d",max);*/
    
    // 5组21 选5
    /*int num[5];
    int i,j,k;
    for ( i=0; i<5; i++)
    {
        int c=0;
        for ( j=0; j<5; j++)
        {
             num[j]=random()%21+1;
            //printf("%d\t",a);
            for ( k=0; k<j; k++)
            {
                if (num[j]==num[k])
                {
                    break;
                }
            }
            if (k==j)
            {
                printf("%d\t",num[j]);
            }
            else
            {
                
                j--;
                c++;
            }
        }
        printf("%d\n",c);
    }*/
    //0x23;
    //10a.11b.12c.13d.14e.15f
    return 0;
}
