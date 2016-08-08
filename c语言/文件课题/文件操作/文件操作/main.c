//
//  main.c
//  文件操作
//
//  Created by 张凯泽 on 14-12-29.
//  Copyright (c) 2014年 wyzc. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

//1.打开文件。fopen
//2.对文件进行操作。
//3.关闭文件。fclose
// 文件的形式有两种：一种是文本文件。一种是二进制的文件。
//文件的操作方式有两种一种是顺序读写，一种是随机读写。
int main(int argc, const char * argv[])
{
   // printf("%d",arc4random()%100);
    FILE*fp=NULL;
    //写顺序的文件
    fp=fopen("abc.txt", "w");//打开当前路径下的abc.txt文件去写
    //fp=fp=fopen("abc.txt", "w");
    
    if (fp==NULL)
    {
        printf("打开文件失败");
        return 0;
    }
    //写字符
    //fputc('a', fp);
    //写字符串
    //fputs("1234", fp);
    //格式话的字符串
    //fprintf(fp, "%d\n",234);//注意格式化字符串后加'\n',防止写的时候有问题
    //
    for (int i=0; i<100; i++)
    {
        fprintf(fp, "%ld",random()%100);
    }
    
    
    fclose(fp);
    
    
    
    return 0;
}
