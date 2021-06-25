#include<iostream>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    int arr[n-1];
    long long int sum=0;
    long long int res;
    long long int target;
    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    res = (n*(n+1))/2; //formula to calculate sum of all natural numbers upto n
    target = res - sum;
    cout<<target<<endl;
    return 0;
}