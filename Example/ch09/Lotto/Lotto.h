#include <iostream>
#include <time.h>  // �����ޥ� time.h ���Y��
using namespace std;
class Lotto
{
    private:
    int value;
    public:
    int Next(int m,int n) // ����  m~n �����ü�(�]�t m,n)
    {
	    unsigned int seed =(unsigned int)time(NULL); // �H�t�ήɶ���üƺؤl
	    srand(seed);
	    value=m+ rand()% (n-m+1);  // �ü� m<=value<=n(�]�t m,n) 
	    return value;
    }   
    void show(int *p) // ��ֳܼz���X   
    {   
        cout << "�����ֳz���X: ";
        for (int i = 0; i < 6; i++)
           cout << p[i]<< " ";
        cout << endl;
        return;
    }
    void sort(int *p) // �ֳz���X�Ƨ�
    {   
        int tmp;
        for (int i=0;i<5;i++)  
        {     
           for (int j = i+1; j < 6; j++)
           {
               if (*(p+i)>*(p+j))
               {
                   tmp=*(p+i);*(p+i)=*(p+j);*(p+j)=tmp;       
               }
           }
        }
    }
};
