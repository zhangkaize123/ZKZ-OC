//
//  ZKZStudent.h
//  属性
//
//  Created by 张凯泽 on 15-1-13.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZKZStudent : NSObject
@property(readonly,nonatomic)NSString *name;
//strong -->retain.     weak代表弱，引用对象时不retain.
//copy-->指两个空间。//自己的类没有copy能力，必须给他这个能力
//readonly--->属性你可以得到，但是没有办法写。
//默认的是－－－－>readwrite。
@property(assign,nonatomic)int age;
/*
{
    NSString*name;
    int age;
}
-(void)setName:(NSString *)_name;
-(void)setAge:(int)_age;
-(NSString*)name;
-(int)age;*/
-(void)show;
@end
