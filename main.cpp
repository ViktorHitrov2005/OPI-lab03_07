#include <iostream>
 #include <fstream>
 using namespace std;

int main()
 {
 ifstream cin("INPUT.TXT");
 ofstream cout("OUTPUT.TXT");
 int n; //ввод количества человек в очереди
 cin>>n;
 if(n>145){ //в день две кассы не могут принять большее кол-во человек
 cout<<"NO";
 }else{
 int rest=(n*10)/2-5;  //вычисляем время ожидания  Василия в минутах
 int mins=rest%60;  //определение оставшихся минут
 int hours=(rest-mins)/60; //определение оставшихся часов
 cout<<hours<<" "<<mins; //вывод результата
 }
 return 0;
 }
