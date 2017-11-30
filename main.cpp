/*Factorial Calculator
Created on 25-9-17
Author - John Lucey
Last Edited 25-9-17*/

//Pre-Programming Directive
#include <iostream>
using namespace std;

//Main Function
int main()
{
    //Decalring Variables
    int input = -1, fact = 1;

    //Displays prog title
    cout <<"\n"<< "Factorial Calculator!" << endl;



    //While loop to ensure input is not < 0
    while(input < 0)
    {
        //Prompts user to enter calue
        cout<<"\n\n"<< "Enter number to be converted to Factorial (must be not be less than 0) : ";
        //imput is stored
        cin>>input;
    }

    //For loop to calulate factorial
    for (fact=1;input>0;input--)
    {
    //Factorial calulated
        fact = fact * input;
    }

   //result displayed to user
    cout<<"\n"<<"Factorial value  = "<<fact<<endl;

    return 0;
}
