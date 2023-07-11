#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int c;
	cout << "Podaj C_0: ";
    cin >> c;
    
    do
	    {
	    cout << c << " ";	
		if(c%2==0)
		c=c/2;
		else
		c=3*c+1;  
        }while(c!=1);   
		
	   
      
	
	return 0;
}
