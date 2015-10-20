#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
void rec(long long int x){
  if(!cin.good()){
    return;
  }
  long long int n;
  cin>>n;
  rec(n);
  printf("%.4f\n",sqrt(x));
}
int main(){
  long long int x;
  cin>>x;
  rec(x);
  return 0;
}
