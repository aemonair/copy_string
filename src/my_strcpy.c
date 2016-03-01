#include <stdio.h>
#include <string.h>

//函数声明(从src_str向dest_str进行拷贝字符串的函数)
char *my_strcpy(char *dest_str, const char *src_str);

//函数实现
char *my_strcpy(char *dest_str, const char *src_str)
{
    char       *dest = dest_str;
    const char * src = src_str;

    //1.函数参数检测
    if(dest_str == NULL || src_str == NULL || dest_str == src_str)
    {
        return dest_str;
    }
    //2.进行拷贝
    while(*src != '\0')
    {
        *dest = *src ;
        dest++;
        src++ ;
    }
    *dest = '\0';

    while((*dest++ = *src++) != '\0')
    {//do nothing
    }
    //3.返回dest_str
    return dest_str;
}
