#include <iostream>
 
using namespace std;
 
int main() {
 
    int N, X;
    int EVEN = 0;
    int ODD = 0;
    int POSITIVE = 0;
    cin>>N;
    
    for (int i=0; i<N; i++){
        cin>>X;
        if (X%2 == 0 && X != 0){
            cout<<"EVEN ";
            if (X > 0){
                cout<<"POSITIVE"<<endl;
            }else{
                cout<<"NEGATIVE"<<endl;
            }
        }
        if (X%2 != 0 && X != 0){
            cout<<"ODD ";
            if (X > 0){
                cout<<"POSITIVE"<<endl;
            }else{
                cout<<"NEGATIVE"<<endl;
            }
        }
	if (X == 0)
		cout<<"NULL"<<endl;
    }
 
    return 0;
}
