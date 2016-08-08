//
//  ZKZUIApplication.h
//  代理练习
//
//  Created by 张凯泽 on 15-1-14.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZKZUIApplicationDelegate.h"
@interface ZKZUIApplication : NSObject
@property(strong,nonatomic)NSString*name;
@property(strong,nonatomic)id<ZKZUIApplicationDelegate>delegate;
-(void)comeBefore;
-(void)comeAfter;
@end
