# include <iostream>
# include <string>
std::string tolowcase(std::string&);


int mian ()

{


  std::string str;
  std::cin>>str;
  
 tolowcase(str);
 std::cout<<str<<std::endl;  
 


}

std::string tolowcase (std::string &str)
{

 for (int i=0;i<str.size();++i)
{

 if (str[i]>='A'&&str[i]<='Z')
{

str[i]+=32;

}


}

return str;


}

