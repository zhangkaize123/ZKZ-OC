//
//  main.c
//  12.24以前练习题做
//
//  Created by 张凯泽 on 14-12-24.
//  Copyright (c) 2014年 wyzc. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#define STUDENTS 60
#define ITEMS 10

void input(int*n,int*k,char name[][20],char subject[][10],int score[][ITEMS]);
void show(int n,int k,char name[][20],char subject[][10],int score[][ITEMS]);
void sort(int n,int k,char name[][20],int score[][ITEMS]);
void shuzu(int a[],int b);
void shuzu2(int n[][3],int h,int l);
void convert(int a);

int main(int argc, const char * argv[])
{
    //1.学生成绩管理系统.....//科目，名字，分数，总分
    //char name[STUDENTS][20];
    //char subject[ITEMS][10];
    //int score[STUDENTS][ITEMS];
    //int n,k;
   // input(&n,&k,name,subject,score);
    //show(n,k,name,subject,score);
    //sort(n,k,name,score);
    //show(n,k,name,subject,score);
    //2.任意输入一个数打印它对应的汉字
    /*printf("请输入一个整数:");
    char number[][4]={"零","壹","贰","叁","肆","伍","陆","柒","捌","玖"};
    char ch[80];
    scanf("%s",ch);
    for (int i=0; i<strlen(ch); i++)
    {
        // 方法一
        if ((int)(ch[i]-'0')==0)
        {
            printf("零");
        }
        else if ((int)(ch[i]-'0')==1)
        {
            printf("壹");
        }
        else if ((int)(ch[i]-'0')==2)
        {
            printf("贰");
        }
        else if ((int)(ch[i]-'0')==3)
        {
            printf("叁");
        }
        else if ((int)(ch[i]-'0')==4)
        {
            printf("肆");
        }
        else if ((int)(ch[i]-'0')==5)
        {
            printf("伍");
        }
        else if ((int)(ch[i]-'0')==6)
        {
            printf("陆");
        }
        else if ((int)(ch[i]-'0')==7)
        {
            printf("柒");
        }
        else if ((int)(ch[i]-'0')==8)
        {
            printf("捌");
        }
        else if ((int)(ch[i]-'0')==9)
        {
            printf("玖");
        }
        // 方法二
        char a[20];
        strcpy(a, number[ch[i]-'0']);//字符串之间的赋值需要用肆strcpy函数。
        
        printf("%s",a);
        
        
    }*/
    //方法二
    /*int n;
    scanf("%d",&n);
    int b=1;
    int c=0;
    while (n/b)
    {
        c++;
        b*=10;
    }
    printf("%d\n",c);
    for (int i=c; i>0; i--)
    {
        int h=1;
        for (int j=1; j<i; j++)
        {
            h*=10;//产生10的次幂
        }
        int t=n/h;
        convert(t);
        n=n-t*h;//n从高到低依次得到数
    }*/
    
    
    
    //3.一维数组和二维数组如何传参
    //一维数组
    //int n[]={1,3,5,7,9};
    //shuzu( n,sizeof(n)/sizeof(n[0]));//一维数组传参必须指定长度
    //二位数组
    //int n2[][3]={2,4,6,8,10,12};//定义二维数组值时必须指定列的长度也就是 数组中的数组的长度
    //shuzu2( n2,2,3);//二维数组传参必须指定行和列的长度,（）里边放的时变量名不加中括号，只有变量名。
    //4.斗地主 发牌器打乱顺序
    //方法一
    srandom((unsigned)time(NULL));
    /*int cards[54]={0};
    int c=0;
    for (int i=0; i<54; i++)
    {
        int n=random()%54;
        if (cards[n]==0)
        {
            cards[n]=n+1;
            printf("%.2d\t",cards[n]);
            if ((i+1)%17==0)
            {
                printf("\n");
            }
        }
        else
        {
            i--;
            c++;
        }
    }
    printf("...%d...",c);*/
    //方法二
    /*int cards[54];
    for (int i=0; i<54; i++)
    {
        cards[i]=i;
    }
    
    for (int j=0; j<10; j++)
    {
        int a=random()%54;
        int b=random()%54;
        int t=cards[a];
        cards[a]=cards[b];
        cards[b]=t;
        
    }
        char color[][10]={"♠️","♥️","♦️","♣️"};
    char number[][5]={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
    
    for (int i=0; i<54; i++)
    {
        if (cards[i]==52)
        {
            printf("大王\t");
        }
        else if (cards[i]==53)
        {
            printf("小王\t");
        }
        else
        {
            printf("%s%2s\t",color[cards[i]/13],number[cards[i]%13]);
        }
        if ((i+1)%17==0)
        {
            printf("\n");
        }
    }
*/
    
    
    
    
    
    
    
    
            return 0;
}




