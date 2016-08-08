//
//  Person.h
//  结构2
//
//  Created by 张凯泽 on 16/4/14.
//  Copyright © 2016年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZKZHelperDelegate.h"
@interface Person : NSObject<ZKZHelperDelegate>
{
    //成员变量
    int age;
    NSString * name;
}
@property(nonatomic,copy)NSString *sex;
@property(nonatomic,retain)NSMutableArray *array;
@property(nonatomic,assign)int year;

-(void)say;
-(void)sayClasMethod;
@end
