//
//  main.m
//  通讯录
//
//  Created by wyzc on 15-1-16.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZHQMenu.h"
int main(int argc, const char * argv[])
{
    @autoreleasepool
    {
        ZHQMenu * menu=[[ZHQMenu alloc]init];
        NSDictionary * item1=[[NSDictionary alloc]initWithObjectsAndKeys:@"add",@"增加联系人", nil];
        NSDictionary * item2=[[NSDictionary alloc]initWithObjectsAndKeys:@"delete",@"删除联系人", nil];
        NSDictionary * item3=[[NSDictionary alloc]initWithObjectsAndKeys:@"update",@"修改联系人", nil];
        NSDictionary * item4=[[NSDictionary alloc]initWithObjectsAndKeys:@"find",@"查找联系人", nil];
        NSDictionary * item5=[[NSDictionary alloc]initWithObjectsAndKeys:@"show",@"显示联系人", nil];
        menu.items=[[NSArray alloc]initWithObjects:item1,item2,item3,item4,item5, nil];
        printf("欢迎你使用我的高级通讯录!\n");
        while (1)
        {
            [menu show];
            if([menu input]==NO)
            {
                break;
            }
        }
    }
    return 0;
}
