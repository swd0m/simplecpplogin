#include"headers.h"

void registration()
{
    string username, password;

    cout<<"Select a Username: "; cin>>username;
    cout<<"Select a Password: "; cin>>password;

    ofstream file;
    file.open( ".\\user_details\\" + username + ".bat" );
    file<<username<<endl<<password;
    file.close();

}
