#include <set>
#include <unordered_set>
#include <iostream>

using namespace std;

int main ()
{
    set<int> s; //树状结构，有序
    unordered_set<int> s0; //哈希结构，无序，用法与set一致
    s.insert(1);
    s.insert(0);
    s.insert(1);
    s.insert(0);
    s.insert(3);
    cout << s.size() << endl;
    for(auto x:s) cout << x << " "; cout << endl;
    for(set<int>::iterator it=s.begin();it!=s.end();it++) cout << *it << " "; cout << endl;
    return 0;
} 


