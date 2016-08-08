//
//  ZKZSquare.h
//  图形类继承老师讲
//
//  Created by 张凯泽 on 15-1-7.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import "ZKZShap.h"

@interface ZKZSquare : ZKZShap
- (instancetype)initSide:(double)_side;
//init 可以对类中没有的属性进行初始化，就把init当作普通方法，只不过是需要调用一下父类的初始化。看上面的initWithSide:(double)_side;都是自己定义的名字，参数，类型,只不过需要你用init这个关键字。
@end
