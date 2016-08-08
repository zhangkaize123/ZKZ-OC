//
//  ZKZTest.h
//  类行为的练习
//
//  Created by 张凯泽 on 15-1-7.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZKZTest : NSObject
{
    NSString*str;
}
-(instancetype)initWithStr:(NSString*)_str;
+(instancetype)testWithStr:(NSString*)_str;
@end
