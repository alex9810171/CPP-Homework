#include <iostream>
using namespace std;
class Calculator    //�w�q Calculator �����O
{
private:
    int tot;
public:
    Calculator() // �غc�� 
    { tot=0; }  
    int Sum(int n)  //�p�� 1+2+... +n
    {
        for (int i=1;i<=n;i++)
           tot += i;
        return tot;
    }
};
class Computer:public Calculator  //�l���O�~�� Calculator  �����O
{
private:
    int tot;
public:
    Computer() // �غc�� 
    { tot=1; }  
    int Sum(int n)  //�p�� 1*2*...*n
    {
        for (int i=1;i<=n;i++)
           tot *= i;
        return tot;
    }
};
int main()
{
    Calculator Calculator;
    int n;
    cout << "��J n=";
    cin >> n;
	cout << "1+2+3 ... +n = " << Calculator.Sum(n) << endl; 
    Computer Computer; 
	cout << "1*2*3 ... *n = " << Computer.Sum(n) << endl;
	system("pause");
	return 0;
}
