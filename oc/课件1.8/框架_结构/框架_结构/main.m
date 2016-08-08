//
//  main.m
//  框架_结构
//
//  Created by 张凯泽 on 15-1-8.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{
    @autoreleasepool
    {
//_________________________结构之点结构________________________________
        CGPoint point={10,10};
        point.x=10;
        point.y=12.3;
      //point.y 返回值是CGFloat.
        NSLog(@"x=%g,y=%g",point.x,point.y);
        //把结构转化成字符串类型。
        NSString*str=NSStringFromPoint(point);
        
        NSLog(@"str=%@",str);
        //把结构转化成对象类型。
        NSValue *value=[NSValue valueWithPoint:point];
        
        NSLog(@"value=%@",value);
        
//__________________________大小________________________________
        NSSize size;
        size.width=200;
        size.height=100;
        //把结构转化成字符串类型。
        NSString*str1=NSStringFromSize(size);
        NSLog(@"大小%@",str1);
        //把结构转化成对象类型。
        NSValue *value1=[NSValue valueWithSize:size];
        NSLog(@"value1=%@",value1);
//_______________________矩形__________________________________
        NSRect re;
        re.origin.x=10;
        re.origin.y=20;
        re.size.width=100;
        re.size.height=200;
        //把结构转化成字符串类型。
        NSLog(@"%@",NSStringFromRect(re));
//_____________________范围________________________________________
        
        NSRange range;
        range.location=1;
        range.length=2;
        NSLog(@"%@",NSStringFromRange(range));
        
        
        
        
        
    }
    return 0;
}
