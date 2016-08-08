//
//  ZHQMenu.m
//  通讯录
//
//  Created by wyzc on 15-1-16.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "ZHQMenu.h"

@implementation ZHQMenu
-(instancetype)init
{
    self=[super init];
    if(self)
    {
        self.addressBook=[[ZHQAddressBook alloc]init];
    }
    return self;
}
-(void)show
{
    int count=0;
    for(NSDictionary * dict in self.items)
    {
        count++;
        NSString * key=[dict allKeys][0];
        printf("%d、%s\n",count,[key UTF8String]);
    }
    count++;
    printf("%d、%s\n",count,"退出");
    printf("请选择功能编号(1-%d)：",count);
}
-(BOOL)input
{
    char in[2000];
    scanf("%s",in);
    in[1]=0;
    int num=in[0]-'0';
    if(num==self.items.count+1)
    {
        return NO;
    }
    if(num>self.items.count+1 || num<=0)
    {
        printf("对不起！你不能选择当前没有的功能！\n");
        return YES;
    }
    NSString * action=[self.items[num-1] allValues][0];
    SEL sel=NSSelectorFromString(action);
    if([self.addressBook respondsToSelector:sel])
    {
        [self.addressBook performSelector:sel];
    }
    else
    {
       printf("对不起！你不能选择的功能暂时尚未开通！\n");
    }
    return YES;
}
@end
