//
//  main.c
//  条件判断3
//
//  Created by zkz on 14-12-16.
//  Copyright (c) 2014年 wyzc. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    printf("请输入年份，月份");
    int year;
    int month;
    scanf("%d",&year);
    scanf("%d",&month);
    switch (month) {
        case 1:
            printf("31天");
            break;
        case 2:
            if (year%4==0)
            {
                printf("29天");
            }
            else
            {
                printf("28天");
            }
            break;
        case 3:
            printf("31天");
            break;
        case 5:
            printf("31天");
            break;
        case 7:
            printf("31天");
            break;
        case 8:
            printf("31天");
            break;
        case 10:
            printf("31天");
            break;
        case 12:
            printf("31天");
            break;
        
        default:
            printf("30 天");
            break;
    }
    
    
    return 0;
}
