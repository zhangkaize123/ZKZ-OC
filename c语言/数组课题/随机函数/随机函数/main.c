//
//  main.c
//  随机函数
//
//  Created by 张凯泽 on 14-12-19.
//  Copyright (c) 2014年 wyzc. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, const char * argv[]) {
    srandom((unsigned) time(0));
    for (int j=0; j<5; j++)
    {
        for (int i=0; i<5; i++)
        {
            
            printf("%ld\t",random()%20+1);
        }
        printf("\n");

    }
    
    
    
    
    return 0;
}
