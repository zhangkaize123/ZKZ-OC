//
//  ZKZBoss.h
//  代理模式
//
//  Created by 张凯泽 on 15-1-14.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZKZHelperDelegate.h"
//#import "ZKZHelper.h"
@interface ZKZBoss : NSObject
@property(strong,nonatomic)NSString *name;
@property(strong,nonatomic)id<ZKZHelperDelegate>delegate;
-(void)attendace;
-(void)phone;
-(void)pay;
-(void)train;
@end
