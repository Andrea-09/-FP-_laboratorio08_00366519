#include <iostream>
#include <iostream>
#include <string>
using namespace std;

int main(){
   string carnet[8] = {};
    
    for(int i = 0; i < 8; i++){
        cout<< "Ingrese los digitos de su carnet: "<<endl;
        cin>>carnet[i];
    }
        
    for(int a = 7; a >= 0; a--){
        cout<<carnet[a]<<endl;
    }
    
return 0;
 }