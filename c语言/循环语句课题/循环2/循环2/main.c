//
//  main.c
//  循环2
//
//  Created by 张凯泽 on 14-12-17.
//  Copyright (c) 2014年 wyzc. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    /*int sum=0;
    for (int i=100; i<=999; i++)
    {
        sum+=i;
        
    }
    printf("%d\n",sum);
    */
    //
    for (int i=100; i<=999; i++)
    {
        int a=i/100;//求百位
        int b=i/10%10;//求十位
        int c=i%10;//求个位
        if (a*a*a+b*b*b+c*c*c==i)
        {
            printf("%d\n",i);
        }
    }
    printf("\n");
    for (int i=1; i<=9; i++)//注意百位不能是0，所以 i从1开始
    {
        for (int j=0; j<=9; j++)
        {
            for (int k=0; k<=9; k++)
            {
                if (i*i*i+j*j*j+k*k*k==i*100+j*10+k)
                {
                    printf("%d\n",i*100+j*10+k);
                }
            }
        }
    }
    return 0;
}
