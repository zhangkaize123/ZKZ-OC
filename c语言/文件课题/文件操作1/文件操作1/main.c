//
//  main.c
//  文件操作1
//
//  Created by 张凯泽 on 14-12-29.
//  Copyright (c) 2014年 wyzc. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
/*void write_file()
{
    FILE*fp=NULL;
    fp=fopen("numbers.tet", "w");
    if (!fp)             //等于fp==NULL
    {
        printf("打开文件失败\n");
    }
    for (int i=0; i<100; i++)
    {
        fprintf(fp, "%d\n",arc4random()%100);
    }
    fclose(fp);
    

}*/
int main(int argc, const char * argv[]) {
    FILE*fp=NULL;
    fp=fopen("numbers.tet", "w");
    if (!fp)            //fp==NULL
    {
        printf("打开文件失败\n");
    }
    for (int i=0; i<100; i++)
    {
        fprintf(fp, "%d\n",arc4random()%100);
    }
    fclose(fp);
    
    return 0;
}
