//
//  ZKZDate.h
//  日期类的创建
//
//  Created by 张凯泽 on 15-1-12.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZKZDate : NSObject
{
    NSDate *date1;
}
- (instancetype)initWithDate:(NSDate*)_date;
+(instancetype)dateWithDate:(NSDate*)_date;
-(NSString *)stringFromDate;
-(int)year;
@end
