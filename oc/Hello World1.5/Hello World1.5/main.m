//
//  main.m
//  Hello World1.5
//
//  Created by 张凯泽 on 15-1-5.
//  Copyright (c) 2015年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>//导入
//#import能够避免重复包含。
@interface ZKZStudent : NSObject//类的声明部分
{
    NSString*name;
    NSUInteger age;
}
-(void)setName:(NSString*)_name;
-(void)setAge:(int)_age;
-(void)say;//void say();
-(NSString*)name;
-(NSUInteger)age;
@end
@implementation ZKZStudent
-(void)say
{
    NSLog(@"name=%@,age=%ld",name,age);
}
-(void)setName:(NSString*)_name
{
    name=_name;
}
-(void)setAge:(int)_age
{
    age=_age;
}
-(NSString*)name
{
    return name;
}
-(NSUInteger)age
{
    return age;
}
- (NSString *)description
{
    return [NSString stringWithFormat:@"name=%@,age=%ld", name,age];
}
@end
@interface ZKZSum : NSObject

{
    int number;
}
-(void)setNumber:(int)_number;
-(int)sum;
@end
@implementation ZKZSum
/*
 set  方法转换成“.”语法使用条件；
 1.方法名中必须有set+属性（首字母需大写）字样。
 2.没有返回值。
 3.必须有参数类型及参数。
 */

//_________________________________________________________________
//set 方法使用
/*
set 方法有一个参数格式:-(void)set＋属性（首字母大写）:(参数类型)_参数名;
 有两个参数：-(void)setWith＋属性（首字母大写）:(参数类型)_参数名 andWith＋属性（首字母大写）:(参数类型)_参数名;
*/
-(void)setNumber:(int)_number
{
    number=_number;
}
/*
 get 方法转换成“.”语法使用条件。
 1.必须有返回值。
 2.不能有参数类型及参数。
 */
-(int)sum
{
    int summ=0;
    for (int i=1; i<=number ; i++)
    {
        summ+=i;
    }
    return summ;
}
@end
int main(int argc, const char * argv[])
{
    @autoreleasepool//内存管理机制－自动释放池
    {
        
        ZKZSum *s=[[ZKZSum alloc]init];
        s.number=100;
        int a=s.sum;
        NSLog(@"%d",a);
        
        ZKZStudent *zz=[[ZKZStudent alloc]init];
        [zz setName:@"zahngsa"];
        [zz setAge:23];
        NSLog(@"%@",zz.description);
        //[zz say];
        //NSLog(@"name=%@,age=%ld",[zz name],[zz age]);
        //init 是对类里边的 数据（属性） 进行初始化
        
        //NSLog(@"Hello, World!");//printf
        //凡是@标示的东西就是oc的东西
        //1.BOOL型
//        BOOL b;//定义一个BOOL类型变量
        //初始化值yes,no
//        b=YES;//1
//        b=NO;//0
//        NSLog(@"%d",b);
        
        //2.字符串类型
//        NSString *str=@"123";
//        NSLog(@"%@",str);
        //3.类的机制。
        //类是对事物的高度概括。
        //类：(1).数据（属性和特点）
        //(2).行为（能做什么）
        //类包含：声明和实现
        //类的数据是保护的，行为是公开的
        //类有三个权限：@public，@protective，@private;
        //
        //
        //
        
        
    }
    return 0;
}
