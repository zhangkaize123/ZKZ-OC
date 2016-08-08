//
//  ZKZMenu.h
//  通讯录老师做
//
//  Created by 张凯泽 on 15-1-16.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZKZAddressBook.h"
@interface ZKZMenu : NSObject
@property(strong,nonatomic)NSArray *items;
@property(strong,nonatomic)ZKZAddressBook *addressbook;
-(void)show;
-(BOOL)inputItem;
@end
