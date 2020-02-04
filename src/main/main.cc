#include <iostream>
#include "src/lib/solution.h"
#include <vector>
using namespace std;

int main()
{
    Solution solution ;
    string s="EE1";
    //cout<<"before transform = "<< s <<endl;
    bool flag=solution.StringPalinCheck(s);
    //std::cout << solution.PrintHelloWorld() << std::endl;
    //cout<<"after transform = "<< s <<endl;
    if(flag==true)
        cout<<"palindrome"<<endl;
    else 
        cout<<"not palindrome"<<endl;   

    return EXIT_SUCCESS;
}