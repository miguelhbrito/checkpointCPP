#include <iostream>
#include <iomanip>

using namespace std;

int main(){

        float N;
        float sum = 0;
        int count = 0;
        
        while(true){
                if (count == 2)
                    break;
                cin>>N;
                if (N < 0 || N > 10){
                        cout<<"nota invalida"<<endl;
                }else{
                        sum+=N;
                        count++;
                }
        }
        cout<<fixed<<setprecision(2);
        cout<<"media = "<<sum/2<<endl;

        return 0;

}
