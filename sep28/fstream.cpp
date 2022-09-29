
# include <iostream>
# include <fstream>


void check (std::string &, std::ofstream &);


int main ()
{
 std::string path1 = "tex.txt";
 std::string path2 = "ofstream.txt";
 std::ifstream fin (path1);
 std::ofstream fout (path2);
 std::string text;

	if (!fout.is_open())
	{
  		std::cout << "error" << std::endl;
	} 
 
 	if (!fin.is_open())
	{
		 std::cout << "error";
	}
	else
	{
  		while (getline(fin,text))
  		{
    	check(text,fout);
  		}
 	}
	
	fin.close();
	fout.close();
}

void check (std::string &s, std::ofstream &f)
{
  int i = 0;
  std::string  t = "";

	while (s[i] != ' ')
	{ 
 		if (s[i] != ' ')
 		{
 	 	t += s[i];
 		}
 	++i;
	}
 
  f << t << '\n'; 
  t = "";
	
	while (s[i] != ',')
	{
   		if (s[i] != ' ')
  		{
   		t += s[i];
  		}
 	++i;
	}

  f << t << '\n';
  t = "";

	while (i < s.size())
	{ 
  		if (s[i] != ',' && s[i] != ' ')
  		{
   		t += s[i];
  		} 
  	++i;
	}
	
	f << t << '\n';	
}
