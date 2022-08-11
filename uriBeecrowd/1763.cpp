#include <iostream>
#include <string>
#include <map>
 
using namespace std;
 
int main() {
    string str;
    map<string,string> myMap;
    myMap["brasil"]="Feliz Natal!";
    myMap["alemanha"]="Frohliche Weihnachten!";
    myMap["austria"]="Frohe Weihnacht!";
    myMap["coreia"]="Chuk Sung Tan!";
    myMap["espanha"]="Feliz Navidad!";
    myMap["grecia"]="Kala Christougena!";
    myMap["estados-unidos"]="Merry Christmas!";
    myMap["inglaterra"]="Merry Christmas!";
    myMap["australia"]="Merry Christmas!";
    myMap["portugal"]="Feliz Natal!";
    myMap["suecia"]="God Jul!";
    myMap["turquia"]="Mutlu Noeller";
    myMap["argentina"]="Feliz Navidad!";
    myMap["chile"]="Feliz Navidad!";
    myMap["argentina"]="Feliz Navidad!";
    myMap["mexico"]="Feliz Navidad!";
    myMap["antardida"]="Merry Christmas!";
    myMap["canada"]="Merry Christmas!";
    myMap["irlanda"]="Nollaig Shona Dhuit!";
    myMap["belgica"]="Zalig Kerstfeest!";
    myMap["italia"]="Buon Natale!";
    myMap["libia"]="Buon Natale!";
    myMap["siria"]="Milad Mubarak!";
    myMap["marrocos"]="Milad Mubarak!";
    myMap["japao"]="Merii Kurisumasu!";

    while (cin >> str) {
        if(myMap[str] == ""){
            cout<<"--- NOT FOUND ---"<<endl;
        }else{
            cout<<myMap[str]<<endl;
        }
    }
    return 0;
}
