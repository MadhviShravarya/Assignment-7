//Write a program to print first N terms of Fibonacci series
#include <stdio.h>
 
int main()
{
    int fib1 = 0, fib2 = 1, fib3, num, i= 0;
 
    printf("Enter the value of num \n");
    scanf("%d", &num);
    printf("First %d FIBONACCI numbers are ...\n", num);
    printf("%d\n", fib1);
    printf("%d\n", fib2);
    i = 2; 
    while (i< num)
    {
        fib3 = fib1 + fib2;
        i++;
        printf("%d\n", fib3);
        fib1 = fib2;
        fib2 = fib3;
   }
}
