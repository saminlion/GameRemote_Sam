#include <iostream>

using namespace std;

class OrangeBox2
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

void OrangeBox2::Add(int num)
{
	total += num;
}

int main2()
{
	return 0;
}