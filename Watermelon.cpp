#include<iostream>
using namespace std;

int main(){
    int n;
    cin>> n;
    if(n<1 or n>100)
        return 0;
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<n; j++)
        if((i+j)==n)
            if(i%2==0 and j%2==0)
                {    cout<<"Yes";
                    return 0;
                }

    }
    cout<<"No";

    return 0;
}