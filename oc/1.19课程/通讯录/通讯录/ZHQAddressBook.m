//
//  ZHQAddressBook.m
//  通讯录
//
//  Created by wyzc on 15-1-16.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "ZHQAddressBook.h"
#import "ZHQPerson.h"
@implementation ZHQAddressBook
- (instancetype)init
{
    self = [super init];
    if (self) {
        self.persons=[NSKeyedUnarchiver unarchiveObjectWithFile:@"persons.plist"];
        if(self.persons==nil)
        {
            self.persons=[[NSMutableArray alloc]initWithCapacity:100];
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
    //数据的有效性
    NSString * strName=[[NSString alloc]initWithUTF8String:name];
    NSString * strTel=[[NSString alloc]initWithUTF8String:tel];
    strName=[strName stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]];
    strTel=[strTel stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]];
    if([strName isEqualToString:@""] || [strTel isEqualToString:@""])
    {
        printf("姓名或者电话都必须不能为空！\n");
        return;
    }
    ZHQPerson * person=[[ZHQPerson alloc]init];
    person.name=strName;
    person.tel=strTel;
    [self.persons addObject:person];
    //同步到磁盘
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
    return [NSKeyedArchiver archiveRootObject:self.persons toFile:@"persons.plist"];
}
-(void)delete
{
    printf("请输入要删除的编号\n");
    int number;
    scanf("%d",&number);
    if (number<=self.persons.count&&number>=1)
    {
        [self.persons removeObjectAtIndex:number-1];
    }
    else
    {
        printf("无效编号\n");
    }
    //同步到磁盘
    if([self write])
    {
        printf("恭喜啊，删除联系人成功！\n\n");
    }
    else
    {
        printf("悲剧了，删除联系人失败！\n\n");
    }
}
-(void)update
{
    printf("请输入要修改的编号\n");
    int number;
    scanf("%d",&number);
    if (number<=self.persons.count&&number>=1)
    {
        char name[40];
        char tel[12];
        printf("请输入你要修改联系人的姓名：");
        scanf("%s",name);
        name[39]=0;
        printf("请输入你要修改联系人的电话：");
        scanf("%s",tel);
        name[11]=0;
        //数据的有效性
        NSString * strName=[[NSString alloc]initWithUTF8String:name];
        NSString * strTel=[[NSString alloc]initWithUTF8String:tel];
        strName=[strName stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]];
        strTel=[strTel stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]];
        if([strName isEqualToString:@""] || [strTel isEqualToString:@""])
        {
            printf("姓名或者电话都必须不能为空！\n");
            return;
        }
        ZHQPerson * person=[[ZHQPerson alloc]init];
        person.name=strName;
        person.tel=strTel;
        [self.persons replaceObjectAtIndex:number-1 withObject:person];
    }
    else
    {
        printf("无效修改\n");
    }
    //同步到磁盘
    if([self write])
    {
        printf("恭喜啊，替换联系人成功！\n\n");
    }
    else
    {
        printf("悲剧了，替换联系人失败！\n\n");
    }
    //NSLog(@"修改联系人!");
}
-(void)find
{
    char n[40];
    printf("请输入你要查询联系人的姓名：");
    scanf("%s",n);
    n[39]=0;
    //char n[40]="bbbb";
    int count=0;
    int a=1;
    //char ch[40];
    for (ZHQPerson *p1 in self.persons)
    {
          const char *ch=[p1.name UTF8String];
        //printf("%s\n",ch);
        if (strcmp(n, ch)==0)
        {
            count++;
            a=2;
            printf("%d\t%s\t\t\t\t\t%s\n",count,[p1.name UTF8String],[p1.tel UTF8String]);
        }
    }
    if (a==1)
    {
        printf("没有此人\n");
    }
}
-(void)show
{
    printf("编号\t姓名\t\t\t\t\t电话\n");
    int count=0;
    for(ZHQPerson * p in self.persons)
    {
        count++;
        printf("%d\t%s\t\t\t\t\t%s\n",count,[p.name UTF8String],[p.tel UTF8String]);
    }
    if (count==0)
    {
        printf("暂无联系人\n");
    }
}
@end
