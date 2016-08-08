//
//  ZKZTell_book.h
//  通讯录
//
//  Created by 张凯泽 on 15-1-14.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZKZPerson.h"
@interface ZKZTell_book : NSObject
@property(strong,nonatomic)NSMutableArray *persons;
@property(strong,nonatomic)ZKZPerson *person;
-(void)add_person;
-(void)delete_person;
-(void)repair_person;
-(void)find_person;
-(void)show_person;
-(BOOL)write_person;
-(NSMutableArray*)read_person;
@end
