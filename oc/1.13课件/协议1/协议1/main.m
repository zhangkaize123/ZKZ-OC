//
//  main.m
//  协议1
//
//  Created by 张凯泽 on 15-1-13.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZKZStudent.h"
int main(int argc, const char * argv[])
{
    @autoreleasepool
    {
        ZKZStudent *zs=[[ZKZStudent alloc]init];
//        zs.name=@"zhangsan";
//        [zs say];
//        //[zs song];
//        if ([zs respondsToSelector:@selector(cry)])
//        {
//            //[zs cry];
//        }
////____________自己的类如何实现拷贝_________________________________
        //1.理解深浅拷贝。
        ZKZStudent *ls=[zs copy];//注意在实现文件里重写行为。
        ls.name=@"lisi";
        if (zs.name==ls.name)
        {
            NSLog(@"字符串对象地址相同");
        }
        [ls say];
        [zs say];
//___________________添加到数组引用计数如何增减_________________________
        
//        ZKZStudent *zs=[[ZKZStudent alloc]init];//1
//        zs.name=@"zhangsan";
//        NSArray *array=[[NSArray alloc]initWithObjects:zs, nil];//2
//        [array release];//1//数组释放时发送一次release消息。
//        [zs release];
//        //在数组中增加一个对象，那么对象就retain一下。
//        //数组中移除一个对象，或移除所有时就会发送一下release。
//        
//        
//        
//        
        
    
    }
    return 0;
}
