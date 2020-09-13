#include <bits/stdc++.h>
 
using namespace std;
 
double det(double mat[3][3]){
    double ans=0;
    int i,j;
    for(int k=0;k<3;k++){
        double som1=1;
        i=0;
        j=k;
        som1*=mat[i][j];
        i++;
        j++;
        if(j==3) j=0;
        som1*=mat[i][j];
        i++;
        j++;
        if(j==3) j=0;
        som1*=mat[i][j];
        ans+=som1;
    }
    for(int k=0;k<3;k++){
        double som1=1;
        i=0;
        j=k;
        som1*=mat[i][j];
        i++;
        j--;
        if(j==-1) j=2;
        som1*=mat[i][j];
        i++;
        j--;
        if(j==-1) j=2;
        som1*=mat[i][j];
        ans-=som1;
    }
    return ans;
}
 
int main(){
    double mat[3][3];
    double vet[3];
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>mat[i][j];
        }
        cin>>vet[i];
    }
    double detA=det(mat);
    double mat1[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            mat1[i][j]=mat[i][j];
            if(j==0) mat1[i][j]=vet[i];
        }
    }
    double detx1=det(mat1);
    double mat2[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            mat2[i][j]=mat[i][j];
            if(j==1) mat2[i][j]=vet[i];
        }
    }
    double detx2=det(mat2);
    double mat3[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            mat3[i][j]=mat[i][j];
            if(j==2) mat3[i][j]=vet[i];
        }
    }
    double detx3=det(mat3);
    cout<<"x1 = "<<detx1/detA<<endl;
    cout<<"x2 = "<<detx2/detA<<endl;
    cout<<"x3 = "<<detx3/detA<<endl;
}
