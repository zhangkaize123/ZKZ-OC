//
//  ZKZStudent.m
//  属性
//
//  Created by 张凯泽 on 15-1-13.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "ZKZStudent.h"

@implementation ZKZStudent
@synthesize name,age;//1.如果没有@synthesize对象的属性必须加"_"下划线。
//2。如果有@synthesize就不需要加。
-(instancetype)init
{
    self=[super init];
    if (self)
    {
        name=@"lllll";
    }
    return  self;
}
-(void)setName:(NSString *)_name
{
    //name=_name;
}
/*
-(void)setAge:(int)_age
{
    age=_age;
}


-(NSString*)name
{
    return name;
}
-(int)age
{
    return age;
}*/
- (NSString *)description
{
    return [NSString stringWithFormat:@"name=%@,age=%d", self->name,self->age];
}
-(void)show
{
    NSLog(@"name=%@,age=%d",self->name,self->age);
}
- (void)dealloc
{
    NSLog(@"对象已销毁");
}
@end
