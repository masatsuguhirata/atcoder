#include<bits/stdc++.h>
using namespace std;
long double X[200100];
int N;
long long Count(long double len)
{
  long long Ans=0;
  for(int i=0;i<N;i++)
  {
    Ans+=(long long)(X[i]/len);
    //Ans+= (ceil(X[i])-1/len);
  }
  return Ans;
}
int main()
{
  long long K;
  cin>>N>>K;
  for(int i=0;i<N;i++)
{
	cin>>X[i];
	//X[i]-=0.1;
}
  long double l=1,r=1e9;
  //while(l<r-0.1)
  //while((ceil(r)-ceil(l)) > 1)
  while(((long long)(r)-(long long)(l)) > 1)
  {
    long double mid=(l+r)/2;
  //  cout<<l<<" "<<r<<" "<<mid<<endl;
    if(Count(mid)<=K) r=mid;
    //else	l=mid+0.01;
    else	l=mid;
  }
  cout<<(long long)(l)+1<<endl;
  return 0;
}
