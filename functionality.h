#include<iostream>
using namespace std;
#include<string>

#ifndef FUNCTIONALITY_H
#define FUNCTIONALITY_H
class functionality
{
public:

	int letterFill (char guess, string secretword, string &guessword)
	{

		int i;
		int matches=0;
		int len=secretword.length();
		for (i = 0; i< len; i++)
		{
			// Did we already match this letter in a previous guess?
			if (guess == guessword[i])
				return 0;
			// Is the guess in the secret word?
			if (guess == secretword[i])
			{
				guessword[i] = guess;
				matches++;
			}
		}
		return matches;
	}




};
#endif