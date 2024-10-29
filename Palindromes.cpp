#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string &k)
{
    int low=0;
    int high=k.length()-1;
    while(low<high)
    {
        if(k[low]!=k[high]) return false;
        low++;
        high--;
    }
    return true;
}
int palindromes()
{
    string s;
    int ans=0;
    ifstream cin;
    cin.open("words_alpha.txt");
    ofstream cout;
    cout.open("Palindromes.txt");
    while(cin>>s)
    {
        if(isPalindrome(s)){
            ans++;
            cout<<s<<"\n";
        } 
    }
    cout.close();
    cin.close();
    return ans;
}
int main()
{
    //main
    cout<<"There are "<<palindromes()<<" palindromes";
}
