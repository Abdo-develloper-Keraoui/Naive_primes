#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Prime function to check if a number is prime or not
void Prime(int A, int a)
{
                int i;
                for(i=2;i<=sqrt(A);i++)
                {
                                if((A%i)==0)
                                {
                                                a = 1;
                                                break;
                                }
                }
                if(a==0)
                {
                                printf("%d is a prime number\n", A);
                }
}
//Simple implementation to check for prime numbers up to a threshold n
int main()
{
                int i,n,a;
                printf("Input a number (>2) : ");
                scanf("%d", &n);
                for(i=2;i<=n;i++)
                {
                                a=0;
                                Prime(i,a);
                }
}
