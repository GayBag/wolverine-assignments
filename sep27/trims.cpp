# include <iostream>
# include <string>
std::string mtrims (std::string&);
int main ()
{

 std::string str;
std::cin>>str;

std::cout<<mtrims(str)<<std::endl;

return 0;


}

std::string mtrims (std::string &str)
{

  int ind1=0;
  int ind2=0;
  int i=0,j=str.size()-1;
  while (str[i]!='\0')
{
   if  (str[i]!=' ')
{
  ind1=i;
 
break; 
 
}
++i;
}
while (str[j]!='\0')
{
if (str[j]!=' ')
{
 ind2=j;

break;

}
++j;

}


str.erase (0,ind1);
str.erase(ind2+1,str.size());


return str;

}




