#include <iostream>
using namespace std;
int main()
{
    int i,n,sum=0,a[n];
    cout<<"Enter number elements in array"<<endl;
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    cout<<"Sum of array elements"<<sum;
}
