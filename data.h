#include<iostream>
#include<fstream>
#include<string>

#ifndef DATA_H
#define DATA_H
using namespace std;
class Data
{
	
	char word[15];
	char hint[15];
	
	int id;
public:
	//defining functions
	Data(string f="Empty",string l="Empty",int=0);
	void setword(string);
	void sethint(string);
	
	void set_id(int);

	string getword();
	string gethint();
	
	int get_id();
	

};
#endif