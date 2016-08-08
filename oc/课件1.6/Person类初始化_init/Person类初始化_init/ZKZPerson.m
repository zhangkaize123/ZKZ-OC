//
//  ZKZPerson.m
//  Person类初始化_init
//
//  Created by 张凯泽 on 15-1-6.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "ZKZPerson.h"

@implementation ZKZPerson
- (instancetype)initWithName:(NSString *)_name
{
//    self = [super init];
//    if (self) {
//        
//    }
//    return self;
    self=[self initWithName:_name andWithSex:@"" andWithAge:1];
    return self;
    
}

- (instancetype)initWithName:(NSString*)_name andWithSex:(NSString*)_sex andWithAge:(int)_age//带参数的初始化init。
{
    self = [super init];//
    if (self!=nil)
    {
        name=_name;
        sex=_sex;
        age=_age;
    }
    return self;
}
- (instancetype)init//不带参数的初始化init。
{
    self = [super init];
    if (self)      //等同于if（self！＝nil)
    {
        name=@"";
        sex=@"";
        age=1;
        
    }
    return self;
}
-(void)say
{
    
    NSLog(@"我叫%@,%@,我今年%d",name,sex,age);
}
@end
