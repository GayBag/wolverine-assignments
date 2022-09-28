# include <iostream>
# include <string>
void memcopy(char *, char *, int n);


int main ()
{
 
 char arr1[] = "hello"; 
 
 char arr2[10]; 

 int n = 10;

  memcopy (arr2,arr1,n);

}

void memcopy(char * arr2, char * arr1, int n )
{
 int size=0;
 int j=0;
while (arr1[j]!='\0')
{
  size++;
  ++j; 
}


 for (int i = 0; i<size; i++)
{
 
 arr2[i]=arr1[i];
 

}
arr2[size]='\0';

for (int i = 0; i < size; ++i)
{
   std::cout << arr2[i]<<" ";

}


} 