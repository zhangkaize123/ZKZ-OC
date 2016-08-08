//
//  ZKZStudents.m
//  类被调用过几次
//
//  Created by 张凯泽 on 15-1-7.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "ZKZStudents.h"
@implementation ZKZStudents
static int count=0;
//1.类的数据相当于全局变量，类实例话的任何对象都可以用本对象的方法调用。
//2.如果一个数据，想让类实例话的任何对象都可以使用，就把该数据做成类的数据。
//3.对象不能调用类的方法
//4.类不能调用对象方法；
//5.类的数据在.m文件声明。
-(instancetype)initWithName:(NSString*)_name andWithAge:(int)_age
{
    count++;
    self=[super init];
    if (self)
    {
        name=_name;
        age=_age;
    }
    return self;
}
+(instancetype)studentsWithName:(NSString*)_name andWithAge:(int)_age
{
    return [[[self class]alloc]initWithName:_name andWithAge:_age];
}
-(int)countnumber
{
    return count;
}
-(void)saycount
{
    NSLog(@"次数：%d",[self countnumber]);
}
+(void)show
{
    NSLog(@"调用类的次数：%d",count);
}
@end




