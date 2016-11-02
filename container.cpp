#include"container.h"
#include<time.h>
#include<cstdlib>



void Container::Write2File(Data data)
{
	fstream add("File.dat",ios::binary|ios::out|ios::in);//new-file if exist then write at the end
	if(!add)
	{
		cout<<"File could not be opened"<<endl;
		exit(1);
	}
	add.seekp((data.get_id()-1)*sizeof(Data));//moving pointer to required data
	add.write(reinterpret_cast<const char *>(&data),sizeof(Data));
	add.close();
}
void Container::Read4rmFile(int id)
{
	Data temp;
	ifstream add("File.dat",ios::binary);//opening a file
	add.seekg((id-1)*sizeof(Data));//moving pointer to desire location
	
	add.read(reinterpret_cast<char *>(&temp),sizeof(Data));
	wordgen1=temp.getword();
	hintgen1=temp.gethint();
	
	add.close();
}
void Container::display(Data temp)//display data
{
	wordgen1=temp.getword();
	hintgen1=temp.gethint();
	cout<<"User infromation is"<<endl;
	cout<<"word is="<<temp.getword()<<endl;
	cout<<"Hint is="<<temp.gethint()<<endl;
	cout<<"Id="<<temp.get_id()<<endl;
}

Container::Container()
{
	
		srand(time(NULL));
			int id=rand()%5+1;
 Read4rmFile(id);
}

Container::~Container(void)//destructor
{
}
