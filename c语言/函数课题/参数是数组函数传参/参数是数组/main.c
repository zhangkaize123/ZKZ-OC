//
//  main.c
//  参数是数组
//
//  Created by 张凯泽 on 14-12-24.
//  Copyright (c) 2014年 wyzc. All rights reserved.
//

#include <stdio.h>
//void print(int shuzu[],int n);
void print1(int shuzu[][3],int row,int col);
void gfr(int * p,int a);
int main(int argc, const char * argv[])
{
    
    //int num[]={1,3,5,7,9,7};
    //print(num,sizeof(num)/sizeof(num[0]));//一维数组传参。
    int num1[][3]={1,3,5,7,9,11};//二位数组的函数传参。
    print1( num1,2,3);
    int n[5]={1,2,3,4,5};
    gfr(n, 5);
    
    
    return 0;
}
void gfr(int * p,int a)
{
    for (int i=0; i<a; i++)
    {
        printf("%d\t",*(p+i));
    }
}
void print1(int shuzu[][3],int row,int col)
{
    for (int i=0; i<row; i++)
    {
        for (int j=0; j<col; j++)
        {
            printf("%d\t",shuzu[i][j]);
        }
        printf("\n");
    }
    
}


/*void print(int shuzu[],int n)
{
    for (int i=0; i<n; i++)
    {
        printf("%d\n",shuzu[i]);
    }

}*/





