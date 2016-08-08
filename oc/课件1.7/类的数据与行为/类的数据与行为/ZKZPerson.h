//
//  ZKZPerson.h
//  类的数据与行为
//
//  Created by 张凯泽 on 15-1-7.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZKZPerson : NSObject
{
    NSString *name;//这些都是对象的数据，类是不能使用。
    int age;
    //int count;//属于对象的数据，不属于其他对象数据
}
+(instancetype)personWithName:(NSString*)_name andWithAge:(int)_age;
+(void)show;
//__________________________________________________
- (instancetype)initWithName:(NSString*)_name andWithAge:(int)_age;
-(NSString*)name;

-(int)count1;
-(void)say;
@end
