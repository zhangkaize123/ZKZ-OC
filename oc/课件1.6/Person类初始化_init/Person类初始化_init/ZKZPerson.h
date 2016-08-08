//
//  ZKZPerson.h
//  Person类初始化_init
//
//  Created by 张凯泽 on 15-1-6.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZKZPerson : NSObject
{
    NSString*name;
    NSString*sex;
    int age;
}
- (instancetype)initWithName:(NSString *)_name;
- (instancetype)initWithName:(NSString*)_name andWithSex:(NSString*)_sex andWithAge:(int)_age;
-(void)say;
@end
