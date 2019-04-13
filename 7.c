#include <stdio.h>

int asal(int);

int main()
{
    int j,i=0;
    for(j=1; ;j++)
    {
        if(asal(j)==1)
        {
            printf("%d \n", j);
            i++;
        }
        if(i>=10001)
            break;
    }
    return 0;
}

int asal(int x)
{
    int i;
	
    if(x==0 || x==1)
        return 0;
	
    else
        for (i=2; i<x; i++)
            if (x % i == 0)
                return 0;
			
    return 1;
}