#include "juego.h"
#include <iostream>
#include <string>
#include <cstring>
#include <sstream>

using namespace std;

Juego::Juego(int id,string name,int year,string developers,string genre){
	this -> id = id;
	this -> name = name;
	this -> year = year;
	this -> developers = developers;
	this -> genre = genre;
}
string Juego::getId(){
	stringstream ss;
	ss << id << endl;
	return ss.str();
}

