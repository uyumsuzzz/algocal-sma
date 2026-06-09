/*
Bir hasta bilgileri içeren yapı dizisinin tüm üyelerini fwrite() kullanarak bir dosyaya yazmak için
C programı yazınız. Diziyi dosyadan okuyun ve ekranda görüntüleyin.
*/
#include <stdio.h>
typedef struct{
    int ates;
    char isim[50];
}hasta_t;
int main ()
{
    FILE *ptr = fopen ("hastalar.bin", "wb");
    if(ptr == NULL)
    {
        printf("ERROR");
        return 1;
    }
    
    hasta_t hasta1[3];
    
    for(int i=0; i<3; i++)
    {    
        printf ("hastanin ismi= ");
        scanf("%s",hasta1[i].isim);
        printf("hastanin atesi= ");
        scanf("%d", &hasta1[i].ates);   
    }
    
    fwrite(hasta1, sizeof(hasta_t),3, ptr);
    fclose(ptr);
    printf("...");

    //*********************

    hasta_t hasta2[3];
    FILE *ptr2 = fopen("hastalar.bin", "rb");

    if(ptr2 == NULL)
    {
        printf("ERROR");
        return 1;
    }
    
    fread(hasta2, sizeof(hasta_t),3, ptr2);
    fclose(ptr2);
    printf("...\n");

    for(int i=0; i<3; i++)
    {
        printf("%d. hasta bilgileri:\n", i+1);
        printf("isim:%s\nates:%d\n", hasta2[i].isim, hasta2[i].ates);
        if(hasta2[i].ates == 0)
        printf("(olu)\n");
    }


return 0;
}