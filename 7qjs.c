#include <stdio.h>
#include <stdlib.h>

int fibo(int n);

int main()
{
        int n;
        int i;

        printf("\nenter the number : \n");
        scanf("%d", &n);

        for(i = 0 ; i < n; i++)
        {
                printf("%d term : %d\n",i, fibo(i));
        }

        return 0;
}

int fibo(int n)
{
        if(n==0)
                return 0;
        else
                if(n==1) return 1;
        else
                return fibo(n-1) + fibo(n-2);
} 
