#include <iostream>


void interesting(){
    puts("Hey I Am Interesting");
};

int two(int a, int b){
    return (a+b);
};

int main(int argc, char const *argv[])
{
    // function pointers
    void (*imFunctionPointer) () = interesting; 
    int (*giveTwo) (int, int) = two; 
    //~ points to note
    // don't put parenthesis while writing function name
    // put parenthesis after pointer name to show it is function pinter

    imFunctionPointer();
    std::cout << giveTwo(4,5) << std::endl;  // line 1
    std::cout << giveTwo << std::endl;  // line 2
    return 0;
}
