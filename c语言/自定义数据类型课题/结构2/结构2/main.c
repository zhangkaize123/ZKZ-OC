//
//  main.c
//  结构2
//
//  Created by 张凯泽 on 14-12-26.
//  Copyright (c) 2014年 wyzc. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct tagDate
{
    int year;
    int month;
    int day;
}Date;
struct Time
{
    int hour;
    int minute;
    int second;
};
 typedef struct tagTeacher
{
    char sex[4];
    char name[13];
    Date *birthday;
}Teacher;
int main(int argc, const char * argv[])
{
    printf("请输入老师个数:");
    size_t aaaa = 4;
    printf("aaaa = %lu\n",sizeof(aaaa));
    int n;
    scanf("%d",&n);
    Teacher *teachers=malloc(sizeof(Teacher)*n);
            //Date*birthday=malloc(sizeof(Date)*n);
    for (int i=0; i<n; i++)
    {
        (teachers+i)->birthday=malloc(sizeof(Date));
    }
    
   /*// Date*birthday=malloc(sizeof(Date)*3);
    //struct tagTeacher teachers[5];
    //int n1[5];
    //printf("%ld\n",sizeof(n1));
    //printf("%ld\n",sizeof(n1[0]));
    
    //printf("%ld\n",sizeof( teachers) );//总的长度
    
    //printf("%ld\n",sizeof(teachers[0]));//一个的长度*/
    for (int i=0; i<n; i++)
    {
        printf("请输入第%d名老师的姓名:",i+1);
        
        
        //scanf("%s",(teachers+i)->name);
        scanf("%s",(*(teachers+i)).name);
        //scanf("%s",teachers[i].name);
        printf("请输入第%d名老师的性别（1-男，2-女）:",i+1);
        //scanf("%s",teachers[i].sex);
        scanf("%s",(teachers+i)->sex);
        if (strcmp(teachers[i].sex, "1")==0)
        {
            strcpy(teachers[i].sex, "男");
        }
        else
        {
                strcpy(teachers[i].sex, "女");
        }
        printf("请输入第%d名老师出生的年:",i+1);
        //scanf("%d",&(((teachers+i)->birthday).year));
        scanf("%d",&(teachers+i)->birthday->year);//这个为什么不对
        //scanf("%d",&teachers[i].birthday.year);
        printf("请输入第%d名老师出生的月:",i+1);
        //scanf("%d",&teachers[i].birthday.month);
        scanf("%d",&(((teachers+i)->birthday)->month));
        printf("请输入第%d名老师出生的日:",i+1);
        //scanf("%d",&teachers[i].birthday.day);
        scanf("%d",&(((teachers+i)->birthday)->day));
    }
    printf("姓名\t性别\t年\t月\t日\n");
    for (int i=0; i<n; i++)
    {
        //scanf("%s",(teachers+i).name);
        //printf("%s\t",teachers[i].name);
        printf("%s\t",(*(teachers+i)).name);
        
        if (strcmp(teachers[i].sex, "1")==0)
        {
            printf("男\t");
        }
        else
        {
            printf("女\t");

        }
        
        //printf("%d\t",teachers[i].birthday.year);
        //printf("%d\t",(*(teachers+i)).birthday.year);
        printf("%d",(((teachers+i)->birthday)->year));
       // printf("%d\t",teachers[i].birthday.month);
        printf("%d",(((teachers+i)->birthday)->month));
        //printf("%d\n",teachers[i].birthday.day);
        printf("%d",(((teachers+i)->birthday)->day));
    }
    for (int i=0; i<n; i++)
    {
        free((teachers+i)->birthday);
    }
    
    free(teachers);
   
    
    
    


    //字符串相连  strcat
    char ch1[80];
    strcpy(ch1, "");
    printf("str=%s\t",ch1);
    strcpy(ch1, "123");
    printf("str=%s\t",ch1);
    strcat(ch1, "456");
    printf("str=%s\t",ch1);
    //字符串上各字符的比较   strcmp
    printf("\n%d\n",strcmp("123", "456"));
    printf("\n%d\n",strcmp("123", "123"));
    printf("\n%d\n",strcmp("123", "056"));
    return 0;
}
