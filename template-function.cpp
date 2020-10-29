// template function can be used to change the data type of the method and its variables making it reusable.
#include <iostream>
#include <math>
#define N 100
using namespace std;

template <typename T> T maxof ( T a, T b ) {
	return ( a > b ? a : b );
}

int main( int argc, char ** argv ) {
	cout << maxof( 7, 9 ) << endl;
	
	printf("The number of units available: ");
	printf(N);
	
	return 0;
}
