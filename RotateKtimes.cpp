#include <iostream>
using namespace std;
int main(){
  int n, turn, temp, arr[100]={0};
  cout<<"Enter the size of array:";
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cout<<"Enter Element "<<i+1<<":";
    cin>>arr[i];
  }
   cout<<"Enter the number of Rotations:";
   cin>>turn;
  while(turn>=1){
  for(int i=0; i<n;i++){
    if(i==0){
      temp=arr[i];
    }
    arr[i]=arr[i+1];
    if(i==n-1){
      arr[n-1]=temp;
      break;
    }
  }
  

  for(int i=0;i<n;i++)
  {
   cout<<arr[i]<<" ";
  }

 turn--;
}cout<<endl;}