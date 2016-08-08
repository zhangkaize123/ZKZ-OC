//
//  ZKZHelperDelegate.h
//  代理模式
//
//  Created by 张凯泽 on 15-1-14.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol ZKZHelperDelegate <NSObject>
-(void)attendace;
-(void)phone;
-(void)pay;
@end
