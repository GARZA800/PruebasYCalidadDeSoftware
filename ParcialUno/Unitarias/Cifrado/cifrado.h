#include <iostream>
#include <string>
#include <stdio.h>
#include <fstream>

using namespace std;

class Cifrado
{
    public: 
        Cifrado(){}
        ~Cifrado(){}
        virtual int decrypt(string encrWord) = 0;
};