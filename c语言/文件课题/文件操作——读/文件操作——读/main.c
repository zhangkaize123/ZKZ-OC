//
//  main.c
//  文件操作——读
//
//  Created by 张凯泽 on 14-12-29.
//  Copyright (c) 2014年 wyzc. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
void write_(int*c);
void read_(int c);
int main(int argc, const char * argv[])
{
    //  写
   /* FILE*fp=NULL;
    fp=fopen("abc.txt", "w");
    fprintf(fp, "%c\n",'a');
    fprintf(fp, "%s\n","1234");
    fprintf(fp, "%d\n",123);
    fclose(fp);*/
    /*//写
    FILE*fp=NULL;
    fp=fopen("abc.txt", "r");
    char ch[40];
    fscanf(fp, "%s\n",ch);
    printf("%s\n",ch);
    fscanf(fp, "%s\n",ch);
    printf("%s\n",ch);
    fscanf(fp, "%s\n",ch);
    printf("%s\n",ch);
    fclose(fp);*/
    //随机一个数
    int c=0;
    write_(&c);
    printf("计数器%d...\n",c);
    read_( c);
    return 0;
}
  void write_(int*c)
{
     FILE*fp=NULL;
     fp=fopen("number.txt", "w");
     if (fp==NULL)
     {
     printf("打开文件失败");
         return ;
     }
    int n=arc4random()%100;
    fprintf(fp, "%d\n",n);
     for (int i=0; i<n; i++)
     {
     fprintf(fp, "%u\n",arc4random()%100);
     *c=(*c)+1;
     }
     //printf("%d\n",c);
     fclose(fp);
}
void read_(int c)
{
    FILE*fp=NULL;
    fp=fopen("number.txt", "r");
    if (fp==NULL)
    {
        printf("打开文件失败");
        return ;
    }
    /*char ch[40];
    for (int i=0; i<c; i++)
    {
        fscanf(fp,"%s",ch);
        printf("%s\n",ch);
    }*/
    //int n;
    /*while ((feof(fp))==0)//判断读文件时  是否结束feof函数
    {                      //它总是多读最后一位数。
        fscanf(fp, "%d",&n);
        printf("%d\n",n);
    }*/
    
    int n;
    int nn;
    fscanf(fp, "%d\n",&n);
    for (int i=0; i<n; i++)
    {
        fscanf(fp, "%d",&nn);
        printf("%d\n",nn);
    }
    
    fclose(fp);
}