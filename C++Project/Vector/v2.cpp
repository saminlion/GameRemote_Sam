////�ݺ���
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main(void)
//{
//	vector<int> v1;
//
//	v1.push_back(10);
//	v1.push_back(11);
//	v1.push_back(15);
//
//	vector<int>::iterator itr_first, itr_last, i_cur;
//
//	itr_first = v1.begin();
//	itr_last = v1.end();
//
//	/*�ݺ��ڸ� ����ϴ� ���*/
//	for (i_cur = itr_first; i_cur != itr_last; i_cur++)
//	{
//		// ���ͷ����Ϳ��� ���� ������ ��쿡�� *�� ���Դϴ�.
//		cout << *i_cur << endl;
//	}
//
//	//��ĭ(����) ���
//	cout << endl;
//
//	/*�ε����� ����ϴ� ��� 1*/
//	for (vector<int>::size_type i = 0; i != v1.size(); ++i)
//	{
//		cout << v1[i] << endl;
//	}
//
//	//��ĭ(����) ���
//	cout << endl;
//
//	/*�ε����� ����ϴ� ��� 1*/
//	for (int i = 0; i < v1.size(); ++i)
//	{
//		cout << v1.at(i) << endl;
//	}
//
//	return 0;
//}