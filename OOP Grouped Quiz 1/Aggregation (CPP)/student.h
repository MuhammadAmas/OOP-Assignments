#include<string>
using namespace std;
class student
{
private:
    string name;
    string department;
    int batch_no;
public:
    student();
    student(string id,string depart,int year);
    student(const student&stud);
    void set(string newname,int newdepart,int newbatch);
    void show();
};
    