#include <iostream>
using namespace std;
struct Rectangle
{
	float Height,Width;
};
int main()
{
  	struct Rectangle Rect1;
  	cout << "ªø="; 
  	cin >> Rect1.Height;
  	cout << "¼e=";
  	cin >> Rect1.Width;
  	cout << "­±¿n=" << Rect1.Height * Rect1.Width << endl;
  	system("pause");
  	return 0;
}
