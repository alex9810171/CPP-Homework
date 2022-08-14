#include "iostream"  
using namespace std; 
int main()
{
	int n[3]={1,2,3};
	int *p=n;
	int tot1=0,tot2=0;
	cout << "以陣列元素求總和\n";
	for (int i=0;i<3;i++)
 	   tot1 += n[i];
	cout << "總和 tot1=" << tot1 << endl;
	// 以指標
	cout << "以指標求總和\n";
	for (int i=0;i<3;i++)
 	   tot2 += *(p+i);
	cout << "總和 tot2=" << tot2 << endl;

	system("pause");
	return 0;
}
