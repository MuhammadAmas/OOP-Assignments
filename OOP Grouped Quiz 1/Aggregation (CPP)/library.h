#include<string>
using namespace std;


class library
{

public:
library();
library(string name,string address,int floor);
library(const library&newlibrary);
void printdetails();

   string libraryname;
   string location;
   int floors;

};
