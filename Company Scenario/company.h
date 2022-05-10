#include <iostream>
using namespace std;


class desk{
    public:
        desk();
        ~desk();
};
class office{
    public:
        office();
        ~office();
};
class pc{
    public:
        pc();
        ~pc();
        void turn_on();
        void turn_off();

};

class employee{
    public:
        employee(office *o);
        ~employee();
};

class boss : public employee{
    public:
        boss(office *o);     
        ~boss();
};
