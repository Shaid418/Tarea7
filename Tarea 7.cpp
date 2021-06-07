#include<iostream>
using namespace std;

//Funcion que devuelve la longitud de una cadena
int longitudCadena(char *cadena){
   char *apuntador = cadena;
   
   while(apuntador[0]!='\0')
    apuntador++;
    
    

	return (int)(apuntador - cadena);
}

int main(){
 
   int seguir;
   char texto[100];
   char *pTexto = texto;
   
	while(seguir == 0){
	
		cout<<"   Calculo de longitud de una cadena   "<<endl;
		cout<<"======================================== "<<endl;
	    cout<<"ingrese una cadena de texto: ";
	    cin>>texto;
	    cout<<"----------------------------------------"<<endl;
	    cout<<"La longitud es de: "<<longitudCadena(texto)<<" caracteres."<<endl;
		cout<<endl;
		cout<<"*** Desea continuar? : SI=0    NO=1 ***"<<endl;
		cin>>seguir;
	}
	
    return 0;
}
