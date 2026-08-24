//
#include <stdio.h>
int main ()
{
    int a[15] = {2, 3, 5, 6, 7, 300, 9, 200, 5, 6, 2, 100};
    
    int max1, max3, max2;
        
        if (a[0]>=a[1] && a[0]>=a[2])
        {
            max1=a[0];
            if(a[1]>=a[2])
            {
                max2 = a[1];
                max3 = a[2];
            }
            else
            {
                max2 = a[2];
                max3 = a[1];
            }
        }    
        else if (a[1]>=a[0] && a[1]>=a[2])
        {
            max1=a[1];
            if(a[0]>=a[2])
            {
                max2 = a[0];
                max3 = a[2];
            }
            else
            {
                max2 = a[2];
                max3 = a[0];
            }
        } 
        else 
        {
            max1=a[2];
            if(a[0]>=a[1])
            {
                max2 = a[0];
                max3 = a[1];
            }
            else
            {
                max2 = a[1];
                max3 = a[0];
            }
        } 
        for (int i=3; i<sizeof(a)/sizeof(a[0]); i++)
        {   
            if (a[i]>max1)
            {
                max3=max2;
                max2=max1;
                max1=a[i];
            }
            else if (a[i]>max2)
            {
                max3=max2;
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
