#include <iostream>

using namespace std;

//void PewnaFunkcja(int A[], int &n )
// {
// for (int i = 0; i < n/2; i++) 
//	{
// 		int x = A[i];
//		 A[i] = A[n-i-1];
// 	A[n-i-1] = x;
//	}
// 	n = n-2 ;
// }
// int main()
// {
// int A[5] = {1,2,3,4,5};
// int n = 5;
// PewnaFunkcja(A,n);
// for (int i=0; i <= n; i++)
// cout << A[i] << "xx";
// } 
void PewnaFunkcja (int A[], int &n)
 {
 for (int i = 0; i < n/2; i++) {
 int x = A[i];
 A[i] = A[n-i-1];
 A[n-i-1] = x;
 }
 n = n - 1;
 }
 int main()
 {
 int A[5] = {1,2,3,4,5};
 int n = 5;
 PewnaFunkcja(A,n);
 for (int i = 0; i<=n; i++)
 cout << A[i] << ' '; 
}
