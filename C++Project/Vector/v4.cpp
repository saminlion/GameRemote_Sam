//// �������� �����ε� :
//// C++ ������ +�� - ���� �̹� ���ǵ� �����ڿ� �������� ����� ������ �� �ִ�.
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class SimpleTime
//{
//public:
//	SimpleTime() {};
//	SimpleTime(int h, int m)
//	{
//		hour = h;
//		minute = m;
//	}
//	SimpleTime  operator+(const SimpleTime &st2);
//
//	int hour;
//	int minute;
//};
//
//SimpleTime SimpleTime::operator+(const SimpleTime &st)
//{
//	int hour_buf, minute_buf, total;
//
//	total = (hour * 60 + minute) + (st.hour * 60 + st.minute);
//	hour_buf = total / 60;
//	minute_buf = total % 60;
//
//	return SimpleTime(hour_buf, minute_buf);
//}
//
//int main(void)
//{
//	SimpleTime st1(5, 30);
//	SimpleTime st2(2, 20);
//	SimpleTime st3;
//
//	st3 = st1 + st2;
//
//	cout << st3.hour << "�ð� " << st3.minute << "��" << endl;
//
//	return 0;
//}