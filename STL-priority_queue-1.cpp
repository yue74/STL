#include<iostream>
using namespace std;
#include<queue>

int main(){
	//数组实现堆
	//线性模拟树
	//最大优先队列
	priority_queue<int> q1;//比较函数a<b
	//最小优先队列
	priority_queue<int, vector<int>, greater<int>> q2;//a>b
	q1.push(2);
	q1.push(1);
	q1.push(3);
	q1.push(9);
	q1.push(13);
	q1.push(17);
	cout << q1.top() << endl;
	q1.pop();
	cout << q1.top() << endl;
	cout << q1.size() << endl;
	q2.push(2);
	q2.push(1);
	q2.push(3);
	q2.push(9);
	q2.push(13);
	q2.push(0);
	cout << q2.top() << endl;
    q2.pop();
	cout << q2.top() << endl;
	cout << q2.size() << endl;
	cout << "-----------------" << endl;

	struct type {
		int key;
		int val;
		type() {
			key = val = 0;
		}
		type(int k,int v) {
			key = k; val = v;
		}
		bool operator<(const type& t)const {
			return key < t.key;//用于自定义类型的插入比较，>即小顶堆
		}
	};
	priority_queue<type> q3;
	q3.push(type(6,1));
	q3.push(type(3, 2));
	//emplace
	q3.emplace(9, 7);
	cout << q3.top().key << endl;


	return 0;
}