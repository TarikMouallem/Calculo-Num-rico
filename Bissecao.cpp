#include <bits/stdc++.h>
 
using namespace std;
 
//Nossa função
double f(double x){
    return 1*pow(x,2) + 3*x -10;
}
 
 
int main(){
    //Limites da nossa busca
    double a=-10;
    double b=10;
 
    double maximo;
    double minimo;
 
    //Critério de parada
    double criterio = 0.00000000001;
 
    //Contador de iterações
    int contador =0;
 
    //Verifica qual limite é positivo e qual limite é negativo
    if(f(a)>f(b)){
        maximo = a;
        minimo = b;
    }else{
        maximo = b;
        minimo = a;
    }
 
    //loop que realiza as iterações
    while(true){
        contador++;//incremento do contador
        double media = (maximo+minimo)/2;//Calculo de media
        if (f(media)>0) maximo = media;//Definindo o novo limite
        else minimo = media;//Definindo o novo limite
        if(abs(f(media))<criterio){//Caso o resultado esteja menor do que o critério de parada
            cout<<"Raiz encontrada: "<<media<<endl;
            cout<<"Valor na raiz: "<<f(media)<<endl;
            cout<<"Numero de interacoes: "<<contador<<endl;
            break;
        }
    }
}
