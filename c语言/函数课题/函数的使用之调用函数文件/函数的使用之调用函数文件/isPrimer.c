//
//  isPrimer.c
//  函数
//
//  Created by 张凯泽 on 14-12-19.
//  Copyright (c) 2014年 wyzc. All rights reserved.
//

#include "isPrimer.h"
char isPrimer(int n)
{
    /*int i;
     int count=0;
     for (i=1; i<=n; i++)
     {
     if (n%i==0)
     {
     count++;
     }
     }
     if (count==2)
     {
     return 1;
     }
     else
     {
     return 0;
     }*/
    int i;
    for (i=2; i<n; i++)
    {
        if (n%i==0)
        {
            return 0;//可以通return  来代替 break。
        }
    }
    return 1;
}
