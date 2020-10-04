#include<iostream>
using namespace std;


class Line {
	public:
		int getLength(void);
		Line (int len);   //simple constructor
		Line(const Line &obj); //copy constructor
		~Line()	;         //destructor
		
	private:
		int x, y
	
};
Line::Line(int len){
	cout<<"Normal Constructor Doing normal things"<<endl;
	
}
