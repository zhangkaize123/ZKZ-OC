//
//  ZKZSperson.h
//  继承 1.6
//
//  Created by 张凯泽 on 15-1-6.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZKZSperson : NSObject
{
    NSString *name;
    int age;
}
- (instancetype)initWithName:(NSString*)name andWithAge:(int)age;
-(void)say;

@end
