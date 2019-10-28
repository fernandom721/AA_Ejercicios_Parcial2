#include <iostream>
#include <math.h>

using namespace std;


int main(){

    int m=6;
    int n=7;
    int matrix[m][n]=   {{0,1,1,0,1,1,0},
                         {0,0,0,0,0,1,0},
                         {1,0,0,0,0,0,1},
                         {0,1,0,0,0,0,1},
                         {1,1,0,0,0,1,0},
                         {1,1,0,1,1,0,0}};
    int aux[m][n]={};

    int cont1=0;
    int cont2=0;
    int cont3=0;
    //int cont[m];

    for(int i=0;i<n;i++){
        if(matrix[0][i]==0)
            aux[0][i]=1;
        else
        {
            aux[0][i]=0;
        }
    }

    for(int i=1;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==0){
                aux[i][j]=aux[i-1][j]+1;
            }
            if(matrix[i][j]==1){
                aux[i][j]=0;
            }
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<aux[i][j]<<" ";
        }
        cout << endl;
    }
    for(int i=0;i<m;i++){
        for(int j=1;j<n;j++){
            if(aux[i][j]<=aux[i][j+1]){
                cont1+=aux[i][j];
            }
            else
            {
                //cont1=0;

            }
            cout<<cont1<<",";
            //cont[i]=cont1;
        }
        //cout<<cont[i];
        cout<<endl;
        cont1=0;
        /*
        if(cont1<cont2){
            cont2=cont1;
            cont1=0;
        }*/
        
    }



return 0;
}