#include <iostream>
#include <time.h>  // 必須引用 time.h 標頭檔
using namespace std;
class Lotto
{
    private:
    int value;
    public:
    int Next(int m,int n) // 產生  m~n 之間亂數(包含 m,n)
    {
	    unsigned int seed =(unsigned int)time(NULL); // 以系統時間當亂數種子
	    srand(seed);
	    value=m+ rand()% (n-m+1);  // 亂數 m<=value<=n(包含 m,n) 
	    return value;
    }   
    void show(int *p) // 顯示樂透號碼   
    {   
        cout << "本期樂透號碼: ";
        for (int i = 0; i < 6; i++)
           cout << p[i]<< " ";
        cout << endl;
        return;
    }
    void sort(int *p) // 樂透號碼排序
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
