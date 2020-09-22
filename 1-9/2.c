#include <stdio.h>

int main()
{
    int fb1=0, fb2=1, fb, i, sum=0;

    for (i=0; fb1+fb2<4000000; i++)
    {
        fb = fb1+fb2;
        fb1=fb2;
        fb2=fb;

        if(fb%2==0)
            sum+=fb;
    }
    printf("%d", sum);

    return 0;
}
