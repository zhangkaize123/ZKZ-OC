//
//  ZKZStudents.h
//  类被调用过几次
//
//  Created by 张凯泽 on 15-1-7.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>
@interface ZKZStudents : NSObject
{
    NSString*name;
    int age;
    
}
-(instancetype)initWithName:(NSString*)_name andWithAge:(int)_age;
+(instancetype)studentsWithName:(NSString*)_name andWithAge:(int)_age;
-(int)countnumber;
-(void)saycount;
+(void)show;
@end
