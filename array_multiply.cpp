#include<iostream>
int main(void)
{
  int i,n,mul=1;
  cout<<"Enter number of elements in array"<<endl;
  cin>>n;
  int a[n];
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(i=0;i<n;i++)
  {
    mul*=a[i];
  }
  cout<<mul;
