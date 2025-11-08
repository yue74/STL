#include<iostream>
#include<list>
using namespace std;

void pl(const list<int>& l) {
	for (list<int>::const_iterator it = l.begin(); it != l.end(); ++it) {
		cout << *it << " ";
	}
	cout << endl;
}

int main() {
	//双向循环链表
	//默认构造函数
	list<int> l1;//有一个虚拟头节点
	cout << "l1:";
	pl(l1);
	//初始化列表
	list<int> l2_1 = { 9,8,7,6,5 };// 走的构造函数
	cout << "l2_1:";
	pl(l2_1);
	list<int> l2_2({ 9,8,7,1,5 });//一样的走的构造函数
	//迭代器
	list<int> l3(l2_2.begin(), l2_2.end());
	cout << "l3:";
	pl(l3);
	//a个b初始化
	list<int>l4(5, 6);
	cout << "l4:";
	pl(l4);
	//拷贝构造
	list<int>l5(l4);
	cout << "l5:";
	pl(l5);
	//赋值
	list<int>l6;
	l6 = l2_1;
	cout << "l6:";
	pl(l6);
	//assign赋值
	list<int>l7;
	l7.assign(l6.begin(), l6.end());
	cout << "l7:";
	pl(l7);
	//assign初始化列表;（a个b）

	//empty
	//size
	//resize(a个b)多于的为b
	cout << l7.size() << endl;
	cout << l7.empty() << endl;
	l7.resize(8,1);
	cout << l7.size() << endl;
	pl(l7);

	return 0;
}