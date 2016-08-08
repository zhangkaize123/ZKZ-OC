//
//  main.c
//  练习题1
//
//  Created by 张凯泽 on 15-1-4.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, const char * argv[])
{
    
    
    /*
     
     for(;;)//也是死循环
     */
   /* srandom((unsigned)time(NULL));
    int random1=random()%101;
    printf("%d\n",random1);
    int number;
    printf("请在键盘上输入一个100以内的数：");
    scanf("%d",&number);
        int c=0;
        while (1)
        {
            c++;
            if (number>random1)
            {
                printf("输入的数大\n");
            }
            else if (number<random1)
            {
                printf("随机产生的数大\n");
            }
            else if (number==random1)
            {
                printf("产生的随机数是：random1=%d\n",random1);
                break;
            }
            printf("请在键盘上输入一个100以内的数：");
            scanf("%d",&number);
        }
        printf("个数：c=%d\n",c);
    */
    
    int a=10;
    int *p=&a;
    //printf("%d",*p);
    int **pp=&p;
     printf("%d",**pp);
    
    
    return 0;
}
