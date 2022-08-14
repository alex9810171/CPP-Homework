//讀取二進位檔案資料
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream file;	//建立檔案輸入物件	
    char buffer[300];
	//讀取二進位檔案sample02.dat
	//file.open("sample02.dat", ios::in|ios::binary);
	file.open("sample.txt", ios::in|ios::binary);
	if(file.fail())
		cout<<"檔案無法開啟...\n";
	else
    {
		while(!file.eof()) //判斷是否為檔案結尾
        {   
			//讀取資料
			file.read((char*) &buffer, sizeof(buffer));
			cout << buffer;
		}
	}	
    cout << endl;  	
	file.close();	//關閉檔案
	system("pause");
    return 0;
}
