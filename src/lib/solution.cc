#include "solution.h"
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

bool Solution::StringPalinCheck(string& s) { 
  
  //transform(s.begin(),s.end(),s.begin(),::tolower);
  if (s == string(s.rbegin(), s.rend())) {
    //cout << input << " is a palindrome";
    return true;
}
else
{
  return false;
}


}
