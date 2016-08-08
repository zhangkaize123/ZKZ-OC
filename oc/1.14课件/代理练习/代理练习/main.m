//
//  main.m
//  代理练习
//
//  Created by 张凯泽 on 15-1-14.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZKZUIApplication.h"
#import "ZKZUIDelegate.h"
int main(int argc, const char * argv[])
{
    @autoreleasepool
    {
        ZKZUIApplication *app=[[ZKZUIApplication alloc]init];
        ZKZUIDelegate *dele=[[ZKZUIDelegate alloc]init];
        dele.name=@"game1";
        app.name=@"game";
        app.delegate=dele;
        [app comeBefore];
        [app comeAfter];
        
        
    }
    return 0;
}
