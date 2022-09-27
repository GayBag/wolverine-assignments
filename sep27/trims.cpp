# include <iostream>
# include <vector>

std::string my_rtrims (std::string str)
{
   std::string  s;
   
  int ind=0; 
  for (int i=str.size()-1;i>0;--i)
  {
    if (str[i]==' ')
    {
      ind=i;
      
    }
   
  }
 for (int i=0;i<ind;++i)
 {
  s+=str[i];
 
 } 
   str=s;
  
   
std::cout<<ind;
   
   return str;
}

int main  ()
{

	std::string str = "hello   ";

	std::cout << my_rtrims(str);


	return 0;


}
