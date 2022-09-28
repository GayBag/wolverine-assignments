# include <iostream>
# include <string>

bool endstart (std::string s,std::string d)
{
 int count=0;
 int size1= d.size();
 int size2=s.size(); 
bool flag=false;
for (int i=size2-1,j=size1-1;j>=0;--i,j--)
{ 
  
    
if (s[i]==d[j])
{
 count++;

}
 


}
if (count==size1)
{

flag=true;
}

return flag;
}

int main ()
{

std::string s="hello,world";
std::string d="wold";

if (endstart (s,d))
{

std::cout<<"true"<<std::endl;

}
else 
{
 std::cout<<" false"<<std::endl;

}




}

