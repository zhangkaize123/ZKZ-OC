//
//  main.c
//  斗地主发牌器
//
//  Created by 张凯泽 on 14-12-24.
//  Copyright (c) 2014年 wyzc. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//void mix1();
#define COUNT 30
#define CARDS 54;
void init(int cards[]);
void mix(int cards[]);
void show(int cards[]);
int main(int argc, const char * argv[])
{

    //斗地主发牌器
    int cards[54];
    /*int number [54];
    for (int i=0; i<54; i++)
    {
        number[i]=i;
    }
    
    
    for (int i=0; i<10; i++)
    {
        int a=random()%54;
        int b=random()%54;
        int t =number[a];
        number[a]=number[b];
        number[b]=t;
        
        
        
        
    }
    
    
    
    for (int i=0; i<54; i++)
    {
        
        
        
         if (number[i]/13==0)
        {
            printf("%.2d♠️\t",number[i]);
            
        }
         else if(number[i]/13==1)
        {
            printf("%.2d♥️\t",number[i]);
        }
        else if (number[i]/13==2)
        {
            printf("%.2d♦️\t",number[i]);
        }
        else if (number[i]/13==3)
        {
            printf("%.2d♣️\t",number[i]);
        }
        
        
        
        else if (number[i]==52)
        {
            printf("大王\t");
        }
        else if (number[i]==53)
        {
            printf("小王\t");
        }
        if ((i+1)%13==0)
        {
            printf("\n");
        }
        
    }*/
    
    /*int cards[54];
    for (int i=0; i<54; i++)
    {
        cards[i]=i;
    }
    for (int i=0; i<COUNT; i++)
    {
        int a=random()%54;
        int b=random()%54;
        int t=cards[a];
        cards[a]=cards[b];
        cards[b]=t;
    }*/
    
     init(cards);
     mix(cards);
    show(cards);
    /*for (int i=0; i<54; i++)
    {
        if (cards[i]/13==0)
        {
            printf("%.2d♠️\t",cards[i]);
            
        }
        else if(cards[i]/13==1)
        {
            printf("%.2d♥️\t",cards[i]);
        }
        else if (cards[i]/13==2)
        {
            printf("%.2d♦️\t",cards[i]);
        }
        else if (cards[i]/13==3)
        {
            printf("%.2d♣️\t",cards[i]);
        }
        else if (cards[i]==52)
        {
            printf("大王\t");
        }
        else if (cards[i]==53)
        {
            printf("小王\t");
        }
        if ((i+1)%17==0)
        {
            printf("\n");
        }

        
    }*/
    
    return 0;
}
void init(int cards[])
{
    for (int i=0;i<54;i++)
    {
        cards[i]=i;
    }
    
}

void mix(int cards[])
{
    srandom((unsigned)time(NULL));

    for (int i=0; i<54; i++)
    {
        int a=random()%CARDS;
        int b=random()%CARDS;
        int t=*(cards+a);
        cards[a]=cards[b];
        cards[b]=t;
    }
}
void show(int cards[])//显示
{
    char *fllowers[]={"♠️","♥️","♦️","♣️"};
    char*numbers[]={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
    /*for (int i=0; i<54; i++)
    {
        if(cards[i]==52)
        {
            printf("小王 ");
        }
        else if(cards[i]==53)
        {
            printf("大王 ");
        }
        else
        {
            printf("%s%2s  ",fllowers[cards[i]/13],numbers[cards[i]%13]);
        }
        if((i+1)%17==0)
        {
            printf("\n");
        }
    }*/
    for (int i=0; i<54; i++)
    {
        if(*(cards+i)==52)
        {
            printf("小王 ");
        }
        else if(*(cards+i)==53)
        {
            printf("大王 ");
        }
        else
        {
        printf("%s%s\t",numbers[(*(cards+i))%13],fllowers[(*(cards+i))/13]);
        }
        if((i+1)%17==0)
        {
            printf("\n");
        }

    }
    
}

/*void mix1()
{
    int flag[54]={0};
    for (int i=0; i<54; i++)
    {
        int n=random()%54;
        if (flag[n]==0)
        {
            printf("%.2d\t",n);
            if ((i+1)%13==0)
            {
                printf("\n");
            }
            flag[n]=1;
            
        }
        else
        {
            i--;
        }
    }
    

}*/



