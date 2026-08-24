//dd
#include <stdio.h>
int main ()
{
   int n, flag=0;
   printf("dizi kac elemanli?..");
   scanf("%d", &n);
   int dizi[n];
    for(int i=0; i<n; i++)
    {
       printf("dizinin %d. elemanini giriniz..", i+1);
       scanf ("%d", &dizi[i]);
    }
    for (int m=0; m<n; m++)
    {
        int kontrol = 0;
            for (int k=0; k<m; k++)
            {
                if (dizi[m]==dizi[k]) // daha önce bu sayı kontrol edildi mi?
                {
                    kontrol = 1;
                    break;
                }
            }

        if (kontrol == 0)
        {   
        flag = 0;
                for (int j=0; j<n; j++)
                {
                    if (dizi[m]==dizi[j])
                    flag++;
                }
            printf("%d tane %d var..\n", flag, dizi[m]);
            
        }

    }

return 0;

} 
