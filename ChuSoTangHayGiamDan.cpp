#include <iostream>
using namespace std;
int main()
{
	int n,sosau, sotrc, trc=0, sau=0;
	cout << "Nhap vao so nguyen duong n: ", cin >> n;
	sotrc = n % 10;	//Lấy ra phần đơn vị của số n 
	n = n / 10;		//Chia để lấy tiếp phần chục
	while (n != 0)
	{
		sosau = n % 10;	//Dùng lệnh lặp để lấy các chữ số còn lại trong n
		if (sosau > sotrc)	//Chữ số sau lớn hơn chữ số trước(tính theo trái sang phải) => gán trc true => giảm dần theo chiều trái sang phải
			trc = true;
		if (sotrc > sosau)	//Chữ số trước lớn hơn chữ số sau => gán sau true => tăng dần theo chiều T sang P
			sau = true;
		sotrc = sosau;		//Nếu số trc bằng số sau thì chia n cho 10 để tìm chữ số kế tiếp
		n = n / 10;
	}
	if (trc == false && sau == true)cout << "La so tang dan nha" << endl;
	if (sau == false && trc == true)cout << "La so giam dan nha" << endl;
	if (trc == true && sau == true || trc == false && sau == false)cout << "La so khong tang va khong giam" << endl;
	return 0;
}
