//
//  ZKZUIApplication.m
//  代理练习
//
//  Created by 张凯泽 on 15-1-14.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "ZKZUIApplication.h"
/*单例类的应用场景：1.可以存储一些共享数据。
 2.如果一个类的创建需要耗费很多性能，最好设计成单例类。
 */


static ZKZUIApplication *app=nil;
@implementation ZKZUIApplication


+(instancetype)shareApplication
{
    
    
    if (app==nil)
    {
        app=[[[self class]alloc]init];//当调用alloc的时候，会跳到allocWithZone:(struct _NSZone *)zone这里边去

    }
    return app;
    
}
+(instancetype)allocWithZone:(struct _NSZone *)zone
{
    if (app==nil)
    {
        app=[[super class] allocWithZone:zone];
        
    }
    return app;
}

-(instancetype)copyWithZone:(NSZone *)zone
{
    return app;
}
@end
