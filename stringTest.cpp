#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s,ss,sss;
    cout <<"please input string: ";
    getline(cin, s); 
    // cin >> s;
    cout << s << endl;
    ss+="hello world";
    auto it = ss.begin();
    cout << *it << endl;
    sss = "9665426";
    sort(sss.begin(),sss.end());
    cout << sss << endl;
    sss = "1234567";
    sss.erase(sss.begin());
    cout << sss << endl;
    sss = "abcdef";
    sss = sss.substr(2,3);//从sss[2]开始往后取3个
    cout << sss << endl; 

    
    //print sss
    for(string::iterator it = sss.begin();it!=sss.end();it++) cout <<*it;
    cout << endl;
    for(auto it = sss.begin();it!=sss.end();it++) cout <<*it;
    cout << endl;
    //c++11新特性
    for(auto x:sss) cout << x;
    cout << endl;
    return 0;
}