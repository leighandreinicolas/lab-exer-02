#include<iostream>

using namespace std;

int main()

{

    int num,factorial=1;

    cout<<"Please enter a number:  ";

    cin>>num;

    for(int a=1;a<=num;a++)

    {

        factorial=factorial*a;

    }

cout<<"Factorial of "<<num<< "  is:  "<<factorial<<endl;

    return 0;

}

