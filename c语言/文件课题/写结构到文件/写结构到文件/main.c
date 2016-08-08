//
//  main.c
//  写结构到文件
//
//  Created by 张凯泽 on 14-12-30.
//  Copyright (c) 2014年 wyzc. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
struct Students
{
    char name[13];
    char sex[5];
    int age;
};
int main(int argc, const char * argv[])
{
   /* struct Students students[]={{"张三","男",23},{"里斯","女",21}};
    FILE*fp=NULL;
    fp=fopen("/Users/zkz/Desktop/zkz.data", "w");
    fwrite(students, sizeof(students), 1, fp);
    fclose(fp);*/
    
    struct Students *s=malloc(sizeof(struct Students)*2);
    FILE*fp=NULL;
    fp=fopen("/Users/zkz/Desktop/zkz.data", "r");
    if (fp==NULL)
    {
        printf("有问题");
    }
    fread(s, sizeof(struct Students), 2, fp);
    for (int i=0; i<2; i++)
    {
        printf("%s\t%s\t%d\n",(s+i)->name,(s+i)->sex,(s+i)->age);
    }
    fclose(fp);
    
    
    
    
    return 0;
}
