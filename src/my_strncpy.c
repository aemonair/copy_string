#include <stdio.h>

//函数声明(从src_str向dest_str进行拷贝n位字符串的函数)
char *my_strncpy(char *dest_str, const char *src_str, size_t n);

//函数实现
char *my_strncpy(char *dest_str, const char *src_str, size_t n)
{
    char       *dest = dest_str ;
    const char * src = src_str  ;
    size_t         i = 0        ;

    //1.函数参数检测
    if(dest_str == NULL || src_str == NULL || dest_str == src_str)
    {
        return dest_str;
    }
    //2.进行拷贝
    while(i++ < n && src[i] != '\0')
    {
        //*dest[i] = *src[i] ;
        //i++;
        (*dest++ = *src++);
    }

    while(i++ < n)
    {
        //*dest[i++] = '\0';
        *dest++ = '\0';
    }
    
    //3.返回dest_str
    return dest;
}
