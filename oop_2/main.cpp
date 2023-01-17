#include <iostream>
#include <string>
#include "oop2.h"
using namespace std;

int main()
{
    string sharp = "#";
    string str;
    cout << "Vvedite stroku" << endl;
    getline(cin, str);
    try
    {
        int leng = str.length();
        if ((leng <= 100) && (leng != 0))
        {
            Upper_Case(str);
            Delete_Spaces(str);    
            str = sharp + str;
            cout << str << endl;
        }
        else
            throw(leng);
    }
    catch (int sizez)
    {
        cout << "ERROR: Yor string has more than 100 or 0 symbols." << endl;
        cout << "Length of your string is " << sizez;
    }
}