# include <iostream>
std::string my_ltrims (std::string&);

int main ()
{
    std::string str = "   hello";

    std::cout<<my_ltrims(str)<<std::endl;


    return 0;
  }
std::string my_ltrims (std::string &str)
{
    std::string s;
    int i=0;
    int ind=0;
     while (str[i])
    {
     if (str[i]==' ')
     {
       ind++;;
           
     }
      ++i;
    
    }
     
     str.erase(0,ind);
return str;


}
