# include <iostream>
# include <string>

std::string replaceAll(std::string &,const std::string  &t, const std::string &r);


int main ()
{
	std::string s = "hello,world";
	std::string t = "l";
	std::string r = "ch";


	std::cout << replaceAll(s, t, r) << std::endl;

	return 0;
}

std::string replaceAll(std::string &s,  const std::string &t,  const std::string & r)

{    
		int pos = 0;
		int ind = 0;
		std::string ss = s;
               
		
	while ((pos = ss.find(t)) != std::string::npos)
	{
          	     
		  
                  
		   ind += (s.substr(0,pos)).size();
                       
                    
		    s.erase(ind,t.size());
                     
		    s.insert(ind,r);
		    
		    ind += r.size(); 
		  
		    
		   ss.erase(0, pos+t.size());
	       
	          
	}


	

	return s;
}
