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
  //while(l<r-0.1)//解答を引っ張ってきた人の条件。なぜかOKだったが、lとｒの整数部が異なる状態でループを出ると問題になるはず
	//for(int i=0;i<35;i++)//OK log2(10^9)=30.二分探索だとこのやり方安定する。ただし、浮動小数のせいか34以上でないと通らず。
  //while(!((ceil(r)-ceil(l)) == 0))//NG:左端が初期値0のままだと、右端のceilは0にならず、無限ループ
  while(!((floor(r)-floor(l)) == 0))//https://atcoder.jp/contests/abc174/submissions/15672399
  {
    long double mid=(l+r)/2;
    if(Count(mid)<=K) r=mid;
    else	l=mid;
  }
  cout<<(long long)(l+0.999)<<endl;
  return 0;
}
