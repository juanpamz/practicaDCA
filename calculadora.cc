#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;

int main(){
	char queOperacion;
	float primerOperando;
	float segundoOperando;
	float resultadoFinal;
	
	while(true){
		cout<<"Introduce lo que quiere realizar: s=suma, r=resta, m=multiplicacion, d=division, e=exit"<<endl;
		cin>>queOperacion;
		if(queOperacion=='e'){
			break;
		}else if(queOperacion == 's' || queOperacion == 'r' || queOperacion == 'm' || queOperacion == 'd'){
			cout<<"Introduce el primer operando: ";
			cin>>primerOperando;
			cout<<"Introduce el segundo operando: ";
			cin>>segundoOperando;
			
			if(queOperacion=='s'){
				resultadoFinal = primerOperando + segundoOperando;
				
			}else if(queOperacion=='r'){
				resultadoFinal = primerOperando - segundoOperando;
			}else if(queOperacion=='m'){
				resultadoFinal = primerOperando * segundoOperando;
			}else if(queOperacion=='d'){
				resultadoFinal = primerOperando / segundoOperando;
			}
			if(segundoOperando == 0 && queOperacion == 'd'){
				cout<<"El resultado de una división entre 0 es indefinido."<<endl;
			}else{
				ofstream myfile;
				myfile.open("resultado.txt");
				myfile << "Tu resultado es "<<resultadoFinal;
				myfile.close();
				cout<<"Resultado final es: "<< resultadoFinal<<endl;
			}
		}else{
			cout<<"Carácter no reconocido."<<endl;
		}
	}
}
