#include <iostream>

using namespace std;

int main(){

        int N, sum;
        
        while(true){
            cin>>N;
            if(N == 0)
                break;
            sum = 0;
            for ( int i=0; i<5;){
                if(N%2 == 0){
                	sum+=N;
                        i++;
                }
                N++;
            }
            cout<<sum<<endl;
        }
    return 0;
}
