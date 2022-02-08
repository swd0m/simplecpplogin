#include"headers.h"

bool isLoggedIn()
{
    string username, password, un, pw;

    cout<<"Enter Username:";cin>>username;
    cout<<"Enter Password:";cin>>password;

    ifstream read( ".\\user_details\\" + username + ".bat" );
    getline(read, un);
    getline(read, pw);

    if(username == un && password == pw){return true;}
    else{return false;}
}


