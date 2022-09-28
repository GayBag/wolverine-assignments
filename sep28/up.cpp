#include <iostream>
# include <string>
std::string uppercase (std::string&);

int main ()
{

 std::string str;
 std::cin>>str;
 uppercase (str);
 std::cout<<str<<std::endl;


}

std::string uppercase (std::string & str)

{

for (int i=0;i<str.size();++i)
{
if (str[i]>='a'&&str[i]<='z')
{
str[i]-=32;

}


} 

return str;

}
