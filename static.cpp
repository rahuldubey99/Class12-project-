#include <iostream>  
using namespace std;  
class Student {  
   public:  
       int rollno;      
       string name; //instance variables rollno and name 
         
       static string clgName;  //defining clgName as static because it's common 
	   Student(int rollno, string name)   
        {    
             this->rollno = rollno;    
            this->name = name;    
        }    
       void display()    
        {    
            cout<<rollno<<" "<<name<<" "<<clgName<<endl;   
        }    
};  
string Student::clgName="DCTM";  
int main(void) { 
	Student a1 =Student(1, "Devid");   
    Student a2=Student(2, "Rajnish");   
    Student a3 =Student(3, "Shankar");   
    Student a4=Student(4, "Tarun");   
    a1.display();    
    a2.display();
	a3.display();
	a4.display();    
    return 0;  
}  

