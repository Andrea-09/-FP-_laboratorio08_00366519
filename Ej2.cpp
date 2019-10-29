#include <iostream>
using namespace std;

int main(void){
    int i;
    int arr[7];
    int matriz[5][9];
    
    for(int j = 0; j < 5; j++ ){
        for(int k = 0; k < 9; k++){
            
    
    for(i = 0; i < 8; i++){
        cout<<"Ingrese cada digito de su carnet: ";
        cin>>arr[i];
    }
    
    for(int b = 0; b < 2; b++){
        for(int a = 7; a>= 0; a--){
            cout<<arr[a];
        }
        cout<<" Inverso";
        cout<<endl;
        
    for(int c = 0; c <= 7; c++){
        cout<<arr[c];
    }
    cout<<" Normal";
    cout<<endl;
    }
    
    cout<<matriz[5][9]<<5*9;
        
        cout<<endl;
        }
    }
    
    return 0;
}