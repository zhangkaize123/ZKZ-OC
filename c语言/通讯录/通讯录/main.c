//
//  main.c
//  通讯录
//
//  Created by 张凯泽 on 14-12-26.
//  Copyright (c) 2014年 wyzc. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct tagPerson
{
    char name[13];//姓名
    char phone[12];//电话
}Person;
#define MAX 100//定义最大个数
Person persons[MAX];//定义数组的长度
void menu();//菜单
void add_person();//添加联系人
void del_person();//删除联系人
void repair_person();//修改联系人
void find_person();//查找联系人
void show_person();//显示联系人
void write_();//写文件
void read_();//读文件
int c=0;//人的个数
int main(int argc, const char * argv[])
{
    read_();//读文件
    menu();//菜单
    
    
    return 0;
}
void menu()
{
    char ch[2];
    
    while (1)
    {
        printf("1.增加一个联系人\n");
        printf("2.删除一个联系人\n");
        printf("3.修改一个联系人\n");
        printf("4.查找一个联系人\n");
        printf("5.显示所有联系人\n");
        printf("6.退出\n");
        printf("请输入1-6之间的数字:");
        scanf("%s",ch);
        ch[1]='\0';
        if (strcmp(ch, "1")==0)
        {
            add_person();
        }
        else if (strcmp(ch, "2")==0)
        {
            del_person();
        }
        else if (strcmp(ch, "3")==0)
        {
            repair_person();
        }
        else if (strcmp(ch, "4")==0)
        {
            find_person();
        }
        else if (strcmp(ch, "5")==0)
        {
            show_person();
        }
        else if (strcmp(ch, "6")==0)
        {
            break;
        }
        else
        {
            printf("非法输入\n");
        }
    }
}
void add_person()
{
    printf("请输入第%d姓名：",c+1);
    scanf("%s",(persons+c)->name);
    printf("请输入第%d电话：",c+1);
    scanf("%s",(persons+c)->phone);
    c++;
    write_();
    printf("添加联系人成功！\n");
}
void del_person()
{
    printf("请输入要删除联系人的编号:");
    int n;
    scanf("%d",&n);
    if (n==1)
    {
        for (int i=0; i<=c; i++)
        {
            strcpy((persons+i)->name, (persons+(i+1))->name);
            strcpy((persons+i)->phone, (persons+(i+1))->phone);
        }
        c--;
    }
    else if (n==c)
    {
        c--;
    }
    else
    {
        for (int i=n; i<=c; i++)
        {
            strcpy((persons+(n-1))->name, (persons+n)->name);
            strcpy((persons+(n-1))->phone, (persons+n)->phone);
        }
        c--;
    }
    write_();
    printf("删除联系人成功！\n");
}
void repair_person()
{
    printf("请输入要修改联系人的编号:");
    int n;
    scanf("%d",&n);
    printf("请输入要修改联系人的姓名:");
    char ch[13];
    scanf("%s",ch);
    strcpy((persons+(n-1))->name,ch);
    printf("请输入要修改联系人的电话:");
    scanf("%s",ch);
    strcpy((persons+(n-1))->phone,ch);
    write_();
    printf("修改联系人成功！\n");
}
void find_person()
{
    printf("请输入要查找联系人的姓名:");
    char ch[13];
    scanf("%s",ch);
    int a=0;
    for (int i=0; i<c; i++)
    {
        if (strcmp((persons+i)->name, ch)==0)
        {
            printf("%s\t",(persons+i)->name);
            printf("%s\n",(persons+i)->phone);
            a=1;
        }
    
    }
    if(a==0)
    {
        printf("没有此人！");
    }
    write_();
    printf("查找联系人成功！\n");
}
void show_person()
{
    if (c==0)
    {
        printf("没有联系人\n");
    }
    else
    {
        read_();
        printf("姓名\t电话\n");
        for (int i=0; i<c; i++)
        {
            printf("%d.%s\t",i+1,(persons+i)->name);
            printf("%s\n",(persons+i)->phone);
        }
    }
}
void write_()
{
    FILE*fp=NULL;
    fp=fopen("items.data", "wb");
    fwrite(persons, sizeof(persons), 1, fp);
    fwrite(&c, sizeof(int), 1, fp);
    fclose(fp);
}
void read_()
{
    FILE*fp=NULL;
    fp=fopen("items.data", "rb");
    if (fp==NULL)
    {
        printf("文件为空");
        
        /*
          注意：在程序运行开始，如果没有文件夹需要创建一个。
         */
       fp =fopen("telbook.data","wb");
       fwrite(&c, sizeof(c), 1, fp);
        fclose(fp);
        return;
    }

    fread(persons, sizeof(persons), 1, fp);
    fread(&c, sizeof(int), 1, fp);
    fclose(fp);
}










