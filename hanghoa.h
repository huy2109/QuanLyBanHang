#pragma once
class HangHoa
{
protected:
	string tenhang;
	double gia;
public:
	HangHoa(){}
	HangHoa(string s1)
	{
		tenhang=s1;
	}
	//setter
	void sethang(string ten,double g)
	{
		tenhang=ten; gia=g;
	}
	
};
