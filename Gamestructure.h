#include<string>
#include"DisplayMan.h"

#include<Windows.h>
#include"container.h"
#include"functionality.h"
#ifndef STRUCTURE_H
#define STRUCTURE_H


class structure: public DisplayStickMan,public Container,public functionality
{
	string unknown1;
	string wordgen2;
	string hint1;
	char letter;
	int num_of_wrong_guesses;
	
public:
	structure()
	{
	
		Container c1;
		string unknown(c1.wordgen1.length(),'*');
		unknown1=unknown;
		wordgen2=c1.wordgen1;
		hint1=c1.hintgen1;
	 num_of_wrong_guesses=0;		
	}

	structure(string wo,string hi)
	{
		wordgen2=wo;
		hint1=hi;
		string unknown(wordgen2.length(),'*');
		unknown1=unknown;
	num_of_wrong_guesses=0;
	}
	

	void loop()
	{
	
	
		system("cls");
		const int MAX_TRIES=5;
		while (num_of_wrong_guesses < MAX_TRIES)
		{
			cout<<wordgen2<<endl;
			cout<<"\n\n"<<hint1<<endl;
			switch( num_of_wrong_guesses)
			{
			case 0:

				{
					DisplayStickMan::DisplaySMHead();
					break;
				}
			case 1:
				{
					DisplayStickMan::DisplaySMArm1();
					break;
				}
			case 2:
				{
					DisplayStickMan::DisplaySMArm2();
					break;
				}
			case 3:
				{
					DisplayStickMan::DisplaySMLeg1();
					break;
				}
			case 4:
				{
					
					DisplayStickMan::DisplaySMDead();
					break;
				}
			}
			a:
			cout<<"\n\n"<<unknown1<<endl;
			cout<<"\n\nGuess a Letter::"<<endl;
			cin>>letter;

			if (!isalpha(letter)){

				cout<<"Error : not a valid alphabet."<<endl;
				goto a;
			}

			letter = tolower(letter);
			if(functionality::letterFill(letter,wordgen2,unknown1)==0)
			{
				cout << endl << "\aWhoops! That letter isn't in there!" << endl;

				num_of_wrong_guesses++;
			}
			else
			{
				cout << endl <<"You found a letter! Isn't that exciting!" << endl;
			}
			cout <<"You have"<< MAX_TRIES - num_of_wrong_guesses;
			cout <<" guesses left."<< endl;
			if (wordgen2==unknown1)
			{
				system("cls");
				cout << wordgen2<< endl;
				cout << "Yeah! You got it!";
				break;
			}

			if(num_of_wrong_guesses == MAX_TRIES)
			{
				for(int i=0;i<10;i++)
				{
				Beep(2100,500);
				i++;
				}
				cout << "\nSorry, you lose...you've been hanged." << endl;
				DisplayStickMan::DisplaySMhanged();
				cout << "The word was : " << wordgen2 << endl;
				
				// 523 hertz (C5) for 500 milliseconds     
				// wait 
			}

		}

	}


};
#endif