#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int k, m[102];
  cin>>k;
  for(int i=0;i<k;i++){
    cin>>m[i];
  }
  sort(m,m+k);
  int sum=0;
  for(int i=0;i<k/2+1;i++){
    sum+=m[i]/2+1;
  }
  cout<<sum<<endl;
  return 0;
}
