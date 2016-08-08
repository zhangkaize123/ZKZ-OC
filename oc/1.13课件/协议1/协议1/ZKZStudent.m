//
//  ZKZStudent.m
//  协议1
//
//  Created by 张凯泽 on 15-1-13.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "ZKZStudent.h"

@implementation ZKZStudent
@synthesize name,age;
-(instancetype)copyWithZone:(NSZone *)zone
{
    //这种方法只能自己类使用，如果创建了子类就没有这个拷贝功能。
    //ZKZStudent *object=[[Person allocWithZone:zone]init];
    
    
    //这种方法，子类是可以继承此方法。
    ZKZStudent *object=[[[self class] allocWithZone:zone]init];
   object.name=self.name;//浅拷贝。
    //object.name=[self.name copy];//深拷贝。
    object.age=self.age;
    return object;
}
-(void)dealloc
{
    NSLog(@"%@内存释放了",name);
    [super dealloc];
}


-(void)say
{
    NSLog(@"name=%@,age=%d",name,age);
}
#pragma mark-b......协议方法
-(void)song
{
    NSLog(@"%@在唱歌",name);
}
-(void)cry
{
    NSLog(@"%@在哭",name);
}
@end
