#include <unistd.h>

char *ft_strrev(char *str)
{
    int len;
    int i;
    char tmp;

    len=0;
    i=0;
    while(str[len])
        len++;
    while(i<len)
    {
        tmp=str[i];
        str[i]=str[len-1];
        str[len-1]=tmp;
        i++;
        len--;
    }
    return (str);
}
