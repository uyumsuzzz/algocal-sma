//
#include <stdio.h>
int main()
{
    int a[15]={2,3,5,6,7,300,9,200,5,6,2,100};
    int flag=0, max=a[0];
    int b=0;
      
        for(int n=0; n<3; n++)
    {
            max = 0; // döngüye yeniden girildiğinde max temiz olmalı
            for(int i=1; i<15; i++)
            {
                 if(max < a[i])
                {
                max = a[i];         
                b = i;
                }
             }
            a[b] = 0;
    
    }

    printf ("%d", max);

return 0;
}
