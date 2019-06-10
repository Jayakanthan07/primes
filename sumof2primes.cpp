using namespace std;
#include<stdio.h>
#include<bits/stdc++.h>
long long int isprime(long long int n)
{
    long long int flag=1;
    for(long long int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        return n;
    }
    return 0;
}

int main()
 {
        long long int t;
        cin>>t;
        while(t-->0)
        {  
            long long int n,p=0;
            cin>>n;
           for(long long int i=3;i<=sqrt(n);i++)
           {
               if(n%2==0)
               {
                  if(isprime(i)!=0)
                   { 
                    p=n-i;
                    int x=isprime(p);
                    if(x+i==n)
                    {
                      cout<<i<<" "<<x<<endl;
                      break;
                       }
                }
               }
           }
        }
	return 0;
}
