#include "iostream"  
using namespace std; 
int main()
{
	int n[3]={1,2,3};
	int *p=n;
	int tot1=0,tot2=0;
	cout << "�H�}�C�����D�`�M\n";
	for (int i=0;i<3;i++)
 	   tot1 += n[i];
	cout << "�`�M tot1=" << tot1 << endl;
	// �H����
	cout << "�H���ШD�`�M\n";
	for (int i=0;i<3;i++)
 	   tot2 += *(p+i);
	cout << "�`�M tot2=" << tot2 << endl;

	system("pause");
	return 0;
}
