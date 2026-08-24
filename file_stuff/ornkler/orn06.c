// EOF-feof
#include <stdio.h>
int main()
{
    FILE *ptr = fopen("6exmple.txt", "r");
    int ch = fgetc(ptr);

        while(ch != EOF)
        {
        // harfleri tek tek ekrana yazdırır.
        putchar(ch);
        ch = fgetc(ptr);
        }
    if(feof(ptr))  // 1 dönerse doğru
    {
        printf("\ndosyanin sonuna gelindi..");
    }
    else
    {
        printf("ERROR");
    }

    fclose(ptr);

return 0;
}