# include <iostream>
# include <string>
bool startwith (std::string s,std::string d);

int main ()
{

 std::string s="hello,world";
std::string d="world";


if (startwith(s,d))

{
  std::cout<<" true"<<std::endl;

}
else
{
std::cout<<"false"<<std::endl;

}
}
bool startwith (std::string s,std::string d)
{
   bool flag=false;
   int count=0;  
   int n=d.size();
   for (int i=0;i<d.size();++i)
{
 if (s[i]==d[i])
{
  count++;

}

}
if (count==n)
{
 flag=true;
}

return flag;



}


