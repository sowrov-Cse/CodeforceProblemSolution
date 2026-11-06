#include <iostream>
#include <string>


using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n<1 or n>100)
        return 0;
    string word[n];

    for(int i=0; i<n; i++)
    {
        cin>>word[i];
    }

    for(int i=0; i<n; i++)
    {
        if(word[i].length()>10)

        cout<<word[i].substr(0, 1)<< word[i].length()-2 << word[i].substr(word[i].length()-1)<<endl;

        else
            cout<<word[i]<<endl;


    }
    return 0;
}