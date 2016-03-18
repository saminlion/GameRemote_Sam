#include <iostream>

using namespace std;

class OrangeBox4
{
public:
	OrangeBox4()
	{
		cout << "오브젝트 생성" << endl;
	}

	~OrangeBox4()
	{
		cout << "오브젝트 소멸" << endl;
	}
};

int main4()
{
	OrangeBox4 obox;

	return 0;
}