//
//  ZKZStudent.m
//  自己定制的类如何保存
//
//  Created by 张凯泽 on 15-1-9.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "ZKZStudent.h"

@implementation ZKZStudent
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
//-(void)setName:(NSString*)_name;
//-(void)setAge:(int)_age;
//-(NSString*)name;
//-(int)age;
-(void)say
{
    NSLog(@"name=%@,age=%d",name,age);
}
-(NSString*)description
{
    return [NSString stringWithFormat:@"name=%@,age=%d",name,age ];
}
@end
