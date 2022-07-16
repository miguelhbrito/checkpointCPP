#include <iostream>
#include <iomanip>

using namespace std;

int main(){

        double matrix[12][12];
        int N;
        cin>>N;
        char T;
        cin>>T;

        for (int i=0; i<12; i++){
                for(int j=0; j<12; j++){
                        cin>>matrix[i][j];
                }
        }

        double sum = 0;

        for (int i=0; i<12; i++){
                for(int j=0; j<12; j++){
                        if (j == N){
                                sum+=matrix[i][j];
                        }
                }
        }
        if(T == 'S'){
                cout<<fixed<<setprecision(1);
                cout<<sum<<endl;
        }else{
                cout<<fixed<<setprecision(1);
                cout<<sum/12.00<<endl;
        }
        return 0;
}
