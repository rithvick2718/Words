#include<bits/stdc++.h>
using namespace std;
bool Alphabets_in_Rev(string &k)
{
    int len=k.length();
    if(len==1) return false;
    for(int i=0; i+1<len; i++)
    {
        if(k[i]<k[i+1]) return false;
    }
    return true;
}
int WordsWithAlphabetsInReverse()
{
    string s;
    int ans=0;
    ifstream cin;
    ofstream cout;
    cin.open("words_alpha.txt");
    cout.open("WordsWithAlphabetsInReverse.txt");
    while(cin>>s)
    {
        if(Alphabets_in_Rev(s)){
            ans++;
            cout<<s<<endl;
        }
    }
    cout.close();
    cin.close();
    return ans;
}
int main()
{
    //MAIN
    cout<<"The number of words with Alphabets in Reverse Order is "<<WordsWithAlphabetsInReverse()<<endl;
}