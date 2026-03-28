//Pointer kullanarak bir dinamik olarak oluşturulmuş 2D matrisin kenar elemanlarının
//toplamını bulan programı yazınız.  
/*
        8 5 6
        4 5 7   -->  8+5+6+7+3+2+1+4   (köşeler bir kere sayılacak!)
        1 2 3  
*/
#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int top=0;
    int n;
        printf("kare matris derecesi ne?..");
        scanf("%d", &n);
    
    int *ptr;
    ptr = (int*) malloc(n*n*sizeof(int));

    if(ptr==NULL)
    {
        printf("hata!!");
        return 1;
    }

    printf("elemanlarinizi giriniz..\n");

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", (ptr+i*n+j));

        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==0||i==n-1||j==0||j==n-1)
            top+= *(ptr+(i*n+j));   // 2 boyutlu dizi -> pointer
        }
    }

    printf("%d ", top);


return 0;
}
