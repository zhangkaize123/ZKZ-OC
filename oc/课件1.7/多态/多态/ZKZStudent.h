//
//  ZKZStudent.h
//  多态
//
//  Created by 张凯泽 on 15-1-7.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "ZKZPerson.h"

@interface ZKZStudent : ZKZPerson
{
    int score;
}
+(instancetype)studentWithName:(NSString*)_name andWithAge:(int)_age andWithScore:(int)_score;
-(instancetype)initWithName:(NSString *)_name andWithAge:(int)_age andWithScore:(int)_score;
-(void)demostudent;
-(void)say;
@end
