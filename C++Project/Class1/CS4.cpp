#include <iostream>

using namespace std;

class OrangeBox4
{
public:
	OrangeBox4()
	{
		cout << "������Ʈ ����" << endl;
	}

	~OrangeBox4()
	{
		cout << "������Ʈ �Ҹ�" << endl;
	}
};

int main4()
{
	OrangeBox4 obox;

	return 0;
}