#include<iostream>
#include<vector>
using namespace std;

void pv(vector<int>&v) {
	for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++) {
		cout << *iter << " ";

	}
	cout << endl;
}

int main() {
	//1.pop_back
	vector<int> v = { 9,8,5,2,1,1 };
	v.pop_back();
	pv(v);
	cout << "-----" << endl;
	//2.erase
	vector<int>::iterator iter = v.erase(v.begin() + 1);//执行之后会返回删除的下一位的一个迭代器
	pv(v);
	cout << *iter <<endl;
	cout << "-----" << endl;
	//clear  全部删除
	v.clear();
	pv(v);
	cout << "----" << endl;

	//容量与大小
	vector<int>a = { 8,8,8,9,5,6 };
	pv(a);
	cout << a.size() << endl;
	cout << a.capacity() << endl;
	cout << "----" << endl;
	a. push_back(7);
	cout << a.size() << endl;
	cout << a.capacity() << endl;//当size和capacity相等的时候才会扩容
	cout << "----" << endl;
	a.push_back(5);
	cout << a.size() << endl;
	cout << a.capacity() << endl;
	cout << "----" << endl;
	a.push_back(4);
	cout << a.size() << endl;
	cout << a.capacity() << endl;//到这size和capacity才相等，所以之前就不会变，如果是小数则向小取整
	cout << "----" << endl;
	a.resize(12);
	cout << a.size() << endl;
	cout << a.capacity() << endl;//9*1.5=13.5==13
	pv(a);
	cout << "----" << endl;
	a.resize(14,9);
	cout << a.size() << endl;
	cout << a.capacity() << endl;//13*1.5=19.5==19
	pv(a);
	//当size足够大则capacity直接返回size
	cout << "----" << endl;
	a.resize(6);//size变capacity不会变
	cout << a.size() << endl;
	cout << a.capacity() << endl;
	pv(a);





	
	


	return 0;
}