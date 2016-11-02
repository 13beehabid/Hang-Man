#include"data.h"

class Container
#ifndef CONTAINER_H
#define CONTAINER_H


{
	
public:
	string wordgen1;
	string hintgen1;
	Container();

	//Member functions
	void Write2File(Data data);
	void Read4rmFile(int id);
	void display(Data);
	
	//void update(int id);
	
	~Container(void);
};
#endif

