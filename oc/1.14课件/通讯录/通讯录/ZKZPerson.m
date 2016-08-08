//
//  ZKZPerson.m
//  通讯录
//
//  Created by 张凯泽 on 15-1-14.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "ZKZPerson.h"

@implementation ZKZPerson
@synthesize name,tel;
-(void)encodeWithCoder:(NSCoder *)aCoder
{
    [aCoder encodeObject:name forKey:@"NAME"];
    [aCoder encodeObject:tel forKey:@"TEL"];
}
-(instancetype)initWithCoder:(NSCoder *)aDecoder
{
    name=[aDecoder decodeObjectForKey:@"NAME"];
    tel=[aDecoder decodeObjectForKey:@"TEL"];
    return self;
}
- (NSString *)description
{
    return [NSString stringWithFormat:@"name=%@,tel=%@", name,tel];
}
@end
