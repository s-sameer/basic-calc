#include <iostream>
#include <cmath> //including cmath to use math functions

using namespace std;

// A function is a block of code that performs a specific task
double add (double one, double two){
    double result= one+two;
    return result;
}

double sub (double one, double two){
    double result= one-two;
    return result;
}

double multi (double one, double two){
    double result= one*two;
    return result;
}

double div (double one, double two){
    double result= one/two;
    return result;
}

// Every c++ program needs to have exactly one main function
int main(){
    string name;
    cout << "Enter your name: ";
    // To get string inputs we use getline instead of cin...bc the strings may have a space
    // getline gets the entire line of input
    getline(cin, name);
    double num1, num2, result;
    char op;
    bool error;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter a operator: ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;
    
    if (op=='+'){
        result=add(num1, num2);
    }
    else if (op=='-'){
        result=sub(num1, num2);
    }
    else if (op=='*'){
        result=multi(num1, num2);
    }
    else if (op=='/'){
        result=div(num1, num2);
    } 
    else {
        error=true;
    }

    if (!error){
        cout << "Hi "+name+","<<endl; 
        // endl inserts a newline and flushes the stream
        cout <<"**************************"<<endl;
        cout << "The result of the operation is: " << result;
    } else {
        cout << "Error. Please try again with a correct operator!";
    }
}


