# include <iostream>

int main ()
{
	int a=5;
        a--;
	std::cout<<a;

	if (a==0)
	{
	  return 0;
	}
	main ();
}

