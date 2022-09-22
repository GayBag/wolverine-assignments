# include <iostream>
# include <map>
int main ()
{
        

int sum (int a,int b);
int sub (int a,int b);
int mul (int a,int b);
int divv (int a,int b);


int main ()
{
	int num1;
        int num2;
	char op;
       std::cin>>num1>>op>>num2;

       std::map <char,int (*)(int,int)>calc;

       calc ['+'] = &sum;
       calc ['-'] = &sub;
       calc ['*'] = &mul;
       calc ['/'] = & divv;



      std::cout<<calc[op](num1,num2)<<std::endl;


      return 0;

}

int sum (int a,int b)
{

   
	return a+b;

}

int sub (int a,int b)
{
 
	return  a-b;


}

int mul (int a,int b)
{


	return a*b;

}

int divv (int a,int b)
{


	return a/b;
}
