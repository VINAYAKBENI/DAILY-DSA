#include <bits/stdc++.h>
using namespace std;

string reverseWord(string str);

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        cout << reverseWord(s) << endl;
    }
    return 0;
}


// My Approach (Swapping)

string reverseWord(string str)
{

    // Your code here
    int a = str.size() - 1;
    for (int i = 0; i < str.size() / 2; i++)
    {
        swap(str[i], str[a]);
        a--;
    }
    return str;
}
/*
    My Approach (Stroing In Reverse Way)

string reverseWord(string str){
    
  //Your code here
  int a=str.size()-1;
  string ans;
  for(int i=str.size()-1;i>=0;i--){
      ans+=str[i];
  }
  return ans;
}
*/