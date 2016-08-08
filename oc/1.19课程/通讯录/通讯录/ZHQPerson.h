//
//  ZHQPerson.h
//  通讯录
//
//  Created by wyzc on 15-1-16.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZHQPerson : NSObject<NSCoding>//联系人
@property (strong,nonatomic) NSString * name;
@property (strong,nonatomic) NSString * tel;
@end
