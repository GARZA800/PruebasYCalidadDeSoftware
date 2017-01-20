#include <string.h>
#include <iostream>
#include <fstream>
#include "cifrado.h"

using namespace std;

string decrypt(string word);
bool readFile(string word);

int main()
{

    string code = "RLCOPY";
    bool findWord = false;
    int i = 0;

    while(count < 28)
    {

        if(searchFile(code))
        {
            findWord = true;
            break;
        }
        code = decrypt(code);
        ++i;
    }
    if(findWord)
    {
        cout << code << endl;
    }

    return 0;
}

bool readFile(string word)
{
    ifstream diccionario ("diccionario.txt");
    string words;
    if(diccionario.is_open())
        {
             while(getline(diccionario, words))
                {
                    if(word.compare(words) == 0)
                    {
                        diccionario.close();
                        return true;
                    }
                }
                diccionario.close();
                return false;
               
        }
            
        else 
        cout << "Unable to open file"; 
}

string decrypt(string word)
{
    for (int i=0; i < word.length; i++)
    {
        else if (word[i] >= 'a' && word[i] <= 'z')
        {
            word[i] = (char)(((word[i] +  1 - 65) % 26) + 65);
        }
    }
    
    return word;
}

