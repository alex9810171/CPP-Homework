#include <iostream>
using namespace std;
int MaxValue(int a,int b) 
{
    int r;
    if (a>b) 
       r=a;
    else
       r=b;
    return r;
}
int main()
{
	int a,b,max;
    cout << "�п�J�ƭ� a=";
    cin >> a;
    cout << "�п�J�ƭ� b=";
    cin >> b;
    max=MaxValue(a,b); // ����j���� 
	cout << "���j���ƬO:" << max << endl;
	system("pause");
	return 0;
}
