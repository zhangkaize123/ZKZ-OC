//
//  main.c
//  自定义数据类型
//
//  Created by 张凯泽 on 14-12-26.
//  Copyright (c) 2014年 wyzc. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
 struct  名称
{

};
 */
struct Student//自定义数据类型
{
    char name[40];
    char * value;
    char sex[4];
    int age;
    struct Student * next;
};
void f(struct Student zs);
int main(int argc, const char * argv[])
{
    int a2 = 12;
    int * b2 = &a2;
    printf("----------%lu--------%lu\n",sizeof(int),sizeof(*b2));
    struct Student * sss = malloc(sizeof(struct Student));
    sss ->age = 45;
    sss ->next = NULL;
    printf("-------------%p\n",sss);
    struct Student * ss = malloc(sizeof(struct Student));
    ss ->age = 34;
    ss ->next = sss;
    printf("----------------%p\n",ss ->next);
    
    
    
    
    
    
    
    
    //结构 struct
    struct Student zs;//huozhe ={ "zhangsan","nan",22};
    strcpy(zs.name, "zhangsan");
    strcpy(zs.sex, "nan");
    zs.age=22;
    //printf("name=%s,sex=%s,age=%d\n",zs.name,zs.sex,zs.age);
    //scanf("%d",&(zs.age));
    
    //2.使用指针指向一个地址时，使用箭头    或者＊符号访问成员变量。
    struct Student *ls=&zs;//
    strcpy((*ls).name, "wowoww");
    ls ->value = "ios";
    strcpy((*ls).sex, "女");
    
    ls -> age = 56;
    printf("name=%s,sex=%s,age=%d\n",(*ls).name,(*ls).sex,(*ls).age);
    printf("value = %s\n",(*ls).value);
    printf("name = %s\n",ls -> name);
    printf("%s\n",zs.name);
    printf("_________\n");
    

    //printf("_____________name=%s,sex=%s,age=%d",ls->name,ls->sex,ls->age);
    
    
    //3.使用动态内存申请的方法。
    struct Student*lsi =malloc(sizeof(struct Student));
    
    strcpy((*lsi).name, "lisi");
    //printf("%...ld...",strlen(lsi->name));
    //printf("%c\n",*((lsi->name)+1));
    strcpy(lsi->sex, "nv");
    lsi->age=20;
    printf("%p\n",lsi);
    struct Student*b=lsi;//b的指针指向lsi
    strcpy(b->name, "lllllll");
    strcpy(lsi->name, "lisi");
    //printf("%s\n",b->name);
        //scanf("%d",&lsi->age);
    //指针访问的指针里边的成员变量，是访问的  变量名  不是地址
    //char*name[]={"zhangkaize"};
    
    //printf("name=%s,sex=%s,age=%d\n",lsi->name,lsi->sex,lsi->age);
     free(lsi);
        //f( zs);

    return 0;
}
void f(struct Student zs)
{
    zs.age=21;
   // printf("wowo..%d",zs.age);
}