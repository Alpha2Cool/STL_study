#include <map>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return  a.first>b.first; //降序
}

int main()
{
    map<int, string> student;
    student.insert(pair<int, string>(001, "student_one"));
    student.insert(pair<int, string>(002, "student_two"));
    // pair<map<int, string>::iterator, bool> stupair;
    // stupair = pair()

    /*map构造*/
    map<int, int>  m1; //map为有序的树状结构（有序是指输出时是按照key的顺序输出的）
    m1[2] = 4;
    m1[3] = 1;
    m1[1] = 9;
    /*迭代器*/
    for(map<int, int>::iterator it = m1.begin(); it!=m1.end();it++) 
        cout << it->first << " " << it->second  << endl;
    cout << endl;
    for(auto x:m1)
        cout << x.first  << " " << x.second << endl;
    cout << endl;
    unordered_map<int, int>  m2; //unordered_map为无序的哈希结构
    m2[2] = 4;
    m2[3] = 1;
    m2[1] = 9;
    /*迭代器*/
    for(unordered_map<int, int>::iterator it = m2.begin(); it!=m2.end();it++) 
        cout << it->first << " " << it->second  << endl;
    cout << endl;
    for(auto x:m2)
        cout << x.first  << " " << x.second << endl;
    cout << endl;
    /*map不能进行sort,需要转为vector才能用sort排序*/
    /*
    sort(m1.begin(), m1.endl(), cmp); 
    没有与参数列表匹配的 重载函数 "sort" 实例 -- 参数类型为:  
    (std::_Rb_tree_iterator<std::pair<const int, int>>, <error-type>, <error-type>)
    */
    /*map转为vector*/
    vector<pair<int, int>> v(m1.begin(), m1.end());
    sort(v.begin(), v.end(), cmp);
    for(auto x:v)  cout << x.first << " " << x.second << endl;
} 