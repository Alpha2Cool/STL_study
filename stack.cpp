#include<iostream>
#include<stack>
#include<string>
#include<sstream>
#include<algorithm>

using namespace std;

/*进制转换*/
int d2b(int decimal)
{
    int result = 0;
    stack<int> bi;
    while(decimal)
    {
        bi.push(decimal%2);
        decimal/=2;
    }
    while(!bi.empty())
    {
        result = result*10 + bi.top();
        bi.pop();
    }
    return result;
}

/*字符串逆序*/
void reverse_string(string sss)
{
    stringstream ss;
    string mmm;
    stack<string> st;
    ss << sss;
    while(ss >> mmm)
    {
        st.push(mmm);
    }
    while(!st.empty())
    {
        cout << st.top(); cout << " ";
        st.pop();
    }
    cout << endl;
}

/*字符串转数字*/
int str2int1(string s)
{
    stringstream ss;
    int num;
    ss << s;
    ss >> num;
    return num;
}

int str2int2(string s)
{
    return stoi(s);
}

/*数字转字符串*/
string int2str1(int num)
{
    string str;
    stringstream ss;
    ss << num;
    ss >> str;
    return str;
}

string int2str2(int num)
{
    return to_string(num);
}

int main()
{
    /**初始化**/
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << s.top() << endl; 
    s.pop();
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;

    string sss = "hello world";
    // getline(cin, sss);
    reverse_string(sss);

    int decimal = 20;
    cout << d2b(decimal) << endl;

    string str1 = "1234";
    cout << str2int1(str1) << endl;
    cout << str2int2(str1) << endl;

    int num = 1234;
    cout << int2str1(num) << endl;
    cout << int2str2(num) << endl;
    return 0;   
}

