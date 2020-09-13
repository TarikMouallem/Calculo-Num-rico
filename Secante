#include <bits/stdc++.h>
 
using namespace std;
 
//Nossa função
double f(double x){
    return 1*pow(x,2) + 3*x -10;
}
 
 
int main(){
    //Limites da nossa busca
    double x0=-10;
    double x1=10;
    double x2;
 
    //Critério de parada
    double criterio = 0.00000000001;
 
    //Contador de iterações
    int contador =0;
 
    //loop que realiza as iterações
    while(true){
        contador++;//incremento do contador
        x2 = (x0*f(x1)-x1*f(x0))/(f(x1)-f(x0));
        x0=x1;
        x1=x2;
        if(abs(f(x1))<criterio || contador>50){//Caso o resultado esteja menor do que o critério de parada
            cout<<"Raiz encontrada: "<<x1<<endl;
            cout<<"Valor na raiz: "<<f(x1)<<endl;
            cout<<"Numero de interacoes: "<<contador<<endl;
            break;
        }
    }
}
