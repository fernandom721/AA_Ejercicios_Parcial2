#include <iostream>

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

    int cont =0;
    int point=0;
    int x=0;
    
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
    
    for(int i=1;i<m;i++){
        for(int j=0;j<n;j++){
            point=aux[i][x];
            if(aux[i][j]!=0){
                if(point<=aux[i][j]){
                    cont+=aux[i][j];
                }
            }
            else
            {
                x++;
            }
            cout<<cont<<",";
        }
        cout<<endl;
        cont=0;
        
    }

return 0;
}