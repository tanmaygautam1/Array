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
  for(int i=size-1;i>=pos-1;i--){
    arr[i+1]=arr[i];
  }
  arr[pos-1]=num;
    cout<<"THE NEW ARRAY"<<endl;
  for (int i=0;i<=size;i++){
    cout<<"The element "<<i+1<<" is:"<<arr[i]<<endl;
  }
}