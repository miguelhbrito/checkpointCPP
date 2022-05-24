#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    double X;
    
    for(int i=0; i<100; i++){
        cin>>X;
        cout<<fixed<<setprecision(1);
        if(X <= 10)
            cout<<"A["<<i<<"] = "<<X<<endl;
    }
 
    return 0;
}
