#include <iostream>
#include <math.h>
using namespace std;

int Chusolonnhat(int n)
{
	int MAX = 0;		//Max bắt đầu từ 0 để so sánh
	while (n > 0)
	{
		int temp = n % 10;	//Chia lấy phần dư để lấy từng chữ số ra
		n /= 10;
		if (temp > MAX)		//Nếu biến phụ lớn hơn MAX thì cho MAX=temp và khai báo ra là okay
			MAX = temp;
	}
	return MAX;
}

int Chusonhonhat(int n)
{
	int MIN = 9;		//Min thì bắt đầu ngược lại từ chữ số lớn nhất là 9
	while (n > 0)
	{
		int temp2 = n % 10;	//Chia lấy phần để lấy từng chữ số giống vs trên
		n /= 10;
		if (temp2 < MIN)	//temp mà nhỏ hơn thì lấy MIN = temp đó và khai báo kết quả
			MIN = temp2;
	}
	return MIN;
}

int main()
{
	long long n;
	cout << "Nhap chu so nguyen duong:"; cin >> n;
	if (n <= 0)
	{
		cout << "Nhap lai so nguyen duong di ban" << endl;
		return 0;
	}
	else
	{
		cout << "Chu so lon nhat la: " << Chusolonnhat(n) << endl;
		cout << "Chu so nho nhat la: " << Chusonhonhat(n) << endl;
		return 0;
	}
}
