#include <iostream>
#include <math.h>

using namespace std;

int mnozenie(int x, int y = 1, int z = 1) {
	return x * y * z;
}
int main(int argc, char* argv)
{
	cout << mnozenie(3 * 8 * 5) << endl;
}