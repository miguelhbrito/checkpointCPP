#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	double R, A, P=3.14159;
	cin >> R;
	A = R*R*P;
	cout << fixed << setprecision(4);
	cout << "A=" << A << endl;

	return 0;
}
