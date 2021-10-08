#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int bincon(long long n);
long long deccon(int k);
void main()
{
  int i,x;
  long long y;
  printf("\n1. Decimal to Binary.\n");
  printf("2. Binary to Decimal.\n");
  printf("0. Exit.\n");

  printf("\nEnter your choice: ");
  scanf("%d",&i);
  switch(i)
  {
    case 1: printf("\n\nEnter Decimal Value:");
            scanf("%d",&x);
            printf("\nBinary Value: %lld\n",deccon(x));
            break;

    case 2: printf("\n\nEnter Binary Value:");
            scanf("%d",&y);
            printf("\nDecimal Value: %d\n",bincon(y));
            break;
    case 0: exit(0);
    default: printf("\nInvalid Input"); break;
  }
}

int bincon(long long n)
{
    int dec = 0, i = 0, rem;
    while (n != 0)
    {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    return dec;
}

long long deccon(int k)
{
    long long bin = 0;
    int rem, i = 1, step = 1;
    while (k != 0) {
        rem = k % 2;
        k /= 2;
        bin += rem * i;
        i *= 10;
    }
    return bin;
}
