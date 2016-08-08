//
//  ZKZSperson.m
//  继承 1.6
//
//  Created by 张凯泽 on 15-1-6.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "ZKZSperson.h"

@implementation ZKZSperson
- (instancetype)initWithName:(NSString*)_name andWithAge:(int)_age
{
    self = [super init];
    if (self)
    {
        name=_name;
        age=_age;
    }
    return self;
}
- (NSString *)description//自己创建的类，如果想打印对象，必须重写decription方法，否则打印的是这个类的地址。
{
    return [NSString stringWithFormat:@"name=%@,age=%d", name,age];
}
-(void)say
{
    NSLog(@"name=%@,age=%d",name,age);
}
-(void)dealloc
{
    NSLog(@"对象被释放了");
}
@end
