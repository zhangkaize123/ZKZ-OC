//
//  main.c
//  c primer pull 4章
//
//  Created by zkz on 14-12-15.
//  Copyright (c) 2014年 wyzc. All rights reserved.
//

#include <stdio.h>
#include "string.h"
int main(int argc, const char * argv[]) {
    char name[40]="zhang kai ze";
    printf("%ld\n", strlen(name));
    printf("%zd\n", sizeof(name));
    printf("%02d\n",5);
    
    return 0;
}
