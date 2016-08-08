//
//  ZKZPerson.h
//  多态
//
//  Created by 张凯泽 on 15-1-7.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZKZPerson : NSObject
{
    NSString*name;
    int age;
}
+(instancetype)personWithName:(NSString*)_name andWithAge:(int)_age;

-(instancetype)initWithName:(NSString*)_name andWithAge:(int)_age;
-(void)say;
-(void)demoperson;
@end
