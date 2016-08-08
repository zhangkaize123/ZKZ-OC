//
//  main.m
//  多态
//
//  Created by 张凯泽 on 15-1-7.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZKZPerson.h"
#import "ZKZStudent.h"
int main(int argc, const char * argv[])
{
    @autoreleasepool
    {
        //
//___________________________2.多态_____________________________
        //1.必须是继承。
        //2.必须由方法重写。
        //3.用父类接受子类对象。
    ZKZPerson *per=[ZKZPerson personWithName:@"zzzz" andWithAge:22];
        
        //[per say];
        ZKZStudent *stu=[ZKZStudent studentWithName:@"llll" andWithAge:20 andWithScore:89];
        //[stu say];
        ZKZPerson *a1=[ZKZStudent studentWithName:@"llll" andWithAge:20 andWithScore:89];
        //[a1 say];
        
   //___________________3.id________________________________
//1.is MeberofClass
        id a=[ZKZPerson personWithName:@"person" andWithAge:22];
        BOOL b=[a isMemberOfClass:[ZKZPerson class]];
        if (b)
        {
//2.performSelector:<#(SEL)#>
            [a performSelector:@selector(demoperson)];
        }
        else
        {
            //NSLog(@"不是此类的对象");
        }
//3.iskindofclass 的使用----这个对象是不是某个类的或者子类的对象。
        id c=[ZKZStudent studentWithName:@"student" andWithAge:22 andWithScore:89];
        BOOL d=[c isKindOfClass:[ZKZPerson class]];
        if (d)
        {
            //[c say];
        }
//4.respondsToSelector<#(SEL)#> 的使用
        if([c respondsToSelector:@selector(demoperson)])
        {
            [c demoperson];
        }
        
//5.respondsToSelector:NSSelectorFromString(<#NSString *aSelectorName#>用法
        //等同于@selector(demostudent).
        
        if([c respondsToSelector:NSSelectorFromString(@"demostudent")])
        {
           // [c demostudent];
        }
        
        
        
    }
    return 0;
}
