//
//  main.m
//  结构3
//
//  Created by 张凯泽 on 16/4/14.
//  Copyright © 2016年 wyzc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Student.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import "Person.h"
#import "Person+A.h"
#import "Person+B.h"
//设置getter方法
NSString* worknameGetter(id self,SEL _cmd){
    Ivar ivar = class_getInstanceVariable([Person class], "_workname");
    return object_getIvar(self, ivar);
}
void worknameSetter(id self,SEL _cmd,NSString * worknamevalue)
{
    Ivar ivar = class_getInstanceVariable([Person class], "_workname");
    object_setIvar(self, ivar, worknamevalue);
}
struct Time{
    double hour;
    double min;
    double sec;
};
//obj_class
struct tageDate{
    int year;
    int month;
    int date;
    struct Time * time;
};
// obj_object
struct birthDate{
    struct tageDate * tagdate;
    
};
typedef void (*VIMP)(id,SEL,...);
int main(int argc, const char * argv[]) {
    @autoreleasepool {
        //typedef struct birthDate * birthdate ;
        struct birthDate * birthdate = malloc(sizeof(struct birthDate)*2);
        //给生日的 结构申请空间
        for (int index = 0; index < 2; index ++) {
            ( birthdate +index)->tagdate = malloc(sizeof(struct tageDate));
            ( birthdate +index)->tagdate->time = malloc(sizeof(struct Time));
        }
        for (int j = 0; j<2; j++) {
            (( birthdate +j)->tagdate->year) = 1999+j;
            (( birthdate +j)->tagdate->month) = 12+j;
            (( birthdate +j)->tagdate->date) = 30+j;
            (( birthdate +j)->tagdate->time)->hour = 12+j;
             (( birthdate +j)->tagdate->time)->min = 30+j;
             (( birthdate +j)->tagdate->time)->sec = 50+j;
        }
       // printf("%f",(birthdate+1)->tagdate->time->sec);
  //-----------------------------------------------------------------------------------------
        NSLog(@"--------------------------------------------");
        //1.获取一个类中所有对象方法(-)包括类目,类对象的私有方法,这个类遵守的协议方法
        
        u_int count;
        Method *method = class_copyMethodList([Person class], &count);
        for (int i = 0; i < count ; i++)
        {
            SEL name = method_getName(method[i]);
            NSString *strName = [NSString stringWithCString:sel_getName(name)encoding:NSUTF8StringEncoding];
           // NSLog(@"---%@",strName);
           //IMP * imp = method_getImplementation(method[i]);
            
           
        }
        free(method);
       // Person * person = [[Person alloc]init];
       // class_addMethod([Person class], @selector(method::), <#IMP imp#>, <#const char *types#>)
        //objc_msgSend(person,@selector(say));
        //给一个类添加属性
        objc_property_attribute_t type = {"T","@\"NSString\""};
        objc_property_attribute_t ownership = {"C",""};
        objc_property_attribute_t backingIvar = {"V","_workname"};
        objc_property_attribute_t attrs[] = {type,ownership,backingIvar};
        class_addProperty([Person class], "workname", attrs, 3);
        //添加getter/setting方法
        //const char *types :第一个代表返回值类型(@,i)，方法中id(@),sel(:),
        class_addMethod([Person class], @selector(workname), (IMP)worknameGetter, "@@:");
        class_addMethod([Person class], @selector(setWorkname:), (IMP)worknameSetter, "v@:@");
        Person * p = [[Person alloc]init];
        p.sex = @"man";
        //______________________________________________________________________
        //获取类的属性
        u_int countPros ;
        objc_property_t * propertys=class_copyPropertyList([Person class], &countPros);
        for (int j = 0; j<countPros; j++) {
            objc_property_t property =*(propertys+j);
            
           // NSLog(@"*****name = %s,attribute = %s",property_getName(property),property_getAttributes(property));
        }

        //___________________________________________________________________
        // 获取类的成员变量
        u_int countIvar;
       Ivar * ivars = class_copyIvarList([Person class], &countIvar);
        for (int i = 0; i<countIvar; i++) {
            Ivar ivar = *(ivars+i);
            //NSLog(@"___%s",ivar_getName(ivar));
           // NSLog(@"___%s",ivar_getTypeEncoding(ivar));
            
            
        }
        free(ivars);
        //-----------------------------------------------------------------------
                object_setIvar(p, class_getInstanceVariable([Person class], "_workname"), @"ios开发");
        //Ivar varIvar = class_getInstanceVariable(p.class, "_workname");
       // NSLog(@"workname的值:%s",ivar_getName(varIvar));

       // NSLog(@"^^^^^%@",p.description);
        //objc_msgSend();
    ///Users/zkz/Desktop/基础课程/c语言/自定义数据类型课题/结构2/结构3/main.m:111:22: Too many arguments to function call, expected 0, have 2
        //[p sayA];
//        Method methodClass = class_getClassMethod([Person class], @selector(sayClasMethod));
//        SEL name = method_getName(methodClass);
//        NSString *strName = [NSString stringWithCString:sel_getName(name)encoding:NSUTF8StringEncoding];
//       
//        NSLog(@"strName = %@",strName);
//        IMP impClassMethod = class_getMethodImplementation([Person class], @selector(say));
        
//                SEL name = method_getName(class_getInstanceMethod([Person class], @selector(say)));
//                NSString *strName = [NSString stringWithCString:sel_getName(name)encoding:NSUTF8StringEncoding];
//                NSLog(@"strName = %@",strName);
        // class_getInstanceMethod([Person class], @selector(<#selector#>))
        //p.workname = @"2343";
        // 在程序运行期间动态的给两个方法互换实现
       Method methodSay = class_getInstanceMethod([Person class], @selector(say));
       Method methodSayClasMethod = class_getInstanceMethod([Person class], @selector(sayClasMethod));
        method_exchangeImplementations(methodSay, methodSayClasMethod);
        [p say];
        //method_setImplementation(<#Method m#>, <#IMP imp#>)
        //自定义IMP 方法实现
        //VIMP vimp = (VIMP)method_getImplementation(methodSay);
        //vimp(p,@selector(say));
        //通过交换IMP方法实现指针，来进行方法替换
       // method_setImplementation(methodSay, method_getImplementation(methodSayClasMethod));
        //[p say];
        Person * p2 = [Person new];
       // p2.sex = @"Women";
        //object_setIvar(p2, class_getInstanceVariable(p2.class, "_sex"), @"nan");
//       Ivar  sexIvar = class_getInstanceVariable(p2.class, "_sex");
//        
//        
//        NSLog(@"sex = %s",ivar_getName(sexIvar));
//        Class classs = objc_getMetaClass("NSObject");
//        
//        NSLog(@"元类 ＝ %s",class_getName(classs));
//        
    
        
    }
    return 0;
}

