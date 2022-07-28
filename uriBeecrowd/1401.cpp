#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
 
int main() {
 
    int N;
    cin>>N;
    
    for(int i=0; i<N; i++){
        string myS;
        cin>>myS;
        
	sort(myS.begin(), myS.end());

        do {
            cout<<myS<<endl;
        } while (next_permutation(myS.begin(),myS.end()));
        
        cout<<endl;
    }
 
    return 0;
}
