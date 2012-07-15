#include <iostream>
#include <string>


using namespace std;

int main()
{
    string Inv[5];
    string whatdo;
    string verb;
    int tlen;
    int len;

goto Begin;
ReRoom1:
    cout<< "...and the horse you rode in on.";
goto Room1;
Begin:
    cout << "\n\nYou can 'look', 'use', 'inv', or 'help'.\n";
Begin2:
    cout << "You find yourself in a room.\n\n";
Room1:

    cout << ">";
    getline (cin, whatdo);

    if (whatdo == "look")
    {
        cout << "\n\nYou see a door and a desk with a computer on it.\n\n";
    }

    else
    {
        cout << "\n\nI can't understand that.";
        goto Begin;
    }






}
