#include<iostream>
#include<vector>
using namespace std;

void pv(vector<int>& v) {
	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter) {
		cout << *iter << " ";
	}
	cout << endl;
}

int main() {
	vector<int> v = { 9,8,5,2,1,1 };
	pv(v);
	cout << "-----" << endl;
	//1.直接赋值
	vector<int>v1 = v;
	pv(v1);
	cout << "-----" << endl;
	//2.assign(迭代器)
	vector<int>v2;
	v2.assign(v.begin(), v.end());
	pv(v2);
	cout << "-----" << endl;
	//3.assgin直接赋值列表
	vector<int>v3;
	v3.assign({ 1,2,3,4,5,6 });
	pv(v3);
	cout << "-----" << endl;
	//4.assgin初始化a个b
	vector<int>v4;
	v4.assign(8, 6);
	pv(v4);
	cout << "-----" << endl;
	//5.数据插入push_back()
	vector<int>v5;
	for (int i = 0; i < 10; ++i) {
		v5.push_back(i);
	}
	pv(v5);
	cout << "-----" << endl;
	//insert(,)
	vector<int>v6 = v5;
	v6.insert(v6.end()-1, 10);
	pv(v6);

	

	return 0;
}