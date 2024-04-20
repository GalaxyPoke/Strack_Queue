#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <stack>
#include <queue>
using namespace std;


//int main()
//{
//	stack<int,vector<int>> s1;
//	s1.push(1);//push的用法
//	s1.push(2);
//	s1.push(3);
//	s1.push(4);
//	s1.push(5);
//
//	cout << s1.size() << endl;//size的用法
//	while (!s1.empty())//empty的用法
//	{
//		cout << s1.top() << " ";//top的用法
//		s1.pop();//pop的用法。栈顶最开始是5，pop将5弹出之后，栈顶为4，以此类推
//	}
//	return 0;
//}

int main() {
    queue<int> q;

    // 向队列中插入元素
    q.push(1);
    q.push(2);
    q.push(3);

    //判断是否为空
    cout << "IsEmpty: " << q.empty() << "\n";

    // 显示队首和队尾元素
    cout << "Front: " << q.front() << "\n";
    cout << "Back: " << q.back() << "\n";

    // 移除队首元素
    q.pop();

    // 再次显示队首元素
    cout << "Front after pop: " << q.front() << "\n";

    return 0;
}
