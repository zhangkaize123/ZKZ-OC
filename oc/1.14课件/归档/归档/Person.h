//
//  Person.h
//  归档
//
//  Created by 张凯泽 on 15-1-14.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Person : NSObject<NSCoding>
@property(strong,nonatomic)NSString*name;
@property(assign,nonatomic)int age;
@end
