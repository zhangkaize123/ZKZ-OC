//
//  main.m
//  日期类的创建
//
//  Created by 张凯泽 on 15-1-12.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZKZDate.h"
int main(int argc, const char * argv[]) {
    @autoreleasepool
    {
        NSData *data=[NSData data];
        
        NSDateFormatter *formatter=[[NSDateFormatter alloc]init];
//        [formatter setDateFormat:@"yyyy-MM-dd HH:mm:ss"];
                [formatter setDateFormat:@"yyyy-MM-dd"];
        NSString *ss=[formatter stringFromDate:data];
        //NSDate *da2 =[formatter dateFromString:@"2010-12-12 12:12:12"];
        //ZKZDate *dgg=[ZKZDate dateWithDate:da2];
        
        NSLog(@"%@",data);
        NSLog(@"%@",ss);
    
    
    
    }
    return 0;
}
