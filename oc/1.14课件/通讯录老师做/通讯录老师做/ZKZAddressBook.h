//
//  ZKZAddressBook.h
//  通讯录老师做
//
//  Created by 张凯泽 on 15-1-16.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZKZAddressBook : NSObject
@property(strong,nonatomic)NSMutableArray *persons;
-(void)add;
-(void)delete;
-(void)updata;
-(void)find;
-(void)show;

@end
