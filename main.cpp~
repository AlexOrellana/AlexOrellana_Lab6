#include <iostream>
#include "juego.h"
#include "usuario.h"
#include<string>

using namespace std;

int main(int argc, char*argv[]){

	int opc = 0,opc2=0,elimi,id,year;
	string username,password,nombre,genre,developer;
	vector<Usuario>usuarios;
	vector<Juego>juegos;

	do{
		cout << endl;
		cout << endl;
		cout << "MENU" << endl;
		cout << "1-Agregar un usuario" << endl;
		cout << "2-Modificar un usuario" << endl;
		cout << "3-Eliminar un usuario" << endl;
		cout << "4-Agregar un juego" << endl;
		cout << "5-Eliminar un juego" << endl;
		cout << "6-Listar usuarios" << endl;
		cout << "7-Listar juegos" << endl;
		cout << endl;
		cout << "Ingrese la opcion: " << endl;
		cin >> opc;
		cout << endl;
		cout << endl;

		if(opc==1){
			cout << endl;
			cout << "Ingrese el username:" << endl;
			cin >> username;
			cout << "Ingrese el password:" << endl;
			cin >> password;
			usuarios.push_back(Usuario(username,password));	
		}else if(opc==2){
			cout << endl;
			cout << "Ingrese el username" << endl;
			cin >> username;
			cout << "Ingrese el password" << endl;
			cin >> password;
			for(int i=0;usuarios.size();i++){
				if(usuarios[i].getUsername()==username && usuarios[i].getPassword()==password){
					cout << endl;					
					cout << "Menu" << endl;
					cout << "1-Agregar juego" << endl;
					cout << "2-Eliminar juego" << endl;
					cout << "3-cambiar contraseña" << endl;
					cout << endl;
					cout << "Ingrese opcion: " << endl;
					cin >> opc2;
					
					if(opc2 == 1){
												
					}else if(opc2 == 2){

					}else if(opc2 == 3){

					}
				}
			}
		}else if(opc==3){
			cout << endl;
			cout << "Lista de usuarios"<<endl;
			for(int i=0;usuarios.size();i++){
				cout << i << "-" << usuarios[i].getUsername() << endl;
			}
			cout << endl;
			cout << "ingrese el numero del que desea eliminar: "<<endl;
			cin >> elimi;
			usuarios.erase(usuarios.begin()+elimi);
			cout << endl;
		}else if(opc==4){
			cout << endl;
			cout << "Ingrese el id:" << endl;
			cin >> id;
			cout << "Ingrese el nombre:" << endl;
			cin >> nombre;
			cout << "Ingrese el año:" << endl;
			cin >> year;
			cout << "Ingrese el developer:" << endl;
			cin >> developer;
			cout << "Ingrese el genero:" << endl;
			cin >> genre;
			juegos.push_back(Juego(id,nombre,year,developer,genre));
			cout << endl;
		}else if(opc==5){
			cout << endl;
			cout << "Lista de juegos"<<endl;
			for(int i=0;juegos.size();i++){
				cout << i << "-" << juegos[i].getId() << "   " << juegos[i].getName() << endl;
			}
			cout << endl;
			cout << "ingrese el numero del que desea eliminar: "<<endl;
			cin >> elimi;
			juegos.erase(juegos.begin()+elimi);
			cout << endl;
		}else if(opc==6){
			cout << endl;
			cout << "Lista de usuarios"<<endl;
			for(int i=0;usuarios.size();i++){
				cout << i << "-" << usuarios[i].getUsername() << endl;
			}
			cout << endl;
		}else if(opc==7){
			cout << endl;
			cout << "Lista de juegos"<<endl;
			for(int i=0;juegos.size();i++){
				cout << i << "-" << juegos[i].getId() << "   " << juegos[i].getName() << endl;
			}
			cout << endl;	
		}
	}while(opc!=8);

	return 0;
}
