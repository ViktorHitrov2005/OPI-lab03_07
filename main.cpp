#include <iostream>
#include "menu.cpp"

using namespace std;

//controller
int main()
{

    int res=menu();
    while(res!=0){
        switch(res){
        case 1:break;

        }


        res=menu();
    }
    cout<<"Thanks for using our program!";
    return 0;
}
