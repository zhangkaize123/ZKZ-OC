//
//  main.c
//  条件判断2
//
//  Created by zkz on 14-12-16.
//  Copyright (c) 2014年 wyzc. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //任意输入数字显示相应的汉字
    int n;
    printf("请输入0-9之间的数字：");
    scanf("%d",&n);
    /*if (n==0)
    {
        printf("零\n");
    }
    else if (n==1)
    {
        printf("壹\n");
    }
    else if (n==2)
    {
        printf("贰\n");
    }
    else if (n==3)
    {
        printf("叁\n");
    }
    else if (n==4)
    {
        printf("肆\n");
    }
    else if (n==5)
    {
        printf("伍\n");
    }
    else if (n==6)
    {
        printf("陆\n");
    }
    else if (n==7)
    {
        printf("柒\n");
    }
    else if (n==8)
    {
        printf("捌\n");
    }
    else if (n==9)
    {
        printf("久\n");
    }
    else
    {
        printf("输入无效");
    }*/
    /*switch (返回整型值的表达式) {
        case <#constant#>:
            <#statements#>
            break;
            
        default:
            break;
    }*/
    
    switch (n)
    {
        case 0:
            printf("零\n");
            break;
        case 1:
            printf("yi\n");
            break;
        case 2:
            printf("er\n");
            break;
        case 3:
            printf("san\n");
            break;
        case 4:
            printf("si\n");
            break;
        case 5:
            printf("wu\n");
            break;
        case 6:
            printf("liu\n");
            break;
        case 7:
            printf("qi\n");
            break;
        case 8:
            printf("ba\n");
            break;
        case 9:
            printf("jiu\n");
            break;

        default:printf("wuxia\n");
            break;
    }
    return 0;
}
