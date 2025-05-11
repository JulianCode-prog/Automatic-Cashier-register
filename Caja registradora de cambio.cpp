#include<iostream>

using namespace std;

int main (){
	int total_compra= 0, dinero_entregado= 0, cambio;
	cout << "-Bienvenido a la caja registradora-" << endl;
	//solicitaciones
	cout << "Le solicito porfavor que ingrese el total de compra: ";
	cin >> total_compra;
	cout << "ingrese el dinero que entrego: ";
	cin >> dinero_entregado;
	//condicionales
	if(dinero_entregado > total_compra){
		cout << "Usted ha ingresado mas dinero del requerido, a continuacion le daremos el cambio" << endl;
		cambio=dinero_entregado-total_compra;
		cout << "su cambio es de: " << cambio;
	}
	else if(dinero_entregado == total_compra){
		cout << "usted ha entregado la cantidad exacta de dinero"; 
	}
    else{
    cout << "el dinero ingresado no es suficiente para pagar las compras" << endl;	
    }
	return 0;
	}
	

