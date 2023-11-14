#include<iostream>
using namespace std;
int binary_Search(int*arr,int key,int size){
    int start=0;
    int end=size-1;
    int mid=(start+(end-start)/2);
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=(start+(end-start)/2);
    }
    return -1;
}
int main(){
    int arr[7]={1,2,9,19,33,56,69};
    int key=5;
    int size=7;
    cout<<binary_Search(arr,key,size);

}