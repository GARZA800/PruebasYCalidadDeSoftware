#include <iostream> 
#include "first.h"
 
 using namespace std;
 
 int fact(int num) {
	int res;

	if(num == 1 || num == 0) 
	    return 1;
	else if (num < 0)
	    return 0;
	else 
	    res = num * fact(num - 1);
	
	return res;
}
