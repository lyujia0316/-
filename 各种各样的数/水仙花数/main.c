#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a,b,c;
    for(i=999;i>100;i--)
    {
        a=i/100;
        c=i%10;
        b=i/10%10;
        if(a*a*a+b*b*b+c*c*c==i)
            printf("%d是一个水仙花数\n",i);
    }
    return 0;
}
