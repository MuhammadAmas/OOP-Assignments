#include<iostream>
using namespace std;
class Student
{
	private:
	int serial_no;
	string name;
	string year;
    string a,b,c;

	
	public:
	//DEFAULT CONSTRUCTOR
	Student()
	{
		
	}
	//PARAMETRIZED CONSTRUCTOR
	Student(int s,string n,string y)
	{
		serial_no = s;
		name = n;
		year = y;
	}
	//COPY CONSTRUCOR
	Student(Student &obj)
	{
		serial_no = obj.serial_no;
		name =obj.name;
		year = obj.year;
	}
	void displayData()
	{
		cout<<"SERIAL_NO="<<serial_no<<endl;
		cout<<"NAME="<<name<<endl;
		cout<<"YEAR="<<year<<endl;
	}
	void learnData()
	{
	
	  cout<<"calculus"<<endl;
	  cout<<"computer_science"<<endl;
	  cout<<"data science"<<endl;
	  
		
	}
~Student()	
{
	
}
	
};
class Teacher
{
    private:
	string name;
	string experience;
    string m,n,p;
    public:
	//DEFAULT CONSTRUCTOR
	Teacher()
	{
		
	}
	//PARAMETRIZED CONSTRUCTOR
	Teacher(string n,string e)
	{
		name = n;
		experience = e;
	}
	//COPY CONSTRUCOR
	Teacher(Teacher &obj)
	{
	    name =obj.name;
	    experience = obj.experience;
	}
	void displayData()
	{
		cout<<"NAME="<<name<<endl;
		cout<<"EXPERIENCE="<<experience<<endl;
	}
	void teachData()
	{
	
	  cout<<"ali"<<endl;
	  cout<<"amna"<<endl;
	  cout<<"yusra"<<endl;
		
		
	}
~Teacher()
{
   
}

	
	
};
int main()
{
	Student s1,s2(11,"Ali","first");
	s2.displayData();
	Student s3(s2);
	s3.displayData();
	s1.learnData();
	
	
	Teacher t1,t2("hamna","three_years");
	t2.displayData();
	Teacher t3(t2);
	t3.displayData();
	t1.teachData();
	
}


