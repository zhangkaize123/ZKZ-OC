//
//  ZKZAddress_book.h
//  通讯录
//
//  Created by 张凯泽 on 15-1-14.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZKZTell_book.h"
@interface ZKZAddress_book : NSObject
@property(strong,nonatomic)NSArray*menu;
@property(strong,nonatomic)ZKZTell_book*tel_persons;
-(void)show;
@end
