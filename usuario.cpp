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
	this->games.push_back(id);
}
void Usuario::deleteGame(int id){
	for(int i=0;i<this->games.size();i++){
		if(this->games[i]==id){
			this->games.erase(this->games.begin()+i);
		}
	}
}
void Usuario::imprimirGames(){
	cout << "JUEGOS(id)" << endl;
	for(int i=0;i<this->games.size();i++){
		cout << i << "-" << this->games[i]<<endl;
	}
}

