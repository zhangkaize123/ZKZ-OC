//
//  main.c
//  数组1
//
//  Created by 张凯泽 on 14-12-22.
//  Copyright (c) 2014年 wyzc. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    //不管是一维还是二维数组都要先定义出数组的长度。。。。。。。。。。。。。。。。。。
    //字符串就是字符数组来保存的，它必须有一个结束字符“\0”
    
    
    /*char ch[5];//={'h','e','l','l','o'};
    ch[0]='h';
    ch[1]='e';
    ch[2]='l';
    ch[3]='l';
    ch[4]='0';
    for (int i=0; i<sizeof(ch)/sizeof(ch[0]); i++)
    {
        printf("%c",ch[i]);
    }*/
    /*char ch[]={'h','e','l','l','o','\0'};
    printf("%d",sizeof(ch)/sizeof(ch[0]));
    printf("%s",ch);
    char c[5];
     c[4]='\0';*/
    //输入一个字符串倒叙输出来
    /*char ch[20];
    ch[19]='\0';
    scanf("%s",ch);
    //老师做
    int n=0;
    while(ch[n])//while 括号里边放的都是逻辑真值（非零值）；
    {
        n++;
    }
    for (int i=n-1; i>=0; i--)
    {
        printf("%c",ch[i]);
    }
    printf("\ncount=%d\n",n);*/
    //自己做
    /*for (int i= (int)strlen(ch)-1; i>=0; i--)// 不要忘了倒入头文件 #include<string.h>
    {
        printf("%c",ch[i]);
    }*/
        
    return 0;
}
