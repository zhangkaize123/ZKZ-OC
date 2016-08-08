//
//  main.c
//  函数的使用之调用函数文件
//
//  Created by 张凯泽 on 14-12-19.
//  Copyright (c) 2014年 wyzc. All rights reserved.
//

#include <stdio.h>
#include "isPrimer.h"
int main(int argc, const char * argv[]) {
    int i;
    for (i=1; i<50; i++)
    {
        if (isPrimer(i))
        {
            printf("%d\t",i);
        }
    }
    
    
    
    return 0;
}
