#include <string.h>
#include "cifrado.h"

class Cesar : public Cifrado
{
    public: 
        Cesar(){}
        ~Cesar(){}
        virtual int decrypt(string encrWord);
};
        
        int Cesar::decrypt(string encrWord)
        {
            int offset = 0;
            string tryWord, word;
            ifstream diccionario ("diccionario.txt");
            if(diccionario.is_open())
            {
                while (offset <= 25)
                {
                    for (int i = 0; i < encrWord.length(); i++)
                    {
                        tryWord[i] = ((encrWord[i]+offset) % 26); 
                    }
                    
                    while (getline(diccionario, word))
                    {
                       if(tryWord.compare(word)) 
                       {
                           return offset;
                       }
                    }
                    offset++;
                    diccionario.clear();
                    diccionario.seekg(0, ios::beg);
                }
                diccionario.close();
            }
            
            else 
            cout << "Unable to open file"; 
        }
