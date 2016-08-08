//
//  ZHQAddressBook.h
//  通讯录
//
//  Created by wyzc on 15-1-16.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZHQAddressBook : NSObject
@property (strong,nonatomic) NSMutableArray * persons;
-(void)add;
-(void)delete;
-(void)update;
-(void)find;
-(void)show;
@end
