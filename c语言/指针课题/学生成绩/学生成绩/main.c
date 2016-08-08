//
//  main.c
//  学生成绩
//
//  Created by 张凯泽 on 14-12-23.
//  Copyright (c) 2014年 wyzc. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define STUDENTS 100
#define ITEMS 100


void input(int *n,int*k,char name[][20],char item[][20],int score[STUDENTS][ITEMS]);
void show(int k,int n,char item[][20],char name[][20],int score[][ITEMS]);
void sort(int n,int k,int score[][ITEMS],char name[][20]);
int main(int argc, const char * argv[])
{
    char name[STUDENTS][20];// 学生姓名
    
    char item[ITEMS][20];//科目的名称
    
    int score[STUDENTS][ITEMS];//学生的各科成绩
    int n;//学生的总人数
    int k;//科目的总数
    input(&n,&k,name,item,score);// 输入
    show(k,n,item,name,score);//显示
    sort( n,k,score,name);//排序
    show(k,n,item,name,score);
    /*for (int h=0; h<n-1; h++)
    {
        for (int l=h+1; l<n; l++)
        {
            if (score[h][k]<score[l][k])
            {
                int t=score[h][k];
                score[h][k]=score[l][k];
                score[l][k]=t;
                for (i=0; i<k; i++)
                {
                    int g=score[h][i];
                    score[h][i]=score[l][i];
                    score[l][i]=g;
                }
                char ch[20];
                strcpy(ch, name[h]);
                strcpy(name[h], name[l]);
                strcpy(name[l], ch);
            }
        }
    }*/
    /*printf("姓名\t");
    
    for (int i=0; i<k; i++)//显示每课名称
    {
        printf("%s\t",item[i]);
        
    }
    printf("总分\t");
    printf("\n");// 换行
    for (i=0; i<n; i++)//显示学生信息
    {
        printf("%s\t",name[i]);// 显示姓名
        for (j=0; j<=k; j++)
        {
            printf("%d\t",score[i][j]);//显示成绩
            
            
        }
        printf("\n");
    }*/

    
    
    return 0;
}
void input(int *n,int*k,char name[][20],char item[][20],int score[][ITEMS])
{
    
        int i,j;
    //int score[n][k];
    //获得班级的总人数
    printf("请输入你班级的总人数");
    scanf("%d",n);
    //获得学科的总数
    printf("请输入你班级的学科总数");
    scanf("%d",k);
    
    
    for (i=0; i<*k; i++)//获得每课名称
    {
        printf("请输入第%d科名称",i+1);
        scanf("%s",item[i]);
    }
    // printf("\n");
    for (i=0; i<*n; i++)//获得学生信息
    {
        //获得学生的姓名
        printf("请输入第%d名同学姓名",i+1);
        scanf("%s",name[i]);
        //获得学生的各科成绩
        score[i][*k]=0;// 清零
        for (j=0; j<*k; j++)
        {
            printf("请输入%s同学第%s科成绩",name[i],item[j]);
            scanf("%d",&score[i][j]);
            score[i][*k]+=score[i][j];
            //printf("\n");
        }
    }

}
void show(int k,int n,char item[][20],char name[][20],int score[][ITEMS])
{
    int i,j;
    printf("姓名\t");
    for (int i=0; i<k; i++)//显示每课名称
    {
        printf("%s\t",*(item+i));
        
    }
    printf("总分\t");
    printf("\n");// 换行
    for (i=0; i<n; i++)//显示学生信息
    {
        printf("%s\t",name[i]);// 显示姓名
        for (j=0; j<=k; j++)
        {
            printf("%d\t",*((*(score+i))+j));//显示成绩
        }
        printf("\n");
    }

}
void sort(int n,int k,int score[][ITEMS],char name[][20])
{
    //排序
    for (int l=0; l<n-1; l++)
    {
        for (int h=l+1; h<n; h++)
        {
            if (score[l][k]<score[h][k])
            {
                //调换总分
                int t=score[l][k];
                score[l][k]=score[h][k];
                score[h][k]=t;
                //调换各科成绩
                for (int p=0; p<k; p++)
                {
                    t=score[l][p];
                    score[l][p]=score[h][p];
                    score[h][p]=t;
                }
                //调换姓名
                for (int p=0; p<20; p++)
                {
                    t=name[l][p];
                    name[l][p]=name[h][p];
                    name[h][p]=t;
                }
                
                //或者字符串
                /* char ch[20];
                 strcpy(ch, name[l]);
                 strcpy(name[l], name[h]);
                 strcpy(name[h], ch);*/
                
            }
        }
    }
    

}

