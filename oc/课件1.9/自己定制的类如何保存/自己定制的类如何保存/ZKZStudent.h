//
//  ZKZStudent.h
//  自己定制的类如何保存
//
//  Created by 张凯泽 on 15-1-9.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZKZStudent : NSObject
{
    NSString *name;
    int age;
}
- (instancetype)initWithName:(NSString*)_name andWithAge:(int)_age;
-(void)say;
-(void)setName:(NSString*)_name;
-(void)setAge:(int)_age;
-(NSString*)name;
-(int)age;
@end
