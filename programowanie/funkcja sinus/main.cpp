#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char** argv) 
{
	//char znak= '*';
	//cout << znak;
	double x,y,k;
	cout<<fixed<<setprecision(3);
	cout << setw(7) << "x" << setw(5)<<" "<<setw(7) << "sin(x)"; 
	cout << setw(5) << "-1" << setw(29) <<"x" << " " << setw(29) << " " << "1" << endl;
	cout << "______________________________________________________________________________________________________________________" << endl;
	//int x=0;
	for(int i=0;i<=360;i=i+5)
	{
    k=sin(i*3.1416/180);
    
	cout << setw(7)<<x <<setw(5)<< " " <<setw(7)<<k <<setw(4)<<" ";
	for(int i=0;i<=360; i+=5)
	   {
	     y=30+k*32*0.833;
	   }
    cout<< setw(y) <<"*" << endl;
	x+=5;
	//k+=5;
    }
     
	return 0;
}
