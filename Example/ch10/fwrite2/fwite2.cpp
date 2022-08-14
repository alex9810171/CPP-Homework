#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    const int size=200; // 最多可輸入 200 個字元 
	fstream file;	// 建立檔案輸出物件	
	char buffer[size];   // 宣告 字元陣列 
	//建立sample01.txt檔案，執行寫入動作並將資料附加在檔案結尾
	file.open("sample01.txt", ios::out | ios::app); 
	//判斷檔案是否能開啟，開啟成功才寫入資料
	if(file.fail())
       cout << "檔案無法開啟!\n";
	else
	{
        cout << "請輸入資料："; 
        // 使用 cin.getline(buffer,strlen(buffer),'\n') 輸入字串 
        cin.getline(buffer,size,'\n');
        cout << buffer << endl; // 顯示在螢幕 
        file.write(buffer,strlen(buffer)); //將 buffer 寫入檔案
        cout << "檔案建立完成 !\n";
    	file.close(); 	//關閉檔案
    }
	system("pause");
	return 0;
}
