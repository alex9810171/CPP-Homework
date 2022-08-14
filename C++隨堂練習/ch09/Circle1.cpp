#include <iostream>
using namespace std;
#define PI 3.14159
class Circle
{
	public:
        int Radius;   
		float Area()
        { return PI * this->Radius * this->Radius; }
};
int main()
{
	Circle obj; 
	cout << "¥b®|="; 
	cin >> obj.Radius;
	cout << "¶ê­±¿n=" << obj.Area() << endl;
	system("pause");
	return 0;
}
