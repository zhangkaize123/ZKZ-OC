//
//  ZKZStudent.m
//  继承 1.6
//
//  Created by 张凯泽 on 15-1-6.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "ZKZStudent.h"

@implementation ZKZStudent
- (instancetype)initWithName:(NSString *)_name andWithAge:(int)_age andWithScore:(int)_score
{
    /*
     继承过来的name如何赋上值的：通过_name传值。
    
     */
    
    self = [super initWithName:_name andWithAge:_age];//调用父类方法
    if (self)
    {
        score=_score;
    }
    return self;
}
-(void)say
{
    NSLog(@"name=%@,age=%d,score=%d",name,age,score);
}
@end
