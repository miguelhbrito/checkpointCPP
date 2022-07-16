#include <iostream>
#include <stack>

using namespace std;

int main() {

    int N, X;
    cin>> N;

    for(int i=0; i<N; i++){
        stack<int> myints;
        cin>>X;

        for (int j=1; j<X; j++){
            if(X%j == 0){
                myints.push(j);
            }
        }
        if(myints.size()>1){
            cout<<X<<" nao eh primo"<<endl;
        }else{
            cout<<X<<" eh primo"<<endl;
        }
    }

    return 0;
}
