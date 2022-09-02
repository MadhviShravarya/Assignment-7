/*Write a program to check whether a given number is there in the Fibonacci
series or not*/
#include <stdio.h>
  int main() 
        {
        int n, f1 = 0, f2= 1, temp, flag = 0;
        printf("Enter ur input: ");
        scanf("%d", &n);
        if (n == f1 || n == f2)
		{
                printf("%d is a fibonacci number\n", n);
                return 0;
        }
        while (f2<= n) 
		{
                temp = f2;
                f2 = f1 + f2;
                f1 = temp;
                if (f2 == n) 
				{
                        flag = 1;
                        break;
                }
        }
        if (flag)
	    {
                printf("%d is a fibonacci number\n", n);
        } else 
		{
                printf("%d is not a fibonacci number\n", n);
        }
        return 0;
  }

