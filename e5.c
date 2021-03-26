#include <stdio.h>

int ft_atoi(const char *str)
{
    int i;
    int neg;
    int num;
    i=0;
    neg=1;
    num=0;

    while(str[i]==' '||str[i]=='\f'||str[i]=='\t'||str[i]=='\n'||str[i]=='\v'||str[i]=='\r')
        i++;
    if(str[i]=='-'||str[i]=='+')
    {
        if(str[i]=='-')
            neg=-1;
        i++;
    }
    while(str[i]>='0'&&str[i]<='9')
    {
        num = num*10 + (str[i]-'0');
        i++;
    }
    return (num*neg);
}

int main(void)
{
    int t;
    t = ft_atoi("a-123a");
    printf("%d",t);
}
