#include <iostream>
using namespace std;
class A  //父類別 A
{
public:
	int n;
	A(){n=1;}      // 自定預設建構式n=1
	A(int x){n=x;} // 自定多載建構式 n=x
};

class B : public A //B 子類別繼承父類別  A
{
public:
    //子類別必須自定預設建構式
	B():A()    // 子類別呼叫父類別的預設建構式
	{}   
	B(int x)   // 子類別自定多載建構式
	{ n=x + 5;}    
};

int main()
{
    B B1;
    cout << "B1.n=" << B1.n << endl; // B1.n=1
    B B2(10);
    cout << "B2.n=" << B2.n << endl; // B2.n=15
	system("pause");
	return 0;
}
