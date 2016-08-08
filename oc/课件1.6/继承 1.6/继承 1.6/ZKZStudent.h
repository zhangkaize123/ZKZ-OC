//
//  ZKZStudent.h
//  继承 1.6
//
//  Created by 张凯泽 on 15-1-6.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "ZKZSperson.h"

@interface ZKZStudent : ZKZSperson
{
    int score;
}
- (instancetype)initWithName:(NSString *)_name andWithAge:(int)_age andWithScore:(int)_score;
-(void)say;
@end
