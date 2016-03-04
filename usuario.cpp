#include "usuario.h"
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

Usuario::Usuario(string username, string password){
	this -> username = username;
	this -> password = password;
}
string Usuario::getUsername(){
	return username;
}
string Usuario::getPassword(){
	return password;
}
void Usuario::setPassword(string password){
	this->password=password;
}
void Usuario::addGame(int id){
	int validar=0;
	for(int i=0;i<games.size();i++){
		if(games[i]==id){
			validar++;
		}
	}
	if(validar==0){
		games.push_back(id);
		cout << "listo" << endl;
		cout << endl;
	}else{
		cout << "juego ya esta agregado" << endl;
		cout << endl;
	}
}
void Usuario::deleteGame(int id){
	for(int i=0;i<games.size();i++){
		if(games[i]==id){
			games.erase(games.begin()+i);
		}
	}
}
void Usuario::imprimirGames(){
	cout << "JUEGOS(id)" << endl;
	for(int i=0;i<games.size();i++){
		cout << i << "-" << games[i]<<endl;
	}
}

