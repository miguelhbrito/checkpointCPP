#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

int main(){

        int X,Y,input;
        int count = 0;
        int G = 0;
        int I = 0;
        int emp = 0;
        
        while(true){
            cin>>X>>Y;
            count++;
            if(X==Y){
                emp++;
            }else if(X>Y){
                I++;
            }else if(X<Y){
                G++;
            }
            cout<<"Novo grenal (1-sim 2-nao)"<<endl;
            cin>>input;
            if(input==2){
                break;
            }
        }
        cout<<count<<" grenais"<<endl;
        cout<<"Inter:"<<I<<endl;
        cout<<"Gremio:"<<G<<endl;
        cout<<"Empates:"<<emp<<endl;
        if(max(X,Y) == X){
            cout<<"Inter ";
        }else{
            cout<<"Gremio ";
        }
        cout<<"venceu mais"<<endl;
        return 0;
}