/*void convert(int a)
{
    if (a==0)
    {
        printf("零");
    }
    if (a==1)
    {
        printf("壹");
    }
    if (a==2)
    {
        printf("贰");
    }
    if (a==3)
    {
        printf("叁");
    }
    if (a==4)
    {
        printf("肆");
    }
    if (a==5)
    {
        printf("伍");
    }
    if (a==6)
    {
        printf("陆");
    }
    if (a==7)
    {
        printf("柒");
    }
    if (a==8)
    {
        printf("捌");
    }
    if (a==9)
    {
        printf("玖");
    }

    
}*/
/*void shuzu2(int n[][3],int h,int l)
{
    for (int i=0; i<h; i++)
    {
        for (int j=0; j<l; j++)
        {
            printf("%d\t",n[i][j]);
        }
        printf("\n");
    }
}
void shuzu(int a[],int b)
{
    for (int i=0; i<b; i++)
    {
        printf("%d\n",a[i]);
    }
}
*/
void input(int*n,int*k,char name[][20],char subject[][10],int score[][ITEMS])
{
    printf("请输入人数：");
    scanf("%d",n);
    printf("请输入科目数：");
    scanf("%d",k);
    for (int i=0; i<*n; i++)
    {
        printf("请输入第%d人的姓名",i+1);
        scanf("%s",name[i]);
    }
    for (int j=0; j<*k; j++)
    {
        printf("请输入第%d科的名称",j+1);
        scanf("%s",subject[j]);
    }
    for (int i=0; i<*n; i++)
    {
        score[i][*k]=0;
        for (int j=0; j<*k; j++)
        {
            printf("请输入%s同学第%s科的成绩",name[i],subject[j]);
            scanf("%d",&score[i][j]);
            score[i][*k]+=score[i][j];
        }
    }
    
}


void sort(int n,int k,char name[][20],int score[][ITEMS])
//总分进行从高到低排序
{
    for (int i=0; i<n-1; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (score[i][k]<score[j][k])
            {
                int t=score[i][k];
                score[i][k]=score[j][k];
                score[j][k]=t;
                for (int h=0; h<k; h++)
                {
                    int t=score[i][h];
                    score[i][h]=score[j][h];
                    score[j][h]=t;
                }
                char ch[20];
                // 通过字符
                /*ch[20]='\0';
                 for (int l=0; l<19; l++)
                 {
                 ch[20]=name[i][l];
                 name[i][l]=name[j][l];
                 name[j][l]=ch[20];
                 }*/
                //通过字符串
                strcpy(ch, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], ch);
            }
        }
    }

}
void show(int n,int k,char name[][20],char subject[][10],int score[][ITEMS])
 //显示
{
    printf("姓名\t");
    for (int j=0; j<k; j++)
    {
        printf("%s\t",subject[j]);
        
    }
    printf(" 总分\t");
    printf("\n");
    for (int i=0; i<n; i++)
    {
        printf("%s\t",name[i]);
        for (int j=0; j<k; j++)
        {
            
            printf("%d\t",score[i][j]);
            
        }
        printf("%d",score[i][k]);
        printf("\n");
    }

}


