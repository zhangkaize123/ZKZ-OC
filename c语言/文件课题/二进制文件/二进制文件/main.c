//
//  main.c
//  二进制文件
//
//  Created by 张凯泽 on 14-12-30.
//  Copyright (c) 2014年 wyzc. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    /*char a[]="hello";
    FILE*fp=fopen("/Users/zkz/Desktop/data.data", "w");
    fwrite(a, sizeof(a), 1, fp);*/
    //char b[40];
    //FILE*fp=fopen("/Users/zkz/Desktop/data.data", "r");
    //fread(&b, sizeof(b[0]), 40, fp);
    /*
        或者fread(&b, sizeof(b), 1, fp);
     */
    //printf("%s",b);
    //fclose(fp);
    
    /*int c[]={1,2,3,4,5,};
    FILE*fp=fopen("/Users/zkz/Desktop/data.data", "w");
    fwrite(c, sizeof(c), 1, fp);
    fclose(fp);*/
    
    
    int d[5];
    FILE*fp=fopen("/Users/zkz/Desktop/data.data", "r");
    fread(d, sizeof(d), 1, fp);
    for (int i=0; i<5; i++)
    {
        printf("%d\t",d[i]);
    }
    
    
    
    
    return 0;
}
