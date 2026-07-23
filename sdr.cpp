#include <iostream>
using namespace std;
int main()
{
    int i;
    int n;
    cout<<"enter the no. of elements you want in your array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elemnts of your array"<<endl;
    for(i=0;i<=n-1;i++)
    {
        cin>>arr[i];
    }
    cout<<"the elements of your array are:"<<endl;
    for(i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<endl;
    }
    
}
