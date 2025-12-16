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
	vector<int> v1 = { 9,8,7,6,5 };
	cout << v1[2] << endl;
	cout << v1.at(2) << endl;//能检查下标越界
	//内存交换
	vector<int> v2 = { 1,2,3,4,5,};
	cout << "v1:";
	pv(v1);
	cout << "v2:";
	pv(v2);
	v2.swap(v1);
	cout << "v1:";
	pv(v1);
	cout << "v2:";
	pv(v2);
	cout << "------" << endl;
	//缩容
	v1.resize(1000000);
	v1.resize(5);
	cout << v1.capacity() << endl;
	vector<int>(v1).swap(v1);//匿名对象
	cout << v1.capacity() << endl;//拷贝构造时容量与拷贝进来的内存一样
	//所以v1的容量为匿名对象的容量
	 cout << "------" << endl;
	//内存清理
	 v2.resize(1000000);
	 v2.clear();//里面的元素没有了但容量还在
	 cout << v2.capacity() << endl;
	 vector<int>({}).swap(v2);
	 cout << v2.capacity() << endl;

	 

	return 0;

}
