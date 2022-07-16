#include <iostream>
#include <iomanip> 

using namespace std;
 
int main() {
 
    float N, F, S, T;
    cin>>N;
    
    for (int i=0; i<N; i++){
        cin>>F>>S>>T;
        cout << fixed << setprecision(1);
        cout<<((F*2)+(S*3)+(T*5))/10<<endl;
    }
    return 0;
}
