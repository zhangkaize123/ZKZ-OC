//
//  ZKZAddressBook.m
//  通讯录老师做
//
//  Created by 张凯泽 on 15-1-16.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "ZKZAddressBook.h"
#import "ZKZPerson.h"
@implementation ZKZAddressBook
@synthesize persons;
- (instancetype)init
{
    self = [super init];
    if (self)
    {
        self.persons=[NSKeyedUnarchiver unarchiveObjectWithFile:@"zkz.plist"];
        if (self.persons==nil)
        {
            self.persons=[NSMutableArray arrayWithCapacity:100];
        }
    }
    return self;
}
-(void)add
{
    //获得要添加联系人的姓名和电话
    char name[40];
    char tel[12];
    printf("请输入联系人的姓名：");
    scanf("%s",name);
    name[39]=0;
    printf("请输入联系人的电话：");
    scanf("%s",tel);
    name[11]=0;
    NSString *s1=[[NSString alloc]initWithUTF8String:name];
    NSString *s2=[[NSString alloc]initWithUTF8String:tel];
    //NSCharacterSet *set=[NSCharacterSet whitespaceCharacterSet];
    s1=[s1 stringByTrimmingCharactersInSet:
                        [NSCharacterSet whitespaceCharacterSet]];
    s2=[s2 stringByTrimmingCharactersInSet:
                        [NSCharacterSet whitespaceCharacterSet]];
    if ([s1 isEqualToString:@""]||[s2 isEqualToString:@""])
    {
        printf("姓名或者电话都必须不能为空！\n");
        return;
    }
    ZKZPerson *p=[[ZKZPerson alloc]init];
    p.name=s1;
    p.phone=s2;
    [self.persons addObject:p];
    if([self write])
    {
        printf("恭喜啊，添加联系人成功！\n\n");
    }
    else
    {
        printf("悲剧了，添加联系人失败！\n\n");
    }
}
-(BOOL)write
{
    return [NSKeyedArchiver archiveRootObject:
            self.persons toFile:
            @"zkz.plist"];
}
-(void)delete
{
    char name[40];
    printf("请输入要删除联系人的姓名：");
    scanf("%s",name);
    name[39]=0;
    NSString *s1=[[NSString alloc]initWithUTF8String:name];
    s1=[s1 stringByTrimmingCharactersInSet:
                [NSCharacterSet whitespaceCharacterSet]];
    for (ZKZPerson *p in self.persons)
    {
        if ([s1 isEqualToString:p.name])
        {
            
            [self.persons removeObject:p];
        }
        else
        {
            printf("暂无此人");
        }
    }
    if([self write])
    {
        printf("恭喜啊，删除联系人成功！\n\n");
    }
    else
    {
        printf("悲剧了，删除联系人失败！\n\n");
    }
}
-(void)find;//查找
{
    char name[40];
    printf("请输入要查找联系人的姓名：");
    scanf("%s",name);
    name[39]=0;
    NSString *s1=[[NSString alloc]initWithUTF8String:name];
    s1=[s1 stringByTrimmingCharactersInSet:
        [NSCharacterSet whitespaceCharacterSet]];
    int count=0;
    int a=1;
    for (ZKZPerson *p in self.persons)
    {
        if ([s1 isEqualToString:p.name])
        {
            a=2;
            count++;
            printf("%d,%s       %s\n",count,[p.name UTF8String],
                   [p.phone UTF8String]);
        }
    }
    if (a==1)
    {
        printf("没有此人\n");
    }
}
-(void)updata
{
    
    
    
    
    
}
-(void)show
{
    printf("姓名        电话\n");
    for (ZKZPerson *p in self.persons)
    {
        printf("%s       %s\n",[p.name UTF8String],[p.phone UTF8String]);
    }
    
}

    
    
    
    
@end

