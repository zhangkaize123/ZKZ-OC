//
//  ZKZStudent.h
//  作业1.12
//
//  Created by 张凯泽 on 15-1-13.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZKZStudent : NSObject
{
    NSString *name;
    int age;
}
-(instancetype)initWithName:(NSString*)_name andWithAge:(int)_age;
-(NSString*)name;
-(int)age;
@end
