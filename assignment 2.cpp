#include<bits/stdc++.h>
using namespace std;  
void leftrotate(string &c, int a)
{
    reverse(c.begin(), c.begin()+a);
    reverse(c.begin()+a, c.end());
    reverse(c.begin(), c.end());
}
 
int main()
{
int n;
    string str1 = " ";
    cout << "Enter String: ";
    getline (cin,str1);
    cout << "Enter the integer to leftrotate: ";
    cin>>n;
    leftrotate(str1, n);
    cout << str1 << endl;
    return 0;
}