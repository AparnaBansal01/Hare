#include <bits/stdc++.h>
using namespace std;

int main(){
int n =10,temp,l;
int arr[n] ;
for(int i=0;i<n;i++){
  cin>>temp;
  arr[i] = temp;
  l=i-1;
  while(l>=0){
    if(arr[l] <= temp ){
    break;
    }
    arr[l+1]=arr[l];
    l--;
  }
  arr[l+1] = temp;
}
for(int j=0;j<n;j++){
cout<<arr[j]<<" ";}
return 0;
}
