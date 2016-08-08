//
//  ZHQPerson.m
//  通讯录
//
//  Created by wyzc on 15-1-16.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "ZHQPerson.h"

@implementation ZHQPerson
@synthesize name,tel;
-(void)encodeWithCoder:(NSCoder *)aCoder
{
    [aCoder encodeObject:name forKey:@"NAME"];
    [aCoder encodeObject:tel forKey:@"TEL"];
}
-(id)initWithCoder:(NSCoder *)aDecoder
{
    self=[super init];
    if(self)
    {
        name=[aDecoder decodeObjectForKey:@"NAME"];
        tel=[aDecoder decodeObjectForKey:@"TEL"];
    }
    return self;
}
@end
