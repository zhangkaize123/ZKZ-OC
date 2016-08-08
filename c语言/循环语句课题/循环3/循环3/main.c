//
//  main.c
//  循环3
//
//  Created by 张凯泽 on 14-12-17.
//  Copyright (c) 2014年 wyzc. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //寻找约数。
    /*int a;
    printf("请输入整数\n");
    scanf("%d",&a);
    for (int i=1; i<=a; i++)
    {
        if (a%i==0)
        {
            printf("%d\t",i);
        }
        
    }*/
    //如6=1+2+3，除本身约数外 其他约数的和
    int c;
    for (int i=1; i<=1000; i++)// 产生1000以内所有的数
    {
        c=0;//累加器

        for (int j=1; j<i; j++)//产生1到这个数的序列
        {
            if (i%j==0)//是约数
            {
                c+=j;//累加
            }
        }
        if (c==i)
        {
            printf("%d＝1",i);
            for (int j=2; j<i; j++)//产生1到这个数的序列
            {
                if (i%j==0)//是约数
                {
                    printf("+%d",j);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
