#pragma once
class ConNguoi
{
protected:
	string hoten;
	string namsinh;
	string quequan;
	string sdt;
	string cmtnd;
public:
	ConNguoi(){}
	ConNguoi(string a1,string a2, string a3, string a4, string a5)
	{
		hoten=a1; namsinh=a2; quequan=a3; sdt=a4; cmtnd=a5;
	}
	
};
