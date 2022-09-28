# include <iostream>
# include <string>

void memset(char * arr, char val, int count )
{
  for (int  i = 0;  i < count; ++i)
{

  arr[i] = val;

}
arr[count-1]='\0';
for (int i = 0; i < count; ++i)
{
 std::cout << arr[i] << " ";

}

}
int main ()
{

 const int count = 10;
 char arr[count];
 char val = 'G'; 

 memset (arr,val,count);


return 0;

}
