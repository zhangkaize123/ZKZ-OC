//
//  ZKZStudent.m
//  作业1.12
//
//  Created by 张凯泽 on 15-1-13.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "ZKZStudent.h"

@implementation ZKZStudent
-(instancetype)initWithName:(NSString*)_name andWithAge:(int)_age
{
    self=[super init];
    if (self)
    {
        name=_name;
        age=_age;
    }
    return self;
}
-(NSString*)name
{
    return name;
}

-(int)age
{
    return age;
}
- (NSString *)description
{
    return [NSString stringWithFormat:@"name=%@,age=%d", name,age];
}
@end
