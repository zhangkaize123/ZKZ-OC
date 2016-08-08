//
//  main.c
//  联合
//
//  Created by 张凯泽 on 14-12-26.
//  Copyright (c) 2014年 wyzc. All rights reserved.
//

#include <stdio.h>
#include <string.h>
struct Srudent
{
    char name[40];
    int age;
};
union Information//联合   联合使用内存  谁的空间大用谁的空间
{
    char name[20];
    int age;
    float dj;
};
union Unsame
{
    int score;
    int salary;
    float a;

};
struct Person
{
    char name[40];
    int age;
    union Unsame unsame;
};


int main(int argc, const char * argv[])
{
    
    struct Person zs;
    strcpy(zs.name, "zhangsan");
    zs.age=23;
    zs.unsame.score=104;
    
    struct Person z;
    strcpy(z.name, "zss");
    z.age=23;
    z.unsame.salary=87;
    printf("%d\n%d\n",z.unsame.salary,zs.unsame.score);
    //printf("%d\n",zs.unsame.score);
    
    
    
    
    
    
    
    
    
   // printf("结构的大小%ld\n",sizeof(struct Srudent));// 空间大小44
    //printf("联合的大小%ld\n",sizeof(union Information));//谁的空间大用谁的空间20
    /*union Information in;
    in.age=12;
    printf("age=%d,name=%s,dj=%f\n",in.age,in.name,in.dj);*/
    return 0;
}
