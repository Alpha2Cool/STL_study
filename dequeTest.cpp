#include <deque>
#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_back(0);
    d.push_front(3);
    d.push_front(-1);
    for(auto x:d) cout << x << " "; cout << endl;
    /*排序*/
    sort(d.begin(),d.end(),greater<int>());
    for(deque<int>::iterator it=d.begin();it!=d.end();it++) cout << *it << " "; cout << endl;

    d.pop_back();
    d.pop_front();
    for(auto x:d) cout << x << " "; cout << endl;
} 
