#include<iostream>
#include<vector>
using namespace std;
int find_mountain(int*arr,int size){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return end;
}
int main(){
    int arr[5]={1,3,4,5,2};
    int size =5;
    cout<<"the mountain is:"<<find_mountain(arr,size);
    
}