#include <iostream>

using namespace std;
 
int main() {
	    
	    int T;
	        int aux = 0;
		    cin>>T;
		        
		        for (int i =0; i<1000; i++){
				        if(aux >= T){
						            aux=0;
							            }
					        cout<<"N["<<i<<"] = "<<aux<<endl;
			aux++;			    
			}
			 
			    return 0;
}
