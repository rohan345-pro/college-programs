#include <iostream>
using namespace std;
int main()
{
    
    int n,i;
    cout<<"enter the no. of elements you want in your array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elemnts of your array"<<endl;
    for(i=0;i<=n-1;i++)
    {
        cin>>arr[i];
    }
    
    int s=arr[0];
    for(i=0;i<=n-1;i++)
    {
       if(s<arr[i])
       {  
         s=arr[i];
   
       }
     
    }
    cout<<"largest number is"<<s;
  
}
