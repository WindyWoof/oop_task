#include "oop2.h"
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

void Upper_Case(string& str)
{
    for (int i = 0; i < str.length(); i++)
    {
        int j = i + 1;
        if ((str[i] == ' ') && (str[j] != ' '))
        {
            switch (str[j])
            {
            case 'a':
                str[j] = 'A';
                break;
            case 'b':
                str[j] = 'B';
                break;
            case 'c':
                str[j] = 'C';
                break;
            case 'd':
                str[j] = 'D';
                break;
            case 'e':
                str[j] = 'E';
                break;
            case 'f':
                str[j] = 'F';
                break;
            case 'g':
                str[j] = 'G';
                break;
            case 'h':
                str[j] = 'H';
                break;
            case 'i':
                str[j] = 'I';
                break;
            case 'j':
                str[j] = 'J';
                break;
            case 'k':
                str[j] = 'K';
                break;
            case 'l':
                str[j] = 'L';
                break;
            case 'm':
                str[j] = 'M';
                break;
            case 'o':
                str[j] = 'O';
                break;
            case 'p':
                str[j] = 'P';
                break;
            case 'q':
                str[j] = 'Q';
                break;
            case 'r':
                str[j] = 'R';
                break;
            case 's':
                str[j] = 'S';
                break;
            case 't':
                str[j] = 'T';
                break;
            case 'u':
                str[j] = 'U';
                break;
            case 'v':
                str[j] = 'V';
                break;
            case 'w':
                str[j] = 'W';
                break;
            case 'x':
                str[j] = 'X';
                break;
            case 'y':
                str[j] = 'Y';
                break;
            case 'z':
                str[j] = 'Z';
                break;
            default:cout << "" << endl;
            }
        }
        else if (str[i] != ' ')
            str[0] = (char)toupper(str[0]);
    }
}


void Delete_Spaces(string& str)
{
    string::iterator end_pos = remove(str.begin(), str.end(), ' ');
    str.erase(end_pos, str.end());
}

string stringToHashtag(string str)
{   
    string sharp = "#";
    try
    {
        int leng = str.length();
        if ((leng <= 100) && (leng != 0))
        {
            Upper_Case(str);
            Delete_Spaces(str);    
            str = sharp + str;
            return(str);
        }
        else
            throw(leng);
    }
    catch (int sizez)
    {
        return("ERROR: Your string has more than 100 or 0 symbols. Length of your string is" + to_string(sizez));

    }
}