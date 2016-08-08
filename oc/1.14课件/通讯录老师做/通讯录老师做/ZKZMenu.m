//
//  ZKZMenu.m
//  通讯录老师做
//
//  Created by 张凯泽 on 15-1-16.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "ZKZMenu.h"

@implementation ZKZMenu
@synthesize items;
- (instancetype)init
{
    self = [super init];
    if (self)
    {
        self.addressbook=[[ZKZAddressBook alloc]init];
    }
    return self;
}
-(void)show
{
    int count=0;
    for (NSDictionary *dict in self.items)
    {
        count++;
        NSString *key=[dict allKeys][0];
        printf("%d,%s\n",count,[key UTF8String]);
    }
    count++;
    printf("%d,%s\n",count,"退出");
    printf("请选择功能编号1-6\n");
}
-(BOOL)inputItem
{
    char in[2000];
    scanf("%s",in);
    in[1]=0;
    int num=in[0]-'0';
    if (num==self.items.count+1)
    {
        return NO;
    }
    if (num>self.items.count+1||num<0)
    {
        printf("对不起！你不能选择当前没有的功能！\n");
        return YES;
    }
    NSString *action=[self.items[num-1]allValues][0];//一些行为。
    SEL sel=NSSelectorFromString(action);
    if([self.addressbook respondsToSelector:sel])
    {
        [self.addressbook performSelector:sel];
    }
   else
   {
       NSLog(@"没有此行为");
   }
    return YES;
}
@end
