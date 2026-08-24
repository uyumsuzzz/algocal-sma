/*
 Fibonacci serisinin n. elemanını özyinelemeli fonksiyon kullanarak 
hesaplayınız. Fibonacci Serisi: 1 1 2 3 5 8 13 21 34 55 …  
Örnek: 6 Cevap:8  
Örnek: 10 Cevap: 55 
*/
#include <stdio.h>
int fib(int n)
{
   if ((n==1)||(n==2))
   return 1;
   else
   return fib(n-1)+fib(n-2);
}
int main ()
{
    int n;
    printf("kacinci?");
    scanf("%d", &n);
    int cvp = fib(n);
    printf("%d", cvp);
return 0;
}