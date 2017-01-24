#include <iostream>

using namespace std;

class Sort
{
    public:
        int n = 5;
        int a[5] = {4,2,3,5,1};
        virtual int bubble_sort()  = 0;
};

class bubble : public Sort
{
    public:
 
        int bubble_sort(){
            int temp;
            for(int i=0;i<n;i++) {
                for(int j=0;j<n-i-1;j++){
                    if(a[j]>a[j+1]){
                    temp=a[j];  
                    a[j]=a[j+1]; 
                    a[j+1]=temp;               
                    }    
                }     
            } 
             return *a;
        }
       
}; 
 