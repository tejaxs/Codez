#include <iostream>
using namespace std;

double avg(int a[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    return sum/double(n);
}
int main()
{
    int n,a[n];
    cout<<"enter the size of array followed by elements "<<endl;

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<avg(a,n);
    return 0;
}