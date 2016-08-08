//
//  ZKZTell_book.m
//  通讯录
//
//  Created by 张凯泽 on 15-1-14.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "ZKZTell_book.h"

@implementation ZKZTell_book
@synthesize persons,person;
- (instancetype)init
{
    self = [super init];
    if (self)
    {
        //persons=[NSMutableArray arrayWithCapacity:100];
        person=[[ZKZPerson alloc]init];
    }
    return self;
}
-(void)add_person
{
    char name[13];
    char tel[13];
    NSLog(@"请输入姓名");
    scanf("%s",name);
    name[12]='\0';
    NSLog(@"请输入电话");
    scanf("%s",tel);
    tel[12]='\0';
    person.name=[[NSString alloc]initWithUTF8String:name];
    person.tel =[[NSString alloc]initWithUTF8String:tel];
    NSArray *array=[[NSArray alloc]initWithObjects:person.name,person.tel, nil];
    NSLog(@"array=%@",array);
    persons =[self read_person];
    [persons addObject:array];
    NSLog(@"persons=%@",persons);
    BOOL b1=[self write_person];
    if (b1)
    {
        NSLog(@"保存成功");
    }
    else
    {
      NSLog(@"保存失败");
    }
}
-(void)delete_person
{
    NSLog(@"请输入要删除的编号");
    int num;
    scanf("%d",&num);
    persons=[self read_person];
    if (num>persons.count)
    {
        NSLog(@"无效删除");
    }
    else
    {
        
        [persons removeObjectAtIndex:num-1];
        BOOL b1=[self write_person];
        if (b1)
        {
            NSLog(@"保存成功");
            
        }
        else
        {
            NSLog(@"保存失败");
        }
        
    }
}
-(void)repair_person
{
   persons=[self read_person];
    NSLog(@"请输入要修改的姓名");
    char name[13];
    scanf("%s",name);
    name[12]='\0';
    NSString *str= [[NSString alloc]initWithUTF8String:name];
    for (int i=0; i<persons.count; i++)
    {
            NSMutableArray *arr1=[[NSMutableArray alloc]init];
            for(int j=0;j<2;j++)
            {
                if ([str isEqualToString:persons[i][j]])
                {
                    char ch[13];
                    char cch[13];
                    NSLog(@"输入你要修改的姓名");
                    scanf("%s",ch);
                    ch[12]='\0';
                    NSString *s1=[[NSString alloc]initWithUTF8String:ch];
                    [arr1 addObject:s1];
                    NSLog(@"输入你要修改的电话");
                    scanf("%s",cch);
                    ch[12]='\0';
                   NSString *s2=[[NSString alloc]initWithUTF8String:cch];
                    [arr1 addObject:s2];
                    [persons replaceObjectAtIndex:i withObject:arr1];
                    BOOL b1=[self write_person];
                    if (b1)
                    {
                        NSLog(@"保存成功");
                    }
                    else
                    {
                        NSLog(@"保存失败");
                    }
            }
        }
    
    }
}
-(void)find_person
{
    NSLog(@"请输入要查找的姓名");
    char name[13];
    scanf("%s",name);
    name[12]='\0';
    persons=[self read_person];
   NSString *str= [[NSString alloc]initWithUTF8String:name];
    NSMutableArray *array3=[[NSMutableArray alloc]init];
    int a=1;
    for (array3 in persons)
    {
        for (NSString *str4 in array3)
        {
            if ([str isEqualToString:str4])
            {
                NSLog(@"%@",array3);
                a=2;
            }
        }
    }
    if (a==1)
    {
        NSLog(@"没有此人");
    }
}
-(void)show_person
{
    NSArray *arr= [self read_person];
    if (arr== nil)
    {
        NSLog(@"无人区");
        BOOL b=[self write_person];
        if (b)
        {
            NSLog(@"创建成功");
        }
        else
        {
            NSLog(@"创建失败");
        }
    }
    else
    {
        persons=[self read_person];
        NSLog(@"%@",persons);
    }
}
-(BOOL)write_person
{
    return [NSKeyedArchiver archiveRootObject:persons toFile:@"tel_book.plist"];
    /*if (b)
    {
        return YES;///---------这么做多余。
    }
    else
    {
        return NO;
    }*/
}
-(NSMutableArray*)read_person
{
    return [NSKeyedUnarchiver unarchiveObjectWithFile:@"tel_book.plist"];
}

@end
