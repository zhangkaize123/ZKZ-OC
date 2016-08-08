//
//  ZKZStudent.m
//  多态
//
//  Created by 张凯泽 on 15-1-7.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "ZKZStudent.h"

@implementation ZKZStudent
+(instancetype)studentWithName:(NSString *)_name andWithAge:(int)_age andWithScore:(int)_score
{
    return [[[self class]alloc]initWithName:_name andWithAge:_age andWithScore:_score];
}
-(instancetype)initWithName:(NSString *)_name andWithAge:(int)_age andWithScore:(int)_score
{
    self=[super initWithName:_name andWithAge:_age];
    if (self) {
        score=_score;
    }
    return self;
}
-(void)demostudent
{
    NSLog(@"这是student的行为");
    [self say];
}

-(void)say
{
    NSLog(@"person:name=%@,age=%d,score=%d",name,age,score);
}
@end
