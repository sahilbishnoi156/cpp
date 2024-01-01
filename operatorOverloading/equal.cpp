#include <iostream>
using namespace std;
class ABC{
    public:
        int* x;
        ABC(int y=0){
            x = new int(y);
        };

        void setx(int y){
            *x = y;
        }
        void getx(){
            cout << (*x);
        }
         ~ABC()
        {
            delete x;
        }
        ABC& operator=(ABC &temp){
           
           if (this != &temp)
           {
            *x = *temp.x; 
           }
           
            return *this;
        }
       
};


int main(){
    ABC a1(2);
    ABC a2;
    a2 = a1;
    a1.setx(4);
}