#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <stack>
#include <queue>
using namespace std;


//int main()
//{
//	stack<int,vector<int>> s1;
//	s1.push(1);//push���÷�
//	s1.push(2);
//	s1.push(3);
//	s1.push(4);
//	s1.push(5);
//
//	cout << s1.size() << endl;//size���÷�
//	while (!s1.empty())//empty���÷�
//	{
//		cout << s1.top() << " ";//top���÷�
//		s1.pop();//pop���÷���ջ���ʼ��5��pop��5����֮��ջ��Ϊ4���Դ�����
//	}
//	return 0;
//}

int main() {
    queue<int> q;

    // ������в���Ԫ��
    q.push(1);
    q.push(2);
    q.push(3);

    //�ж��Ƿ�Ϊ��
    cout << "IsEmpty: " << q.empty() << "\n";

    // ��ʾ���׺Ͷ�βԪ��
    cout << "Front: " << q.front() << "\n";
    cout << "Back: " << q.back() << "\n";

    // �Ƴ�����Ԫ��
    q.pop();

    // �ٴ���ʾ����Ԫ��
    cout << "Front after pop: " << q.front() << "\n";

    return 0;
}
