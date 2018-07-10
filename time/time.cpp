// time.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class CTime
{
private:
	int hour;
	int min;
	int sce;
public:
	CTime()
	{
		hour = 0;
		min = 0;
		sce = 0;
	}
	void display()
	{
		cout << hour << "  小时  " << min << "  分  " << sce << "  秒" << endl;
	}
	void setvalue(int H, int M, int S)
	{
		hour = H;
		min = M;
		sce = S;
	}
	CTime operator+(CTime & obj)
	{
		CTime obj_1;
		int old_H, old_M, old_S;
		old_H = hour + obj.hour;
		old_M = min + obj.min;
		old_S = sce + obj.sce;
		old_S = old_S + old_M * 60 + old_H * 3600;
		obj_1.setvalue(old_S / 3600, (old_S - (old_S / 3600)*3600) / 60, old_S % 60);
		return obj_1;
	}
};
int main()
{
	CTime A, B, C;
	A.setvalue(3, 32, 3);
	B.setvalue(3, 28, 3);
	C = A + B;
	C.display();
    return 0;
}

