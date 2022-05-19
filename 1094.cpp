#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
    int N, X;
    float C = 0;
    float R = 0;
    float S = 0;
    int sum = 0;
    
    char cob;
    
    cin>>N;
    
    for(int i=0; i<N; i++){
        cin>>X>>cob;
        sum+=X;
        if (cob == 'C')
            C+=X;
        if (cob == 'R')
            R+=X;
        if (cob == 'S')
            S+=X;
    }
    
    cout<<"Total: "<<sum<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<C<<endl;
    cout<<"Total de ratos: "<<R<<endl;
    cout<<"Total de sapos: "<<S<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"Percentual de coelhos: "<<(C/sum)*100<<" %"<<endl;
    cout<<"Percentual de ratos: "<<(R/sum)*100<<" %"<<endl;
    cout<<"Percentual de sapos: "<<(S/sum)*100<<" %"<<endl;
    
    return 0;
}
