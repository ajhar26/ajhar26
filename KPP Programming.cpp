// NAMA     : MUHAMMAD AJHAR HAFIZH
// NRP	: 5005221099
// JURUSAN	: BIOLOGI

#include <iostream>
#include <cmath>

using namespace std;

#define GRAVITASI 10 //10 m/s^2
#define START_PENGUKURAN 1 //pengukuran dimulai dari 1 meter
#define SUDUT 45 //sudut elevasi tembakan

int main()
{
	double elevasiXmax;
	int XMax,V0;
	float VTan,V0After,VtanAfter;
	
	elevasiXmax=SUDUT*2*3.14159/180;
	
	cin >> VTan;
	if(VTan>=1 && VTan<=10)
	{
		V0=VTan-1;
	}else if(VTan>=11 && VTan<=20)
	{
		V0=VTan-3;
	}else if(VTan>=21 && VTan<=30)
	{
		V0=VTan-5;
	}else
	{
		cout << "!! Batas input kecepatan tangensial maxnya cuma 30 !!" << endl;
	}
	
	XMax=pow(V0,2)*sin(elevasiXmax);
	XMax=XMax/GRAVITASI;
	
	cout << XMax << " ";
	
	V0_after=sqrt(XMax*GRAVITASI/sin(elevasiXmax));
	
	if(VTan>=1 && VTan<=10)
	{
		VtanAfter=V0After+1;
	}else if(VTan>=11 && VTan<=20)
	{
		VtanAfter=V0After+3;
	}else if(VTan>=21 && VTan<=30)
	{
		VtanAfter=V0After+5;
	}
	
	cout << VtanAfter;
}
