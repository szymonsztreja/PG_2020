#include <iostream>
#include <iomanip>

using namespace std;

struct prostokat{
	double L_dol_x;
	double L_dol_y;
	double P_gor_x;
	double P_gor_y;
};

struct punkt{
	double pkt_x;
	double pkt_y;
};

struct prosta{
	
	
};

double randR( double a, double b)        
{
    double w = static_cast<double>(rand()) / RAND_MAX;  // w jest liczb¹ rzeczywist¹ w [0,1]
    return  w * (b - a) + a;                            // skalowanie do przedzia³u [a,b]
}

void gen_punkt(punkt P[], int n, int zw )
{
	for( int i = 0; i<n ; i++) 
	{
	P[i].pkt_x=randR(-zw, zw);
	P[i].pkt_y=randR( -zw, zw);
    }
}

//void pisz_pkt(punkt P[], int n)
//{
//	for(int i= 0; i < n; i++)
//	{   cout << fixed << setprecision(2);
//		cout << setw(8) << P[i].wspl_x << setw(8)<< P[i].wspl_y;
//		cout << endl;
//	}
//}
//int minIndeks( punkt P[], int a, int b)
//{
//	int min = a;
//	for(int i = a+1; i <= b; i++)
//	    if(P[i] < P[min]) min = i ;
//	return min;    
//}
//
//int maxIndeks( punkt P[], int a, int b)
//{
//	int max = a;
//	for(int i = a+1; i <=b; i++)
//	    if(P[i] > P[max]) max = i;
//	return max;    
//}

double wybierz_max_x(punkt P[], int n)
{
	double max ;
	for(int i = 0; i < n; i++)
	{
	if(P[i+1].pkt_x<P[i].pkt_x)
	{
		max = P[i].pkt_x;
		P[i].pkt_x = P[i+1].pkt_x;
		P[i+1].pkt_x = max;	
	}	
	}return max; 
}
double wybierz_max_y(punkt P[], int n)
{
	double max;
	for(int i = 0; i < n; i++)
	{
	if(P[i+1].pkt_y<P[i].pkt_y)
	{
		max = P[i].pkt_y;
		P[i].pkt_y = P[i+1].pkt_y;
		P[i+1].pkt_y = max;	
	}
	}return max; 
}
double wybierz_min_x(punkt P[], int n)
{
	double min;
	for(int i = 0; i < n; i++)
	{
	if(P[i+1].pkt_x>P[i].pkt_x)
	{
		min = P[i].pkt_x;
		P[i].pkt_x = P[i+1].pkt_x;
		P[i+1].pkt_x = min;	
	}
	}return min; 
}
double wybierz_min_y(punkt P[], int n)
{
	double min;
	for(int i = 0; i < n; i++)
	{
	if(P[i+1].pkt_y>P[i].pkt_y)
	{
		min = P[i].pkt_y;
		P[i].pkt_y = P[i+1].pkt_y;
		P[i+1].pkt_y = min;	
	}
	}return min; 
}
void przypisanie(punkt P[],int n, prostokat Prostak1[])
{
	cout << fixed << setprecision(2);
	Prostak1[0].L_dol_x = wybierz_min_x(P, n );
	Prostak1[0].L_dol_y = wybierz_min_y(P, n);
	Prostak1[1].P_gor_x = wybierz_max_x(P, n );
	Prostak1[1].P_gor_y = wybierz_max_y(P, n );
	cout << "Lewy dolny punkt 1 prostokata: ";
	cout << Prostak1[0].L_dol_x <<"\t" << Prostak1[0].L_dol_y << endl;
	cout << "Prawy gorny punkt 1 prostokata: ";
	cout << Prostak1[1].P_gor_x <<"\t" << Prostak1[1].P_gor_y << endl;
}

void czy_przecinaja()
{
	if(Prostak2[0].L_dol_x >= Prostak1[0].L_dol_x<= && Prostak2[1].P_gor_x <= Prostak1[1].P_gor_x )
}

    

int main()
{
	const int MAX_N = 200;
	punkt P[MAX_N];
	int n;
	
	const int M_P = 2 ; // lewy i prawy wierzcholek prostokata
	prostokat Prostak1[M_P];
	
	int zw = 100; // zakers wartosci dla wspolrzednych
	
	cout << "Podaj liczbe punktow jakie maja zostac wygenerowane: ";
	cin >> n;
	gen_punkt(P, n, zw);
//	pisz_pkt(P, n);
	przypisanie(P, n, Prostak1); 
	
	return 0;
}
