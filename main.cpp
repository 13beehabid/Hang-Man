#include"Gamestructure.h"
#include<iostream>
using namespace std;


int main()
{



	string fname;
	string lname;

	int id;


	int choice=0;
	while(choice!=4)
	{
		char option;
		cout<<"Welcome to hangman game"<<endl;
		cout<<"\n\n\n\n"<<endl;
		
		
		cout<<"Please Enter your choice"<<endl;
		cout<<"1 for single player mode::"<<endl;
		cout<<"2 for double player mode"<<endl;

		cout<<"4 to exit"<<endl;
		cout<<"Choice:";
		cin>>choice;

		switch(choice)
		{
		case 2:
			{
				string name1;
				string name2;
				string w;
				string h;
				cout<<"Plaese Enter the following details:"<<endl;
					
				
				cout<<"word to be guessed:";
				fflush(stdin);
				getline(cin,w);
				cout<<"\n Enter a hint:";
				
				getline(cin,h);

				structure  s1(w,h);
				s1.loop();
				
				break;
			}
		case 1:
			{
				
				
		
				structure s2;
				s2.loop();

				break;
			}

		default:
			break;
		}


	}
}
