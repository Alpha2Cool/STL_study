#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> v0;
    vector<int> v1(3);
    vector<int> v2(3,6);
    vector<int> v3{1,2,3};
    for(auto x:v0) cout << x; cout << endl;
    for(auto x:v1) cout << x; cout << endl;
    for(auto x:v2) cout << x; cout << endl;
    for(auto x:v3) cout << x; cout << endl;
    cout << v3[1] << " " << v3.at(2) << endl;

    vector<int> vv;
    vv.push_back(2);
    vv.push_back(2);
    vv.push_back(2);
    vv.push_back(3);
    for(auto x:vv) cout << x; cout << endl;
    vv.resize(10);
    for(auto x:vv) cout << x; cout << " " << vv.size() << endl;

    vv.erase(vv.begin());
    vv.erase(--vv.end());
    for(auto x:vv) cout << x; cout << endl;

    cout << vv.front();
    cout << " " << vv.back() <<  endl;

    vector<int> vvv{9,3,4,2,-1,-5};
    sort(vvv.begin(), vvv.end());  //默认为sort(vvv.begin(), vvv.end(), less<int>());
    for(auto x:vvv) cout << x; cout << endl;

    sort(vvv.begin(),vvv.end(), greater<int>());
    for(auto x:vvv) cout << x; cout << endl;

    reverse(vvv.begin(), vvv.end());
    for(auto x:vvv) cout << x; cout << endl;

    for(vector<int>::iterator it = vvv.begin(); it!=vvv.end(); it++) cout << *it; cout << endl;
    for(auto it = vvv.begin(); it!=vvv.end(); it++) cout << *it; cout << endl;
    return 0;
}

