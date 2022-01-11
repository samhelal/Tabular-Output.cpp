/* 8. 4.18 (Tabular Output) Write a C++ program that uses a statement and the tab escape
sequence following table of values: ( c++ how to program )
*/
#include <iostream>
using namespace std ;

int main(){
    int number(1) ;
    cout << "N\t10*N\t100*N\t1000*N"<<endl ;

    while(number <= 5){
        
        cout<<"\n"<<number<<"\t"<<10*number<< "\t"<<100*number<<"\t"<<1000*number<<endl ;
        number++ ;
    }
}
