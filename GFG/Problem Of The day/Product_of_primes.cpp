//Given two numbers L and R (inclusive) find the product of primes within this range. 
//Print the product modulo 10^9+7. If there are no primes in that range you must print 1.

#include<iostream>
#include<math.h>
using namespace std;

bool isprime(int n);
long long primeProduct(long long L, long long R);

int main()
{
    long long res = primeProduct(1,10);
    cout << res;
    return 0;
}


bool isprime(int n)
{
 // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to square root of n
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}

long long primeProduct(long long L, long long R)
{
    long long product=1;
    long long mod=1e9+7;
          
    for(long long i=L;i<=R;i++)
    {
        bool x=isprime(i);
        if(x==true)
        {
            long long y=i%mod;
            product=(product*y)%mod;
        }
    }
         
    return product;
}