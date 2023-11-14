#include<iostream>
using namespace std;
int findSqaurerootInt(int n){
    int s=0;
    int e=n;
    int ans;
    long long int mid=s+(e-s)/2;
    while(s<=e){
        long long square=mid*mid;
        if(square==n){
            return mid;
        }
        else if(square>n){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
double moreprecision(int n,int p,int temp){
    double factor=1;
    double ans=temp;
    for(int i=0;i<=p;i++){
        factor=factor/10;
        for(double j=ans;j*j<n;j=j+factor){
            ans=j;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    int temp=findSqaurerootInt(n);
    cout<<"the integer part of sq root : "<<temp<<endl;
    cout<<"more precised version : "<<moreprecision(n,3,temp);

}