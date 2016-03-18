////반복자
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
//	/*반복자를 사용하는 방법*/
//	for (i_cur = itr_first; i_cur != itr_last; i_cur++)
//	{
//		// 이터레이터에서 값에 접근할 경우에는 *를 붙입니다.
//		cout << *i_cur << endl;
//	}
//
//	//빈칸(엔터) 출력
//	cout << endl;
//
//	/*인덱스를 사용하는 방법 1*/
//	for (vector<int>::size_type i = 0; i != v1.size(); ++i)
//	{
//		cout << v1[i] << endl;
//	}
//
//	//빈칸(엔터) 출력
//	cout << endl;
//
//	/*인덱스를 사용하는 방법 1*/
//	for (int i = 0; i < v1.size(); ++i)
//	{
//		cout << v1.at(i) << endl;
//	}
//
//	return 0;
//}