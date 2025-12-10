#include<iostream>
#include<list>
using namespace std;

void printList(const list<int>& l) {
	for (list<int>::const_iterator it = l.begin(); it != l.end(); ++it) {
		cout << *it << ' ';
	}
	cout << endl;
}

int cmp(int a, int b) {
	return a > b;//逆序
}
int main() {

	list<int> l1 = { 1,2,3,4,5 };
	list<int> l2 = { 5,4,3,2,1 };
	//push_front
	l1.push_front(6);
	//push_back
	l1.push_back(7);
	//insert(迭代器，数量，值)
	//因为list不支持随机访问，所以不可以在迭代器后面+9.....；只能++
	l1.insert(++l1.begin(),2,8);
	//insert(迭代器，迭代器开始的位置，迭代器结束的位置)
	l1.insert(++l1.begin(), l2.begin(), l2.end());
	printList(l1);
	//pop_front
	l2.pop_front();
	l2.pop_back();
	//erase(会返回一个删除后链表的begin（）位置)
	l2.erase(l2.begin());
	l2.erase(++l2.begin(), l2.end());
	printList(l2);
	//clear
	l2.clear();
	//不支持随机访问
	list<int>l3({ 1,2,3 });
	//链表反转
	l3.reverse();
	printList(l3);
	//链表排序
	l3.sort();//正向排序
	printList(l3);
	l3.sort(cmp);
	printList(l3);


	return 0;
}