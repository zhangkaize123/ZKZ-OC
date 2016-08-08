//
//  ZKZPerson.m
//  多态
//
//  Created by 张凯泽 on 15-1-7.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "ZKZPerson.h"

@implementation ZKZPerson

-(instancetype)initWithName:(NSString*)_name andWithAge:(int)_age
{
    self =[super init];
    if (self) {
        name=_name;
        age=_age;
    }
    return self;
}
+(instancetype)personWithName:(NSString*)_name andWithAge:(int)_age
{
    
    return [[[self class]alloc]initWithName:_name andWithAge:_age];
    //做完以后默认的会  autorelease,所以用类初始化的对象不需要加release.
}

-(void)say
{
    NSLog(@"person:name=%@,age=%d",name,age);
}
-(void)demoperson
{
    NSLog(@"这是person类的行为");
    [self say];
}

@end
