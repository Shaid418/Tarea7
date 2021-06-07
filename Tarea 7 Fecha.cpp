#include <iostream>
#include <string>

using namespace std;

void mostrarFechaHora(int anio, int mes, int dia, int hora, int minuto){
      int *apAnio = &anio;
      int *apMes = &mes;
      int *apDia = &dia;
      int *apHora = &hora;
      int *apMinuto = &minuto;
      
      string ani = to_string(*apAnio);
      string me = to_string(*apMes);
      string di = to_string(*apDia);
      string hor = to_string(*apHora);
      string minu = to_string(*apMinuto);
        
    if(me == "1"){
        me =  "Enero";
            cout<<"Fecha: "<<di<<" "<<me<<" "<<ani<<" "<<","<<hor<<":"<<minu<<endl;
        }else if(me == "2"){
            me =  "Febrero";
                cout<<"Fecha: "<<di<<" "<<me<<" "<<ani<<" "<<","<<hor<<":"<<minu<<endl;
            }else if(me == "3"){
                me =  "Marzo";
                    cout<<"Fecha: "<<di<<" "<<me<<" "<<ani<<" "<<","<<hor<<":"<<minu<<endl;
                }else if(me == "4"){
                     me =  "Abril";
                        cout<<"Fecha: "<<di<<" "<<me<<" "<<ani<<" "<<","<<hor<<":"<<minu<<endl;
                    }else if(me == "5"){
                        me =  "Mayo";
                            cout<<"Fecha: "<<di<<" "<<me<<" "<<ani<<" "<<","<<hor<<":"<<minu<<endl;
                        }else if(me == "6"){
                            me =  "Junio";
                                cout<<"Fecha: "<<di<<" "<<me<<" "<<ani<<" "<<","<<hor<<":"<<minu<<endl;
                            }else if(me == "7"){
                                me =  "julio";
                                    cout<<"Fecha: "<<di<<" "<<me<<" "<<ani<<" "<<","<<hor<<":"<<minu<<endl;
                                }else if(me == "8"){
                                    me =  "Agosto";
                                        cout<<"Fecha: "<<di<<" "<<me<<" "<<ani<<" "<<","<<hor<<":"<<minu<<endl;
                                    }else if(me == "9"){
                                        me =  "Septiembre";
                                            cout<<"Fecha: "<<di<<" "<<me<<" "<<ani<<" "<<","<<hor<<":"<<minu<<endl;
                                        }else if(me == "10"){
                                            me =  "Octubre";
                                                cout<<"Fecha: "<<di<<" "<<me<<" "<<ani<<" "<<","<<hor<<":"<<minu<<endl;
                                            }else if(me == "11"){
                                                me =  "Novimbre";
                                                    cout<<"Fecha: "<<di<<" "<<me<<" "<<ani<<" "<<","<<hor<<":"<<minu<<endl;
                                                }else if(me == "12"){
                                                    me =  "Diciembre";
                                                        cout<<"Fecha: "<<di<<" "<<me<<" "<<ani<<" "<<","<<hor<<":"<<minu<<endl;
                                                    }else{
                                                        cout<<"numero de mes incorrecto!!"<<endl;                                                  
                                                    }
    
 
    
}

//Variables declaradas de forma global
int  anio,  mes,  dia,  hora,  minuto;

int main(){
    
    int seguir;
    
    while(seguir ==0){
        
       cout<<"ingrese anio: ";
       cin>>anio;
       cout<<"ingrese mes: ";
       cin>>mes;
       cout<<"ingrese dia: ";
       cin>>dia;
       cout<<"ingrese hora: ";
       cin>>hora;
       cout<<"ingrese minutos: ";
       cin>>minuto;
       
        if(dia > 31 || dia <=0 ){
            cout<<"Dia incorrecto, no puede ser menor o igual 0 ni mayor a 31 dias!!"<<endl; 
            	cout<<"\nDesea continuar? SI=0    NO=1 : ";
           		cin>>seguir;
            			cout<<endl;
	        }else if(hora > 23 || hora <0){
	           cout<<"Hora incorrecta, no puede ser menor a 0 ni mayor a 23 horas!!"<<endl; 
	           		cout<<"\nDesea continuar? SI=0    NO=1 : ";
	           			cin>>seguir;
	           				cout<<endl;
		        }else if(minuto > 59 || minuto <0){
		           cout<<"Minutos incorrectos, no puede ser menor a 0 ni mayor a 59 minutos!!"<<endl; 
		           		cout<<"\nDesea continuar? SI=0    NO=1 : ";
		           			cin>>seguir;
		           				cout<<endl;
			        }else{
			            mostrarFechaHora(anio,mes,dia,hora,minuto); 
			            	cout<<"\nDesea continuar? SI=0    NO=1 : ";
			       			cin>>seguir;
			       				cout<<endl;
			        }
        
       
       }
    
    return 0;
}
