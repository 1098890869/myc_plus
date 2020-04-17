#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;


class A
{
public:
	virtual void show()
	{
		cout << "A" << endl;
	}
};

class B : public A
{
public:
	virtual void show() override
	{
		cout << "B" << endl;
	}
};

#include<iostream>
#include<string>
using namespace std;

int findLen(string& fir, string& sec)
{
	int len = 0;
	for (int i = 0; i < fir.size(); ++i)
	{
		int tmpi = i;
		int j = 0;
		for (j = 0; j < sec.size(); ++j)
		{
			if (fir[tmpi] == sec[j])
				++tmpi;
			else
				break;
		}
		if (j == sec.size())
		{
			++len;
			i += j;
		}
	}
	return len;
}

int main()
{
	vector<int> arr = { 5, 4, 3, 2, 1 };
	for (auto e : arr)
	{
		cout << e << endl;
	}
	return 0;
}