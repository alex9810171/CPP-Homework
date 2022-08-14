class Car
{
public:
	int Speed;    //定義 Speed 欄位
	Car()  // 預設建構式         
	{
		this->Speed = 70;
	}

	Car(int n) //建構式多載
	{
		this->Speed =  n;
	}
};
