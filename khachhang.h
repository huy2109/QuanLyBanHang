#pragma once
#include "connguoi.h"
class KhachHang : public ConNguoi
{
private:
	double tichluy;
public:
	KhachHang(){}
	KhachHang(string a1,string a2, string a3, string a4, string a5)
	{
		hoten=a1; namsinh=a2; quequan=a3; sdt=a4; cmtnd=a5;
	}
};
