#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the number to be reversed: "<<endl;
    cin>>a;

    int reva=0;
    while(a>0)
    {
        int t =a%10;  // we get last digit,, remainder out
        a = a/10;    // we get quotient out
        reva = reva*10 + t ; // if number is 143 ,, t=3 then a =14 and reva= 0*10 +3 = 3
                            // in 2nd time loop ,, t=4 then a=1 and reva= 3*10 +4 =34
                            // in 3rd time loop ,, t=1 then a=0 and reva=34*10 +1 =341
    }
    cout<<reva;
    return 0;
}