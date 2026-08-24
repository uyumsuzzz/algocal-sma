//
#include <stdio.h>
#include <limits.h> // INT_MIN
int main ()
{
    int a[15] = {2, 3, 5, 6, 7, 300, 9, 200, 5, 6, 2, 100};
    
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int max3 = INT_MIN;

        for (int i=0; i<sizeof(a)/sizeof(a[0]); i++)
        {   
            if (a[i]>max1)
            {
                max3=max2;
                max2=max1;
                max1=a[i];
            }
            else if (a[i]>max2)
            {
                max2=max2;
                max2=a[i];
            }
            else if(a[i]>max3)
            {
                max3=a[i];
            }
        }

    printf("dizininin en buyuk 3. elemani = %d", max3);


return 0;
}
