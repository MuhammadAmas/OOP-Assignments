#include "library.h"
#include<iostream>
#include<string>
using namespace std;

library::library(){
}
library::library(string name,string address,int floor){
    this->libraryname=name;
    this->location=address;
    this->floors=floor;
}
library::library(const library&newlibrary){
    libraryname=newlibrary.libraryname;
    location=newlibrary.location;
    floors=newlibrary.floors;

}
void library::printdetails(){
    cout<<libraryname<<endl<<location<<endl<<floors<<endl;
        
}
