#include <iostream>
using namespace std;
int main(){
int arr[6]={23,43,2,5,78,23};
for(int i=0;i<6;i++){
  int j;
  for(j=i+1;j<6;j++){
    if(arr[j]>=arr[i])
    {
      break;
    }
  }
    if (j==6){
    cout<<arr[i]<<" ";
}
}}