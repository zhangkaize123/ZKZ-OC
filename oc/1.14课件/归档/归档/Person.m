//
//  Person.m
//  归档
//
//  Created by 张凯泽 on 15-1-14.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "Person.h"

@implementation Person
@synthesize name,age;
-(void)encodeWithCoder:(NSCoder *)aCoder//编码
{
    [aCoder encodeObject:name forKey:@"NAME"];
    [aCoder encodeInt:age forKey:@"AGE"];
}
-(instancetype)initWithCoder:(NSCoder *)aDecoder
{
    self =[super init];
    [aDecoder decodeObjectForKey:@"NAME"];
    [aDecoder decodeIntForKey:@"AGE"];
    return self;
}
@end
