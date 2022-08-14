#include <iostream>
using namespace std;
int Area(int a) 
{
    return a*a;
}
int Area(int a,int b) 
{
    return a*b;
}
int main()
{
	int a=10;
	int b=5;
	int c=6;
	int r1,r2;
    r1=Area(a);
    cout << "正方形=" << r1 << endl;
    r2=Area(b,c);
    cout << "矩形面積=" << r2 << endl;
 	system("pause");
	return 0;
}
