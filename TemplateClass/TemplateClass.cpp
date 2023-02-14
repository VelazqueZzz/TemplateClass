#include <iostream>
using namespace std;

template <typename T>
class TTest
{
public:
	TTest(T);
	T GetX(void);
private:
	T x;
};

template <typename T>
TTest<T>::TTest(T x)
{
	TTest::x = x;
}
template <typename T>
T TTest<T>::GetX(void)
{
	return x;
}
int main()
{
	TTest <int>test(10);
	cout << test.GetX() << endl;
	return 0;
}

