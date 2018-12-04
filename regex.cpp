#include <iostream>
#include <string>
#include <regex>
using namespace std;
int countMatchInRegex(std::string s, std::string re)
{
    std::regex words_regex(re);
    auto words_begin = std::sregex_iterator(
        s.begin(), s.end(), words_regex);
    auto words_end = std::sregex_iterator();

    return std::distance(words_begin, words_end);
}
int main (){
string str;
smatch results;
string st ("(1)(0*)(1)");
while(1){
cin>>str;
 

std::cout << countMatchInRegex(str,st) << std::endl;
}
return 0;

}
