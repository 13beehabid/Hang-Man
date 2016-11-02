#include"data.h"

Data::Data(string f,string l,int i)
{
	 setword(f);
	 sethint(l);
	 
	 set_id(i);
}
void Data::setword(string f)
{
	strcpy(word,f.c_str());//converting string to array
}
void Data::sethint(string l)
{
	strcpy(hint,l.c_str());
}

void Data::set_id(int i)
{
	id=(i>0?i:0);//validating id
}
string Data::getword()
{
	string str(word);//converting array to string
	return str;
}
string Data::gethint()
{
	string str(hint);
	return str;
}

int Data::get_id()
{
	return id;
}
