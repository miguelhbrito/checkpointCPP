#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	float A,B;
	cin >> A >> B;
	double MEDIA;
	MEDIA = ((A*3.5)+(B*7.5))/11;
	cout << fixed << setprecision(5);
	cout << "MEDIA = "<< MEDIA << endl;
	return 0;
}
