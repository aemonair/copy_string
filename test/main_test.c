#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    const char *str1= "i am the string waiting to be copied.～( ` _ ` ～)~";
    char str2[100] = {0};
    char str3[10]  = {0};

    printf("Before:\n str1:%s \nstr2:%s \nstr3:%s\n \n",str1, str2, str3);
    
    my_strcpy(str2, str1);
    printf("strcpy(str2,str1):\n%s\n",str2);
    
    my_strncpy(str3, str1, 10);
    printf("strncpy(str3,str1,10): \n%s\n",str3);
}
