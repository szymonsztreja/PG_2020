#include <iostream>
#include <iomanip>
using namespace std;

  const int MAX_N = 20;
  const int MAX_M = 20;

int main()
{
  double A[MAX_N][MAX_M];
  int n, m ; 
  cout << "Podaj liczbe wierszy: ";
  cin >> n;
  cout << "Podaj liczbe kolumn: ";
  cin >> m;
  
  // --- (A) generowanie tablicy A
   
   int k=1;
   
   for(int i=0; i<n ; i++ ){
   	for(int j=0; j<m ; j++){	
	A[i][j]=k;
   	cout << setw(3) << A[i][j] ;
	k++;}
   	cout << endl;
   }  
   cout << endl;
   cout << endl;
    double temp;
     for( int i =0; i<n; i++){
     	for( int j =0; j<m; j++){
     	temp= A[i][j];
     	A[i][j]=A[j][i];
     	A[j][i]=temp;
     }
	 }
    for(int i=0; i<m ; i++ ){
    	for(int j=0; j<n ; j++)
		{
    	cout << setw(3) << 	A[i][j];
	    } 
		cout << endl; 
	} 
}  
