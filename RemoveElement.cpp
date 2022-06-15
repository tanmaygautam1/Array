#include <iostream>
using namespace std;
int main(){
  int pos, num, size;
  cout<<"Enter the size of array:";
  cin>>size;
  int arr[100]={0};
  for(int i=0;i<size;i++){
    cout<<"Enter Element "<<i+1<<":";
    cin>>arr[i];
  }
  cout<<"Enter the position and the number:";
  cin>>pos>>num;
  if (arr[pos+1]==num){
  for(int i=pos-1;i<=size-1;i++){
    arr[i]=arr[i+1];
  }}
  else{
    cout<<"THE ARRAY DOES NOT CHANGE";}
  
    cout<<"THE ARRAY IS"<<endl;
  for (int i=0;i<=size-1;i++){
    cout<<"The element "<<i+1<<" is:"<<arr[i]<<endl;
  }
}