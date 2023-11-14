#include <iostream>
#include <vector>
using namespace std;

bool possible(vector<int>arr,int n,int m,int mid){
    int studentCount=1;
    int pageCount=0;
    for(int i=0;i<n;i++){
        if(pageCount+arr[i]<=mid){
            pageCount+=arr[i];
        }
        else{
            studentCount++;
            if(studentCount > m || arr[i] > mid){
                return false;
            }
            pageCount=arr[i];
        }
    }
    return true;
}

int allocateBooks(vector<int> arr,int m,int n){
    int s=0;
    int sum=0;
    int ans=-1;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(possible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    vector<int> arr={10,20,30,40};
    int n=4;
    int m=2;
    cout<<allocateBooks(arr,m, n);
}