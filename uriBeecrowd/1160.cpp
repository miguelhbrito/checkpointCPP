#include <iostream>
 
using namespace std;
 
int main() {
 
    int T, PA, PB;
    int sumYears;
    double G1, G2;
    
    cin>> T;
    
    for(int i=0; i<T; i++){
        
	cin>>PA>>PB>>G1>>G2;
	
	sumYears = 0;

        while(PA <= PB){
	    PA += PA*G1/100;
            PB += PB*G2/100;

            sumYears++;
            if (sumYears > 100)
		break;
        }
        if (sumYears > 100){
            cout<<"Mais de 1 seculo."<<endl;
        }else{
            cout<<sumYears<<" anos."<<endl;
        }
	
    }
    
    return 0;
}
