#include <stdio.h>

int main()
{
    while(1!=0)
    {for(int i=0; i <10; i++)
        {
        i = i + 0.2*i;
        printf("i= %d\n", i);
        if (i > 5){i = i/0;}

        }
    }
    return 0;
}
