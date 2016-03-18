#include <iostream>

using namespace std;

class OrangeBox3
{
private:
	int total;
public:
	void Add(int num);
	void Del(int num);
	void Empty();
	int GetTotal()
	{
		return total;
	}
};

void OrangeBox3::Add(int num)
{
	total += num;
}

void OrangeBox3::Del(int num)
{
	total -= num;
	if (total < 0)
	{
		Empty();
	}
}

void OrangeBox3::Empty()
{
	total = 0;
}

int main3()
{
	OrangeBox3 obox;
	obox.Empty();
	obox.Add(5);
	obox.Del(5);
	int nResult = obox.GetTotal();
	cout << nResult << endl;

	return 0;
}