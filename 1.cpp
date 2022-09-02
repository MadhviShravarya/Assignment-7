//Write a program to find the Nth term of the Fibonnaci series
#include <stdio.h>
 long int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
 
    return fib(n - 1) + fib(n - 2);
}
 
int main()
{
    
	long int n;
    printf("enter the number\n");
    scanf("%ld",&n);
 
    printf("F(n) = %ld", fib(n));
 
    return 0;
}

