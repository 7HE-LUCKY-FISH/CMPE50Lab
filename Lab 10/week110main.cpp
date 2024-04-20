#include "weekhead10-2.h"
#include "weekhead10.h"
//#include "week110inh.h"
#include "week110inh.cpp"
#include "week110-1app.cpp"
#include "week110app.cpp"

int main() {
	Administrator admin;
	string s;
	cout<<"Enter supervisor name"<<endl;
	getline(cin, s);
	admin.set_supervisor(s);
    admin.input();
	admin.print();

    //Administrator admin("John Doe", "123-45-6789", 100, "Director", "Production", "Boss");
    admin.print_check();

    return 0;
}
/*

Enter supervisor name
david
enter name
bryan
enter ssn
1016188126
enter title
director
enter area of responsibility
porduction
enter salary
124000
Name: bryan
director of porduction
Supervisor: david
SSN: 1016188126
Salary: 124000

__________________________________________________
Pay to the order of bryan
The sum of 124000 Dollars
_________________________________________________
Check Stub NOT NEGOTIABLE
Employee Number: 1016188126
Administrator. Regular Pay: 124000
_________________________________________________*/