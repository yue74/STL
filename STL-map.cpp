#include<iostream>
using namespace std;
#include<map>//树型结构（红黑树）

//元素都是pair（key，value），按key排序

void printmap(const map<int, int>& m) {
	for (map<int, int>::const_iterator it = m.begin(); it != m.end(); ++it) {
		cout << "key =" << it->first << " " << "val =" << it->second << endl;
	}
	cout << "---------------" << endl;
}

int main() {
	pair<int, int> p1;
	p1.first = 13;
	p1.second = 14;
	pair<string, int> p2 = make_pair("吴荣涛", 99);
	//1.默认
	map<int, int> m1;
	//2.初始化列表
	map<int, int> m2_1 = {
		pair<int,int>(1,10),
		pair<int,int>(4,24),
		pair<int,int>(3,43),
		pair<int,int>(2,15),
	};
	cout << "m2_1:" << endl;
	printmap(m2_1);
	map<int, int> m2_2 ({
		pair<int,int>(1,11),
		pair<int,int>(4,44),
		pair<int,int>(3,33),
		pair<int,int>(2,22),
	});
	//3.迭代器
	map<int, int> m3(m2_2.begin(), m2_2.end());
	cout << "m3:" << endl;
	printmap(m3);
	//4.拷贝构造
	map<int, int> m4(m2_1);
	cout << "m4:" << endl;
	printmap(m4);

	//赋值操作
	//1.直接赋值
	map<int, int> m5 = m4;
	cout << "m5:" << endl;
	printmap(m5);
	//2.初始化列表赋值
	map<int, int> m6;
	m6 = {
		pair<int,int>(1,11),
		pair<int,int>(4,44),
		pair<int,int>(3,33),
		pair<int,int>(2,22),
	};
	//大小操作
	cout << "m1:" << m1.empty() << " "<<"size:" << m1.size() << endl;


	return 0;
}