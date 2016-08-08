//
//  main.c
//  变量
//
//  Created by zkz on 14-12-15.
//  Copyright (c) 2014年 wyzc. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[]) {
    //变量   能够变化的量。
    //临时保存一个东西。
    //定义变量。
    //数据类型  变量名；
    
    //数据类型：
    //unsigned char (0  255)
    //char 字符型（－128  127）1 个字节
    //short短整型（－32768   32767）2个字节
    //int 整型  4个字节
    //long 长整型8个字节
    //float 单精度浮点型
    //long 双精度浮点型
    
    
    //变量名：
    //以字符（a-z或A-Z）或_开头。
    //后跟字符，数字或下划线。
    /*int year;
    year=12;// 赋值语句   参考左端
    printf("%d\n",year);
    year=23;
    printf("%d\n",year);
    printf("%d\n",year);
    printf(" 短整型的字节数%ld\n",sizeof(short));*/
    /*int a=1,b=2,c=3;
    printf("a=%d,b=%d,c=%d\n",a,b,c);
    a=a+1;
    a=a+2;
    b=a*a+b;
    c=a+b*c;
    printf("a=%d,b=%d,c=%d\n",a,b,c);*/
    int a=2;
    int b=3;
    int c=-5;
    
    printf("方程式：%d*x*x+(%d)*x+(%d)=0\n",a,b,c);
    printf("第一个根:%g\n",(-b+sqrt(b*b-4*a*c))/(2*a));
    printf("第一个根:%g\n",(-b-sqrt(b*b-4*a*c))/(2*a));
    //scanf("数据类型占位负"，&变量名)；
    //占位符 是把键盘上的字符串转换成相应的类型，再放到变量上去。
    /*float  a,b,c;
    printf("input a value\n");
    scanf("%f",&a);
    printf("input b value\n");
    scanf("%f",&b);
    printf("input c value\n");
    scanf("%f",&c);
    printf("%f*x*x+(%f)*x+(%f)*x=0\n",a,b,c);
    printf("第一个根:%g\n",(-b+sqrt(b*b-4*a*c))/(2*a));
    printf("第二个根:%g\n",(-b-sqrt(b*b-4*a*c))/(2*a));*/
    /*double a,b,c;
    printf("请输入二次项系数：");
    scanf("%lf",&a);
    printf("请输入一次项系数：");
    scanf("%lf",&b);
    printf("请输入常数项系数：");
    scanf("%lf",&c);
    printf("你要求解的方程式是:%g*x*x+(%g)*x+(%g)=0\n",a,b,c);
    printf("这个方程的第一个解是:%g\n",(-b+sqrt(b*b-4*a*c))/(2*a));
    printf("这个方程的第二个解是:%g\n",(-b-sqrt(b*b-4*a*c))/(2*a));*/
    /*int a,b;
    printf("请输入一个整数:");
    scanf("%d",&a);
    printf("请再次输入一个整数:");
    scanf("%d",&b);
    printf("%d+%d的和是:%d\n",a,b,a+b);*/
    printf("                     **********\n");
    printf("                    **********\n");
    printf("                   **********\n");
    printf("                  **********\n");
    printf("                 **********\n");
    
    
    return 0;
}
