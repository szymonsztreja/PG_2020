#include<iostream>
#include<cstring>
#include<string>
using namespace std;


int funk( int a, int b , int c)
{
	int k = (  (a<b)? a-3 : b-4) + 1;
	return( ( (k>c)? k:k ) + 2);
}
int main() {

cout << funk(7,6,4);

return 0;
}
