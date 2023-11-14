#include<iostream>
using namespace std;
int firstOccurence(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
           ans=mid;
           end=mid-1;
        }
        else if(key>arr[mid]){//go to right
            start=mid+1;
        }
        else{//go to left
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;

}
int LastOccurence(int*arr,int size,int key){
    int start=0;
    int end=size-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
           ans=mid;
           start=mid+1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
         mid=start+(end-start)/2;
    }

    return ans;

}
pair<int,int> firstAndLastPosition(int* arr, int size, int key){
    pair<int,int> p;
    p.first=firstOccurence(arr,size,key);
    p.second=LastOccurence(arr,size,key);
    return p;
} 
int totalOccurence(int* arr, int size, int key){
    std::pair<int, int> p = firstAndLastPosition(arr,size, key);
    int total=(p.second-p.first)+1;
}
int main(){
    int arr[6]={1,2,3,3,3,5};
    int size=6;
    int key=3;
    //this is for printing using pair
    std::pair<int, int> p = firstAndLastPosition(arr,size, key);
    cout<<p.first<<endl;
    cout<<p.second<<endl;
    cout<<totalOccurence(arr,size,key);
    
}