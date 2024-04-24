#include<iostream>
using namespace std;
int main()
{
     char proceed;
     int choice,number1,number2,Result;
   do
   {

    std::cout<<"1.Add"<<std::endl<<"2.Subtract"<<std::endl<<"3.Multiply"<<std::endl<<"4.Divide"<<std::endl<<"5.Modulus"<<std::endl;
    std::cout<<"Enter your choice"<<std::endl;
    std::cin>>choice;
    
switch(choice)
{
    case 1:
    std::cout<<"Enter integer number 1:"<<std::endl;
    std::cin>>number1;

    std::cout<<"Enter integer number 2:"<<std::endl;
    std::cin>>number2;

    Result=number1+number2;
    std::cout<<"Result:"<<Result<<std::endl;
    break;
    
    case 2:
        std::cout<<"Enter integer number 1:"<<std::endl;
    std::cin>>number1;

    std::cout<<"Enter integer number 2:"<<std::endl;
    std::cin>>number2;

    Result=number1-number2;
    std::cout<<"Result:"<<Result<<std::endl;
    break;

    case 3:
        std::cout<<"Enter integer number 1:"<<std::endl;
    std::cin>>number1;

    std::cout<<"Enter integer number 2:"<<std::endl;
    std::cin>>number2;

    Result=number1*number2;
    std::cout<<"Result:"<<Result<<std::endl;
    break;

    case 4:
        std::cout<<"Enter integer number 1:"<<std::endl;
    std::cin>>number1;

    std::cout<<"Enter integer number 2:"<<std::endl;
    std::cin>>number2;

    Result=number1/number2;
    std::cout<<"Result:"<<Result<<std::endl;
    std::cout<<"The second integer is zero, divide by zero"<<std::endl;
    break;

    case 5:
        std::cout<<"Enter integer number 1:"<<std::endl;
    std::cin>>number1;

    std::cout<<"Enter integer number 2:"<<std::endl;
    std::cin>>number2;

    Result=number1%number2;
    std::cout<<"Result:"<<Result<<std::endl;
    break;
    
    default:
    std::cout<<" "<<std::endl;
}
 std::cout<<"press y to continue"<<std::endl;
 std::cin>>proceed;
}
while((proceed == 'y')|| (proceed == 'y'));

return 0;
}


