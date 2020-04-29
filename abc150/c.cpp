#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0;i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i < (n); i++)
using namespace std;
typedef long long ll;

int N;
int x[8],y[8];

int main(){
  scanf("%d",&N);
  rep(i,N){
    scanf("%d",&x[i]);
  }
  rep(i,N){
    scanf("%d",&y[i]);
  }
  vector<int> v(N);
  rep(i,N){
    v[i]=i+1;
  }
  int count=0;
  ll a=0,b=0;
  do{
    count++;
    int xmatch=0;
    int ymatch=0;    
    rep(i,N){
      if(v[i]==x[i]){
        xmatch++;
        if(xmatch==N){
          a=count;
        }
      }
      if(v[i]==y[i]){
        ymatch++;
        if(ymatch==N){
          b=count;
        }
      }
    }
  }while(next_permutation(v.begin(),v.end()));
  printf("%lld",abs(a-b));
  
}

