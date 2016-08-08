//
//  main.c
//  字符串
//
//  Created by 张凯泽 on 14-12-23.
//  Copyright (c) 2014年 wyzc. All rights reserved.
//

#include <stdio.h>
#include <string.h>
typedef union {
    short s;
    char c;
} sc;
int main(int argc, const char * argv[]) {
    //sc u;
    //u.s = 0x602;
    //printf("%d\n",u.c);
    int aaa = 3;
   
    
    //char str[8]="00000";//7个数字     \0
    char str[1024]={0};
    
    /*char str[6]; 不能这么用因为是str 是地址
    str="323";*/
    //可以使用处理字符串的函数
    strcpy(str,"sfsf");
    //char str[80]="我";
    //printf("str.length=%ld",strlen(str));//一个汉字占3个字符。
    //printf("\n");
    //printf("%ld",sizeof(str));
    int a=12;
    char a1='2';
    printf("a=%ld",sizeof(a));// sizeof 是计算变量占用的字节数  strlen是计算字符串的长度
    //1.统计字符串中有多少数字和多少字母
    char * cc = "abcdef";
    printf("_____%ld\n",sizeof(cc));//8
    char ccc[100];
    printf("_____%ld\n",sizeof(ccc));//
    int x = 0;
    const float epsinon = 0.00001;
    if ((x >= - epsinon) && (x <= epsinon))
        {
            printf("))))))))))");
        }
    //自己做
    /*char ch[50];
     ch[49]='\0';
     scanf("%s",ch);
     int n=0;
     while (ch[n])
     {
     n++;
     }
     printf("字符总数%d\n",n);
     int a=0;
     for (int i=0; i<n; i++)    //48-57
     {
     if (ch[i]<58&&ch[i]>47)
     {
     a++;
     }
     }
     printf("数字个数%d\n",a);
     printf("字母的个数%d\n",n-a);
     printf("%d",'0');*/
    //老师做
    //注意字符串不仅仅是字母 还有数字
   // char str[80];
    //str[79]='\0';//字符串注意要最后以为加‘\0'
    //scanf("%s",str);
    /*for (int i=0; i<strlen(str); i++)
    {
        printf("%d",str[i]);
    }*/
    int n=0;
    int numbers=0;
    int chars=0;
    while (str[n])
    {
        if (str[n]>='0'&&str[n]<='9')//不需要转换成整数。注意自己的做法。
        {
            numbers++;
        }
        else if ((str[n]>='A'&&str[n]<'Z')||(str[n]>='a'&&str[n]<'z'))
        {
            chars++;
        }
        n++;
    }
    //printf("numbers=%d,chars=%d",numbers,chars);
    
    
    return 0;
}
