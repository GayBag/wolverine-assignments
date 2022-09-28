# include <iostream>
# include <string>
# include <vector>
std::vector<std::string> split (std::string s,std::string d);


int main ()
{

 std::string str1 = "he,ll,o";
 std::string str2=",";
 split (str1,str2);
 
}

std::vector<std::string> split (std::string s,std::string d)
{
  int  pos=0;;
  
   
 std::string token;
 std::vector<std::string> tok; 
 
while ((pos=s.find(d))!=std::string::npos)
{
 
 
  token=s.substr(0,pos);
    
  s.erase(0,pos+d.size());
  
  tok.push_back(token);

}

tok.push_back(s);
 

return tok;

}


 




