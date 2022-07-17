#include <iostream>
#include <string>

using namespace std;

int main(){
	int N;
	while(cin>>N){
		string input, result;
		int count=0;
		cin>>input;

		if(N==0 && input=="0"){
			break;
		}

		for(char& c : input){
			if(c == '0'){
				if(count != 0){
					cout<<c;
				}
			}
			else if(c != to_string(N)[0]){
				cout<<c;
				count=1;
			}
		}
		if(count==0){
			cout<<"0"<<endl;
		}
		else{
			cout<<endl;
		}
	}
	
	return 0;
}
