class Car
{
public:
	int Speed;    //定義 Speed 欄位
	void Turbo()  // Turbo 方法將 Speed 屬性加 1
	{
		this->Speed = this->Speed + 1; //this 代表類別本身，即 Car 類別
	}
	// Turbo 方法多載將 Speed 屬性加 n
	void Turbo(int n )
	{
		this->Speed = this->Speed  + n;
	}
};
