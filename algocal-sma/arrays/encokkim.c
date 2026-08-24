//azcoktekrar
#include <stdio.h>
int main ()
{
   int n, max, say1, kackere_max;
   printf("dizi kac elemanli?..");
   scanf("%d", &n);
   int dizi[n];
   
    for(int i=0; i<n; i++)
    {
       printf("dizinin %d. elemanini giriniz..", i+1);
       scanf ("%d", &dizi[i]);
    }
    
    max=dizi[0];
    kackere_max=0;

    for (int j=0; j<n; j++)
    {
        int kontrol = 0;
        
        for(int m=0; m<j; m++)
        {
            if(dizi[j]==dizi[m])
            {
                kontrol = 1;
                break;
            }   
        }
   

    if(kontrol == 0)
            {
                say1=0;
                for (int k=0; k<n; k++)
                {
                    if(dizi[j]==dizi[k])
                {
                    say1++;
                }
                if (say1 > kackere_max)
                {
                    max = dizi[j];
                    kackere_max = say1;
                }

                }
            }       
 }
printf("max eleman = %d, %d kere tekrar etti..\n", max, kackere_max);


return 0;

}
