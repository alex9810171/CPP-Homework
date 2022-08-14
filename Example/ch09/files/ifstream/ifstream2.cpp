#include<iostream>
#include<fstream>
using namespace std;
#define size 30
int main()
{
	ifstream file;	  //(1)建立檔案物件	
	char buff;		  //(2)存放資料的緩衝區

    file.open("sample.txt",ios::in); //(3)開啟sample.txt檔案，讀取資料
    if (file.fail())
       cout << "error...";
    else
    {
		while(file.get(buff))
        {	//(4)讀取整行資料
			cout<<buff;	//(5)輸出檔案內容
		}		
    }
    file.close();
    cout<<endl;	
    system("pause");
    return 0;
}
