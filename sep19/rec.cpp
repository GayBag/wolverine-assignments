# include <iostream>

int print (int);

int main ()
{
	int a=5;
	std::cout<<print (a);

	return 0;
}

int print (int a)
{
       
	int c=0;	
	if (a==0)
	{
	  return 0;
	}
	
	
       std::cout<<c<<std::endl;
     
      return  c=print (--a);
       
   
}
