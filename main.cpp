#include"headerfiles/headers.h"
#include"headerfiles/login.h"
#include"headerfiles/register.h"

int main()
{
    int choice;

    cout<<"Enter your choice\n===========\nPress 1 to Register: \nPress 2 to Login:\n";cin>>choice;

    if(choice == 1)
    {
        registration();
        main();
    }
    else if(choice == 2)
    {
        bool stat = isLoggedIn();

        if(!stat)
        {
            cout<<"Invalid Login"<<endl;
            main();
            return 0;
        }
        else
        {
            cout<<"Login Successful"<<endl;
            return 1;
        }
    }
}
