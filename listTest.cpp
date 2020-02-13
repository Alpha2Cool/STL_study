#include <list>
#include <iostream>

using namespace std;
int main()
{
    list<int> l;
    l.push_back(0);
    l.push_front(1);
    l.push_back(2);
    l.emplace_front(4); 
    //emplace_back与push_back的区别是：如果插入一个对象，push_back要调用拷贝构造，而emplace_back不调用
    l.emplace_back(0);
    /*4 1 0 2 0*/
    l.pop_back();
    l.pop_front();
    /*1 0 2*/
    l.insert(++l.begin(),11);
    l.insert(--l.end(),10);
    /*1 11 0 10 2*/
    for(auto x:l)  cout << x << " ";  cout << endl;
    for(auto  it=l.begin();it!=l.end();it++) cout << *it << " "; cout << endl;
}
