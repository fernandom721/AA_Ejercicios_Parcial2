#include<iostream>

using namespace std;

int main(){

    int n=9;

    int w[n]={6008,6000,500,1000,1100,6000,8000,6000,2000};
    int s[n]={1300,2100,2000,4000,3000,2000,1400,1200,1900};

    int matrix[n+1][n+1];

    for(int i=0;i<n+1;i++){
        for(int j=0; j<n+1; j++){
            matrix[i][j]=0;
            //cout<< matrix[i][j]<<" ";
        }
        //cout << endl;
    }

    for(int i=0;i<n;i++){
        if(w[i]<w[i+1]){
            if(s[i+1]>s[i]){
                matrix[i+1][i+1]=matrix[i][i]+1;
            }
        }
        else{
            matrix[i+1][i+1]=1;
        }
    }

    for(int i=0;i<n+1;i++){
        for(int j=0; j<n+1; j++){
            cout<< matrix[i][j]<<" ";
        }
        cout << endl;
    }

    return 0;
}