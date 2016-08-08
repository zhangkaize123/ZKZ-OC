//
//  main.c
//  三个数的和
//
//  Created by 张凯泽 on 15-1-4.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#include <stdio.h>

#include "sum.h"
int main(int argc, const char * argv[])
{
    float a,b,c;
    printf("请输入第一个数:");
    scanf("%f",&a);
    printf("请输入第二个数:");
    scanf("%f",&b);
    printf("请输入第三个数:");
    scanf("%f",&c);
    printf("三个数之和是:%g\n",sum(&a,&b,&c));
    
    return 0;
}
