#pragma once
#include "nhanvien.h"
#include "khachhang.h"
#include "hanghoa.h"

class HoaDon : public NhanVien, KhachHang, HangHoa
{
private:
	NhanVien nv;
	KhachHang kh;
	HangHoa hanghoa[999];
	double soluong[999];
	string ngaymua;
public:
	HoaDon(){}
	HoaDon(NhanVien nv,KhachHang kh, string ng);
	//setter
	void themHangHoa(HangHoa hh,double sl)
	{
		for (int i=0;i<999;i++)
			if (soluong[i]=0)
			{
				hanghoa[i]=hh;
				soluong[i]=sl;
				break;
			}
	}
	//getter
	NhanVien getNhanVien()const
	{
		return nv;
	}
	KhachHang getKhachHang()const
	{
		return kh;
	}
	string getngaymua()const
	{
		return ngaymua;
	}
	//methods
	double ThanhToan()const
	{
		double Tong=0;
		for (int i=0;i<999;i++)
			if (soluong[i]!=0)
			{
				Tong+=soluong[i]*gia[i];
			}
			else
				return Tong;
	}
};
