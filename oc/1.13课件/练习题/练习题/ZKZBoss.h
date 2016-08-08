//
//  ZKZBoss.h
//  练习题
//
//  Created by 张凯泽 on 15-1-13.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZKZBossprotocol.h"
@interface ZKZBoss : NSObject<ZKZBossprotocol>
@property(strong,nonatomic)NSString*name;
@end
