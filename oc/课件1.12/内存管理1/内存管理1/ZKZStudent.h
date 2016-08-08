//
//  ZKZStudent.h
//  内存管理
//
//  Created by 张凯泽 on 15-1-12.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZKZStudent : NSObject

{
    NSString *name;
    int age;
}
-(void)setName:(NSString *)_name;
-(NSString *)name;
-(void)show;
+(instancetype)student;
@end
