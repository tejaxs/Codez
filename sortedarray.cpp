#include <iostream>
using namespace std;

int sortedarr(int arr[], int sizeofarr)
{
   
        for(int i=1;i<sizeofarr;i++)
        {
           if( arr[i]<arr[i-1])
            {
                return 0;
            }
        }
        return 1;
        
    
}
int main()
{
    int sizeofarr;
    int arr[sizeofarr];
    cout<<"enter size of array then followed by elements";
    cin>>sizeofarr;

    for(int i=0;i<sizeofarr;i++)
    {
        cin>>arr[i];
    }

    if (sortedarr(arr,sizeofarr)==1)
    {
        cout<<"sorted";
    }
    else
    {
        cout<<"not sorted";
    }


return 0;
}