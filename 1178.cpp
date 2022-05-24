#include <iostream>
#include <iomanip>
#include <vector> 

using namespace std;
 
int main() {
    
    vector<double> mv;
    double N;
    cin>>N;
    
    mv.push_back(N);

    for(int i=1; i<100; i++){
        N/=2;
        mv.push_back(N);
    }
    for(int i=0; i<100; i++){
	cout<<fixed<<setprecision(4);
        cout<<"N["<<i<<"] = "<<mv.at(i)<<endl;
    }
 
    return 0;
}
