#include<iostream>
#include<stack>
#include<vector>
using namespace std;

//stack<,>第二个默认参数是deque在里面的操作实际上是用了deque的方法
int main() {
	//默认构造
	stack<int> s1;
	//拷贝构造
	stack<int> s2(s1); 
	//赋值操作
	s1 = s2;

	s2.push(5);
	s2.push(6);
	s2.pop();
	cout<<s2.top()<<endl;
	cout << s2.empty() << endl;
	cout << s2.size() << endl;
	//容器替换
	stack<int, vector<int>>s3;
	return 0;
}