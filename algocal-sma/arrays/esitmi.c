//esitmi
#include <stdio.h>
int main ()
{
    int dizi[7]={3,2,1,5,4,3,4};
    int t1 = 0;
    int t2 = 0; 
    
        for(int i=0; i<7; i++)
    {
        t1 += dizi[i];
    }
        for(int j=0; j<7; j++)
    {
        t2 += dizi[j];
        if (t2 == t1/2)
        {
            printf("%d", dizi[j]);
            break;
        }

    }

return 0;
}
