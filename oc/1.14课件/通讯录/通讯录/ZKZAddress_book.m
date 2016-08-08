//
//  ZKZAddress_book.m
//  通讯录
//
//  Created by 张凯泽 on 15-1-14.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//
/*
 printf("1.增加一个联系人\n");
 printf("2.删除一个联系人\n");
 printf("3.修改一个联系人\n");
 printf("4.查找一个联系人\n");
 printf("5.显示所有联系人\n");
 printf("6.退出\n");
 printf("请输入1-6之间的数字:");
 */
#import "ZKZAddress_book.h"

@implementation ZKZAddress_book
@synthesize menu,tel_persons;
- (instancetype)init
{
    self = [super init];
    if (self)
    {
        menu=[[NSArray alloc]initWithObjects:@"1.增加一个联系人",
              @"2.删除一个联系人",
              @"3.修改一个联系人",
              @"4.查找一个联系人",
              @"5.显示所有联系人",
              @"6.退出",
              @"请输入1-6之间的数字:", nil];
        self .tel_persons=[[ZKZTell_book alloc]init];
    }
    return self;
}
-(void)show
{
    while (1)
    {
        NSLog(@"---------------欢迎使用通讯录----------------");
        NSLog(@"%@",menu[0]);
        NSLog(@"%@",menu[1]);
        NSLog(@"%@",menu[2]);
        NSLog(@"%@",menu[3]);
        NSLog(@"%@",menu[4]);
        NSLog(@"%@",menu[5]);
        NSLog(@"%@",menu[6]);
        char number[2];
        number[1]='\0';
        scanf("%s",number);
        NSString *str1=[[NSString alloc]initWithUTF8String:number];
        if ([str1 isEqualToString:@"1"])
        {
            [self.tel_persons add_person];
        }
        else if ([str1 isEqualToString:@"2"])
        {
            [self.tel_persons delete_person];
        }
        else if ([str1 isEqualToString:@"3"])
        {
            [self.tel_persons repair_person];
        }
        else if ([str1 isEqualToString:@"4"])
        {
            [self.tel_persons find_person];
        }
        else if ([str1 isEqualToString:@"5"])
        {
            [self.tel_persons show_person];
        }
        else if ([str1 isEqualToString:@"6"])
        {
            break;
        }
        else
        {
            NSLog(@"非法输入");
        }
    }
}


@end

