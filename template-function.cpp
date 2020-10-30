// template function can be used to change the data type of the method and its variables making it reusable.
#include <iostream>
using namespace std;

template <typename T> T maxof ( T f, T b ) {
	return ( f > b ? f : b );
}

int main ( int argc, char ** argv ) {
	cout << maxof( 7, 9 ) << endl;
	return 0;
}
