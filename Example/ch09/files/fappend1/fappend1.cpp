#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream file;	// 建立檔案輸出物件	
	char no[6],name[8];
	char yn;
	//建立sample01.txt檔案，執行資料附加動作
	file.open("sample01.txt", ios::app);
	//判斷檔案是否能開啟′開啟成功才寫入資料
	if(file.fail()){
       cout << "檔案無法開啟!\n";
  	}
	else
	{
    	do 
        { 
            cout << "請輸入編號、品名\n";
            cin >> no >> name;           
    	    file << no << "\t" << name << "\n"; // 寫入資料
            cout << "是否繼續(Y/N)";
            cin >> yn;
        } while (yn=='Y' || yn=='y');  
        cout << "檔案建立完成!\n";        
    	file.close(); 	//關閉檔案
    }
	system("pause");
	return 0;
}
