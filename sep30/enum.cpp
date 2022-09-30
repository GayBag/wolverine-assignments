# include <iostream>
# include <map>

enum Colors {Red,Blue,Green,Black,White};

std::string toString(Colors col);
Colors toEnum(std::string const&);


int main ()
{
  std::cout << toString(Red) << std::endl;

  std::cout << toEnum ("Red") << std::endl;


return 0;
}

std::string toString(Colors col)
{
 std::map <Colors, std::string > mp;

 mp[Red] = "Red";

 mp[Blue] = "Blue";

 mp[Green] = "Green";

 mp[Black] = "Black";

 mp[White] = "White";


return mp[col];
}

Colors toEnum(std::string const& s)
{
 std::map <std::string, Colors> mp;

 mp["Red"] = Red;

 mp["Blue"] = Blue;

 mp["Green"] = Green;

 mp["Black"] = Black;

 mp["White"] = White;

return mp[s];
}  

