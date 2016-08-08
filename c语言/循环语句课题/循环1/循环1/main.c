//
//  main.c
//  循环1
//
//  Created by 张凯泽 on 14-12-17.
//  Copyright (c) 2014年 wyzc. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    /*int count=0;
    for (int i=100; i<=999; i++)//产生所有的三位数。
    {
        if (i%8==0)// 能被8除尽
        {
            count++;//记录输出多少个数
            printf("%d\t",i);
            if (count%8==0)//够八个
            {
                
                printf("\n");// 换行
                
            }
        }
        
        
    }
    printf("\n");
    int c=0;
    for (int i=104; i<=999; i+=8)
    {
        c++;
        printf("%d\t",i);
        if (c%8==0)
        {
            printf("\n");
        }
    }*/
    //break    continue
    //break; 结束循环。只能在本次循环中起作用，如果放在if里边用它，也是结束第一层循环。
    //continue ;结束本次循环，开始下次循环
    /*for (int i=3; i<13; i+=6)
    {
        continue;//goto l
        printf("%d\t",i);
        
    //l:}
    }*/
    for (int j=0; j<10; j++)
    {
        for (int i=10; i>0; i--)
        {
            break;// 只能在本次循环起作用
        }
        printf("wo\n");
    }
    return 0;
}
