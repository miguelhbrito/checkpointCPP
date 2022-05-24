#include <iostream>

using namespace std;

int main() {

    int N, X, sum;
    cin>> N;

    for(int i=0; i<N; i++){
        cin>>X;
        sum = 0;
        
        for (int j=1; j<X; j++){
            if(X%j == 0){
                sum+=j;
            }
        }
        if(sum == X){
            cout<<X<<" eh perfeito"<<endl;
        }else{
            cout<<X<<" nao eh perfeito"<<endl;
        }
    }

    return 0;
}
