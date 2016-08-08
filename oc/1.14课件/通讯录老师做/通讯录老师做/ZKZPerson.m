//
//  ZKZPerson.m
//  通讯录老师做
//
//  Created by 张凯泽 on 15-1-16.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "ZKZPerson.h"

@implementation ZKZPerson
@synthesize name,phone;
-(void)encodeWithCoder:(NSCoder *)aCoder
{
    [aCoder encodeObject:name forKey:@"NAME"];
    [aCoder encodeObject:phone forKey:@"PHONE"];
}
-(id)initWithCoder:(NSCoder *)aDecoder
{
    self=[super init];
    if (self!=nil) {
        name=[aDecoder decodeObjectForKey:@"NAME"];
        phone=[aDecoder decodeObjectForKey:@"PHONE"];
    }
    return self;
}
@end
