#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,a,b;
    for(i=1;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            for(k=0;k<10;k++)
            {
                a=i*i*i+j*j*j+k*k*k;
                b=i*100+j*10+k;
                if(a==b)
                    printf("%d是一个水仙花数\n",a);
            }
        }
    }
    return 0;
}
