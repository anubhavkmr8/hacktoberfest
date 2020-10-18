// C++ program to swap two variables 
#include <stdio.h> 

int main() 
{ 
	int x, y; 
	cin>>x>>y;

	int temp = x; 
	x = y; 
	y = x; 

	cout<<x<<" "<<y;
	return 0; 
} 
