#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
long long int a[2002][2002];
long long int weight[2002];
long long int  value[2002];
long long  int i,j,k,S,N,op;
scanf("%lld %lld",&S,&N);
for(i=1;i<=N;i++)
{
      scanf("%lld",&weight[i]);
      scanf("%lld",&value[i]);
}
for(i=0;i<N;i++)
{
      a[0][i]=0;
      a[i][0]=0;
}
for(i=1;i<=N;i++)
{
      for(j=1;j<=S;j++)
      {
       if(j<weight[i])
       a[i][j]=a[i-1][j];
          else
      {
            op=value[i]+a[i-1][j-weight[i]];
            a[i][j]=max(a[i-1][j],op);
      }
      }
}
printf("%lld\n",a[N][S]);
 return 0;
}
