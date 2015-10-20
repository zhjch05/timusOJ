#include <iostream>
using namespace std;
int main(){
  int n,sum=0;
  cin>>n;
  if(n>1){
    for(int i=1;i<=n;i++){
      sum+=i;
    }
  }
  else if(n==1){
    sum = 1;
  }
  else{
    for(int i=1;i>=n;i--){
      sum+=i;
    }
  }
  cout<<sum<<endl;
  return 0;
}
