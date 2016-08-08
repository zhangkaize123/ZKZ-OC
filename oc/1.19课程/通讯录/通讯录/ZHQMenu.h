//
//  ZHQMenu.h
//  通讯录
//
//  Created by wyzc on 15-1-16.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZHQAddressBook.h"
@interface ZHQMenu : NSObject
@property (strong,nonatomic) NSArray * items;//菜单内容
@property (strong,nonatomic) ZHQAddressBook * addressBook;
-(void)show;//显示菜单
-(BOOL)input;//选择菜单
@end
