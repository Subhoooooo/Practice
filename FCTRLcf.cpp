//Program to find the trailing zero's of a factorial.

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number of elements you want to enter:-"<<endl;
    int n;
    cin>>n;
    int arr[1000000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    int outputarr[1000000];
    for(int i=0;i<n;i++){
        int n=arr[i];
        int z=n;
        while(z>5){
            int s=z/5;
            sum=sum+s;
            z=z/5;
        }
        outputarr[i]=sum;
        sum=0;
    }
    for(int i=0;i<n;i++){
        cout<<outputarr[i]<<endl;
    }
}