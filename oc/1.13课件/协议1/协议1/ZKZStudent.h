//
//  ZKZStudent.h
//  协议1
//
//  Created by 张凯泽 on 15-1-13.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZKZSong.h"
@interface ZKZStudent : NSString<ZKZSong,NSCopying>
@property(strong,nonatomic)NSString *name;
@property(assign,nonatomic)int age;
-(void)say;
@end
