//swapping
#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main ()
{
    int c=8, d=9;
    swap(&c,&d);
    printf("c=%d, d=%d\n", c,d);
return 0;    
}