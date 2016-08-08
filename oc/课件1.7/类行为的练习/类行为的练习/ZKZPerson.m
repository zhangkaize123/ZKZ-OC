//
//  ZKZPerson.m
//  类的数据与行为
//
//  Created by 张凯泽 on 15-1-7.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "ZKZPerson.h"
//类由：对象的数据，类的数据
//对象的行为（－），类的行为（＋）
   static int count=0;// 属于类的变量（静态变量）。在.m文件里声明。
//static 限定该数据只在被类中有效其他地方不能用。
//如果不加static的话在其他文件利用 extern可以调用这个变量。
@implementation ZKZPerson
+(instancetype)personWithName:(NSString*)_name andWithAge:(int)_age
{
    return [[[self class]alloc]initWithName:_name andWithAge:_age];
    //结束后自动加上autorelease,所以在内存管理中不需要对类的行为实例的对象释放内存。
}
+(void)show
{
    NSLog(@"person=%d",count);
}
-(NSString*)name
{
    return name;
}
-(int)count1
{
    return count;
}
- (instancetype)initWithName:(NSString*)_name andWithAge:(int)_age
{
    count++;
    self = [super init];
    if (self)
    {
        name=_name;
    }
    return self;
}

-(void)say
{
    NSLog(@" ...%d",count);
}
@end

//
//
//
