//
//  main.c
//  循环5
//
//  Created by 张凯泽 on 14-12-17.
//  Copyright (c) 2014年 wyzc. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
   // for (<#initialization#>   初始化; <#condition#>条件   ; <#increment#>增值   ) {
      //  <#statements#>
    //}
    //三位数质数的个数。
    /*int count;
    int c=0;
    for (int i=100; i<=999; i++)
    {
        count=0;
        for (int j=1; j<=i; j++)
        {
            if (i%j==0)
            {
                count++;
            }
        }
        
        if (count==2)
        {
            c++;
           printf("%d\t",i);
            if (c%5==0)       //这个if语句必须放到if (count==2)里边，
                             //如果放到外边的话相当于..并列关系...，在if (count==2)
            {
                             //不执行时它也要去执行。。。。。。。。。。
                printf("\n");
            }

        }
        
    }*/
    //&&&&&&必需理解。。。。。。。
    int c=0;
    int j;//........注意理解为什么把int j定义在这里。。。。。
    for (int i=100; i<=999; i++)
    {
        
        for (j=2; j<i; j++)      //
        {
            
            if (i%j==0)
            {
                
                break;
            }
            
        }
        if (j==i)//  因为j++原因在跳出循环后j正好等于i，所以可以这样使用。
        {
            c++;
            printf("%d ",i);
            if (c%5==0)
            {
                printf("\n");
            }
        }
    }
    
    
    

    return 0;
}
