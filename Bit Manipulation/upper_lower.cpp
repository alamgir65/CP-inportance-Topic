#include<bits/stdc++.h>
using namespace std;
int main()
{   
    char c='M';
    char a=(c | (1<<5));
    char b=(c | ' ');
    cout<<a<<" "<<endl;

    char C='a';
    char A=(c & (~(1<<5)));
    char B=(c & '_');
    cout<<A<<" "<<B<<endl;
    return 0;
}