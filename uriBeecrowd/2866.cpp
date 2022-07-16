#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;
 
int main() {
 
    int C;
    cin>>C;
    
    for (int i=0; i<C; i++){
        string str;
        string cripto;
        cin>>str;
        for(int j=0; j<str.size(); j++){
            if(islower(str[j])){
                cripto+=str[j];
            }
        }
        reverse(cripto.begin(),cripto.end());
        cout<<cripto<<endl;
    }
    return 0;
}
