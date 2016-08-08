//
//  main.c
//  学生成绩
//
//  Created by 张凯泽 on 14-12-29.
//  Copyright (c) 2014年 wyzc. All rights reserved.
//

#include <stdio.h>


void write_();
void read_();
int main(int argc, const char * argv[])
{
    
    
    //write_();
    //read_();
    FILE*fp=NULL;
    char str[40];
    int n,k;
    char itemname[10][40];
    char name[100][40];
    float score[100][10];
    printf("请输入班级的名称:");
    scanf("%s",str);
    fp=fopen(str, "r");
    if (fp==NULL)
    {
        printf("打开文件失败！");
    }
    fscanf(fp,"%d", &n);
    fscanf(fp,"%d", &k);
    for (int  i=0; i<k; i++)
    {
        fscanf(fp,"%s", itemname[i]);
    }
    for (int  i=0; i<n; i++)
    {
        fscanf(fp,"%s", name[i]);
        score[i][k]=0.0;
        for (int j=0; j<k; j++)
        {
            fscanf(fp,"%g", &score[i][j]);
            score[i][k]+=score[i][j];
        }
                    
    }
    
    fclose(fp);
    printf("姓名\t");
    for (int  i=0; i<k; i++)
    {
        printf("%s\t", itemname[i]);
    }
    printf("总分\n");
    for (int  i=0; i<n; i++)
    {
        printf("%s\t", name[i]);
        
        for (int j=0; j<k; j++)
        {
            printf("%g\t", score[i][j]);
            
        }
            printf("%g\t", score[i][k]);
        printf("\n");
    }

    
    /*FILE*fp=NULL;
    fp=fopen("ios.txt", "r");
    if (fp==NULL)
    {
        printf("youwenti");
    }
    fscanf(fp,"%d",&n);
    //printf("%d\n",n);
    fscanf(fp,"%d",&k);
    //printf("%d\n",k);
     fscanf(fp,"%s",str);
     printf( "%s\t",str);
    for (i=0; i<k; i++)
    {
        
        fscanf(fp,"%s",str);
        printf( "%s\t",str);
    }
    printf("\n");
    float score;
    for (i=0; i<n; i++)
    {
        
        fscanf(fp,"%s",str);
        printf("%s\t",str);
        for (j=0; j<k; j++)
        {
            
            fscanf(fp,"%g",&score);
            printf("%g\t",score);
        }
        printf("\n");
    }

    fclose(fp);*/
    
    
    return 0;
}
void write_()
{
    FILE*fp=NULL;
    char str[40];
    int n,k;
    int i,j;
    printf("请输入班级名称：");
    scanf("%s",str);
    fp=fopen(str, "w");
    printf("请输入班级总人数：");
    scanf("%d",&n);
    fprintf(fp, "%d\n",n);
    printf("请输入班级总科目数：");
    scanf("%d",&k);
    fprintf(fp, "%d\n",k);       //注意要加'\n'
    //char ch[40]="姓名";
    //fprintf(fp, "%s\n",ch);
    for (i=0; i<k; i++)
    {
        printf("请输入第%d科名称:",i+1);
        scanf("%s",str);
        fprintf(fp, "%s\n",str);
    }
    float score;
    for (i=0; i<n; i++)
    {
        printf("请输入第%d名同学姓名" ,i+1 );
        scanf("%s",str);
        fprintf(fp, "%s\n",str);
        for (j=0; j<k; j++)
        {
            printf("请输入%s同学第%d科成绩",str,j+1);
            scanf("%f",&score);
            fprintf(fp, "%f\n",score);
        }
    }
    fclose(fp);

}
void read_()
{
    
}
