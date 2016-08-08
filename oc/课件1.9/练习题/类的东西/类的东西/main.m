//类的行为又叫做工厂行为 负责创建自身的对象
#import <Foundation/Foundation.h>
#define kMax1 50
#define kMax2 50
int main(int argc, const char * argv[])
{
    @autoreleasepool
    {
        /*
        NSString * str=@"1111";
        NSString * str2=@"11";
        int countnum=0;
        for(int i=0;i<[str length];)
        {
            NSString * temp=[str substringFromIndex:i];
            if([temp length]<[str2 length]) break;
            NSString * s=[str substringWithRange:NSMakeRange(i, [str2 length])];
            if([s isEqual:str2])
            {
                countnum++;
                i+=[str2 length];
            }
            else
            {
                i++;
            }
        }
        NSLog(@"一共有%d个字符串相等",countnum);
         */
        /*
        char ch1[40];
        char ch2[40];
        NSLog(@"请输入第一个字符串：");
        scanf("%s",ch1);
        ch1[39]=0;
        NSLog(@"请输入第一个字符串：");
        scanf("%s",ch2);
        ch2[39]=0;
        int count=0;
        NSString *str1=[NSString stringWithUTF8String:ch1];
        NSString *str2=[NSString stringWithUTF8String:ch2];
        NSLog(@"%lul",str1.length-str2.length);
        int a=str1.length-str2.length;
        for(int i=0;i<=a;i++)
        {
            NSRange range={i,str2.length};
            NSString *temp=[str1 substringWithRange:range];
            if([temp isEqualToString:str2])
            {
                count++;
            }
        }
        NSLog(@"count=%d",count);
         */
        
//        char ch1[100],ch2[100];
//        NSLog(@"请输入第一个字符串");
//        scanf("%s",ch1);
//        NSString *str1=[NSString stringWithUTF8String:ch1];
//        NSLog(@"请输入第二个字符串");
//        scanf("%s",ch2);
//        ch1[99]='\0';
//        ch2[99]='\0';
//        NSString *str2=[NSString stringWithUTF8String:ch2];
        NSString *str1=@"1132111";
        NSString *str2=@"1";
        int sum=0;
        NSRange range=[str1 rangeOfString:str2];
        while(1)
        {
            if (range.location==NSNotFound)
            {
                break;
            }
            else
            {
                sum++;
            }
            int i=(int)(range.location+range.length);
            str1=[str1 substringFromIndex:i];
            range=[str1 rangeOfString:str2];
        }
        NSLog(@"%d",sum);
        
        
    }
    return 0;
}
