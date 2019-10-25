#include <iostream>
#include <list>
using namespace std;

void showlist(list <int> g) 
{ 
    list <int> :: iterator it; 
    for(it = g.begin(); it != g.end(); ++it) 
        cout << '\t' << *it; 
    cout << '\n'; 
} 

int main(){
    int n = 24;
    int m=3;
    list <int> lprimos;

    int cont1;
    int cont2;

    for(int i=2; i<=n;i++){
        int cont=0;
        for(int j=1; j<=n; j++){
            if(i%j==0){
                cont++;
            }
        }
        if(cont==2){
            lprimos.push_back(i);    
        } 
    }
    showlist(lprimos);
    

    return 0;
}
