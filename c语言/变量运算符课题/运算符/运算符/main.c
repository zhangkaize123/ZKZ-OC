//
//  main.c
//  运算符
//
//  Created by zkz on 14-12-16.
//  Copyright (c) 2014年 wyzc. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //int a=0;
    //printf("a=%d\n",a);//0
    //a=a+1;//计数器
    /*printf("a=%d\n",a--);//0  //++  --  在使用的时候才会有区别；
    printf("a=%d\n",--a);//-2
    printf("a=%d\n",a);//-2
    printf("\n");
    printf("a=%d\n",a++);//-2
    printf("a=%d\n",++a);//0*/
    //条件运算
    //真  指的就是非零  零就是假的
    /*if(0)
    {
        printf("sfsdg");
    }
    else
    {
        printf("777    ");
    }*/
    //printf("%d\n",3>20);
    //位运算
    
    //printf("%d",3&4);
    
    
    
    //逻辑运算
    //printf("%d",!4);
    //赋值运算
    /*int a=2;
    printf("%d\n",a);//2
    a+=2;
    printf("%d\n",a);//4
    a-=2;
    printf("%d\n",a);//2
    a*=2;
    printf("%d\n",a);//4
    a/=2;
    printf("%d\n",a);//2
    a%=2;
    printf("%d\n",a);//0*/
    /*int a=1,b=2,c=3;
    a=a+2*b>4/c;//a=1
    printf("%d\n",a=a+2*b>4/c);
    printf("%d\n",(a=a+2*b>4/c,b=5));//从左往右赋值    逗号运算符最终结果是最右边的数自*/
    int a;
    a=((a=4*5,a*2),a+6);
    printf("%d\n",a);
   // printf("%d\n",a=((a=4*5,a*2),a+6));
    return 0;
}
