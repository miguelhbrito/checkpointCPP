#include <iostream>
#include <iomanip>

using namespace std;

int main(){

        float N;
        float sum = 0;
        int count = 0;
        int input;
        bool flag = true;

        while(flag!=false){
                if (count == 2){
                    cout<<fixed<<setprecision(2);
                    cout<<"media = "<<sum/2<<endl;
                    while(true){ 
                    	cout<<"novo calculo (1-sim 2-nao)"<<endl;
                    	cin>>input;
		    	if(input == 1){
                        	count = 0;
				sum = 0;
				break;
                    	}
                    	if(input == 2){
                        	flag=false;
				break;
                    	}
		    }
                }else{
                    cin>>N;
                    if (N < 0 || N > 10){
                            cout<<"nota invalida"<<endl;
                    }else{
                            sum+=N;
                            count++;
                    }
                }
        }
        return 0;
}
