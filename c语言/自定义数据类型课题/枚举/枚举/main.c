//
//  main.c
//  枚举
//
//  Created by 张凯泽 on 14-12-26.
//  Copyright (c) 2014年 wyzc. All rights reserved.
//

#include <stdio.h>
enum Week{
    monday,
    tuesday,
    wednesday=4,
    thurdsday=9,
    friday,
    saturday,
    sunday
};

int main(int argc, const char * argv[])
{
    enum Week week=tuesday;
    //week=thurdsday;
    if (week==1)
    {
        printf("正确");
    }
    
    else
    {
        printf("不正确");
    }
    return 0;
}
