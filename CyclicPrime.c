//19937 : 99371, 93719,37199,71993,19937 are all prime.

#include <stdio.h>
#include <math.h>
int isPrime(int);
int Shift(int,int);
int digits(int);

int main()
{
    int i,n, t, d, b,k=1;
    scanf("%d", &n);
    t = n;

    d=digits(n);
    t = n;
    for(i=1;i<=d;i++)
    {
        b=isPrime(t);
        if(b==0)
        {
            k=0;
            break;
        }
        t=Shift(t,d);
    }

    if (k == 0)
        printf("Not circular prime");
    else
        printf("Circular prime");

    return 0;
}

int isPrime(int n)
{
    int i, k = 0;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            k++;
            break;
        }
    }

    if (k == 0)
        return 1;
    else
        return 0;
}

//19937 : 99371, 93719,37199,71993,19937 are all prime.
int Shift(int n,int d)
{
    int t;

    t=n;

    t=(n-((n/(int)pow(10,d-1))*(int)pow(10,d-1)))*10+(n/(int)pow(10,d-1));

    return t;
}

int digits(int n)
{
    int t=n,k=0;
    while(t!=0)
    {
        t/=10;
        k++;
    }
    return k;
}