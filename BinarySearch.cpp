#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int Search(int arr[],int start, int end, int key){
if(start<=end){
  int mid = (start+end)/2;
  if(arr[mid]==key){
    return mid;
    }
  else if (arr[mid]<key){
    return Search(arr, mid+1,end,key);
  }
  else {
    return Search(arr, start,mid-1,key);
  }
  
  }
  return -1;
}

int main(){
  int n=0; 
  int arr[n];
  int searchh;
  cout<<"Enter the size of Array";
  cin>>n;
  for(int i =0;i<n;i++){
  cout<<"Enter Element "<<i+1<<":";
  cin>>arr[i];
  }
 cout<<"Enter the element to search for:";
 cin>>searchh;
 int index = Search(arr,0,n-1,searchh);
 cout<<index;
 return 0;
}