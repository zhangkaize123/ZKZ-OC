//
//  ZKZDate.m
//  日期类的创建
//
//  Created by 张凯泽 on 15-1-12.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "ZKZDate.h"

@implementation ZKZDate
- (instancetype)init
{
    self = [super init];
    if (self)
    {
        date1 =[NSDate date];
    }
    return self;
}
- (instancetype)initWithDate:(NSDate*)_date
{
    self = [super init];
    if (self)
    {
        date1=_date;
    }
    return self;
}
+(instancetype)dateWithDate:(NSDate*)_date
{
    
    return [[[self class]alloc]initWithDate:(NSDate*)_date];
    
}
-(NSString *)stringFromDate
{
    
    NSDateFormatter *formatter=[[NSDateFormatter alloc]init];
    [formatter setDateFormat:@"yyyy-MM-dd HH:mm:ss"];
    NSString *s1=[formatter stringFromDate:date1];
    return s1;
}
-(int)year
{
    NSDateFormatter *formatter=[[NSDateFormatter alloc]init];
    [formatter setDateFormat:@"yyyy"];
    NSString *s3=[formatter stringFromDate:date1];
    return [s3 intValue];
}
@end
