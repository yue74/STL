#include<iostream>
#include<map>
using namespace std;

void printmap(const map<int, int>& m) {
	for (map<int, int>::const_iterator it = m.begin(); it != m.end(); ++it) {
		cout << "key =" << it->first << " " << "val =" << it->second << endl;
	}
	cout << "---------------" << endl;
}

int main() {
	//插入
	map<int, int> m1;
	//1.
	m1.insert(pair<int, int>(1, 10));
	//2.
	m1.insert(make_pair(3, 20));
	//3.
	m1.insert(map<int, int>::value_type(2, 78));
	//4.[]运算符重载
	m1[4] = 6;
	cout << "m1:" << endl;
	printmap(m1);
	//5.
	pair<map<int,int>::iterator,bool>ret = m1.insert(make_pair(3, 21));
	cout << "插入(3,21)：" << " " << ret.second << endl;
	//6.
	m1[3] = 22;//能直接改变原来的值
	m1[5];//若没有则插入，val默认为0
	//所以在访问的时候有风险
	printmap(m1);
	//2.查找
	map<int, int> ::iterator it = m1.find(5);
	//若找到返回当前的迭代器，否则返回m1.end();
	//3.删除
	m1.erase(5);//通过key
	m1.erase(m1.begin());//通过迭代器
	m1.erase(m1.begin(), m1.end());//迭代器区间
	m1.clear();//全删
	printmap(m1);
	//4.修改
	//[]
	//5.数据统计
	//对于map里面只有0次和1次
	map<int, int> m2 = {
		pair<int,int>(1,4),
		pair<int,int>(3,30),
		pair<int,int>(2,80),
		pair<int,int>(4,90),
	};
	for (int i = -1; i < 3; ++i) {
		cout << i << "出现的次数是" << m2.count(i) << endl;
	}

	return 0;
}
