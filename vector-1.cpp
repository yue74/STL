#include<iostream>
#include<vector>
using namespace std;

void pv( vector<int>& b) {
	for (vector<int>::iterator iter = b.begin(); iter != b.end(); iter++) {//vector<int>::iterator  迭代器类型
		cout << *iter << endl;

	}

}

int main() {
	vector<int> a;
	a = { 2,0,2,4 };
	cout << a[0]<<endl<<"----"<<endl;
	cout << a.capacity() << endl;//容量函数
	a.push_back(7);//扩容
	
	
	//形成{2，0，2，4，7}
	/*
	begin() end()前闭后开（指向的位置）
	2 0 2 4 
	。       。
	---------
	front（）和back（）指的是值
	*/

	cout << "begin:" << *a.begin() << endl;//迭代器和指针差不多
	cout << "end:" << *(a.end() - 1) << endl;

	cout << "front:" << a.front() << endl;
	cout << "back:" << a.back() << endl;

	cout << "-----" << endl;
	//1.//列表里面没有值
	vector<int> b1;
	pv(b1);
	//2.//初始化列表
	vector<int>b2 = { 1,2,3,4,5 };

	pv(b2);
	cout << "-----" << endl;
	//3.迭代器
	vector<int>b3(b2.begin(), b2.end());
	/*
	vector( InputIt first, InputIt last,
        const Allocator& alloc = Allocator() );】
		范围构造函数原型
		*/
	pv(b3);
	cout << "-----" << endl;
	//4.全0初始化;申请8个内存空间
	vector<int>b4(8);
	pv(b4);
	cout << "-----" << endl;
	//5.vector<类型>变量名（a,b）；申请a个内存空间每个元素初始化为b
	vector<int>b5(8, 6);
	pv(b5);
	cout << "-----" << endl;
	//6.拷贝构造函数
	vector<int>b6(b2);
	pv(b6);







	return 0;
}