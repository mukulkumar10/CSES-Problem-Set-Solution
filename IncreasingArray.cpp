#include<iostream>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    int arr[n];
    long long int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i>=1 && arr[i]<arr[i-1]){
            sum+= arr[i-1]-arr[i];
            arr[i]=arr[i-1];
        }
    }
    cout<<sum<<endl;
    return 0;
}