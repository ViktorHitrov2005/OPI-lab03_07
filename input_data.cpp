#include <iostream>
#include <fstream>
using namespace std;
//модуль ввода данных



//функция для ввода данных из файла
// возвращает true, если данные прочитаны успешно
bool inputArray(char *fname, int& n, float *&x, float *&y)
{
    ifstream fIn(fname);
    if(!fIn.is_open())
    {
        return false;
    }
    fIn>>n;
    if(n<0)
        return false;

    x=new float[n];
    y=new float[n];
    for(int i=0;i<n;i++) //добавить проверку на то, был ли конец файла (не хватает данных)
        fIn>>x[i]>>y[i];
    fIn.close();
    return true;
}

//функция для ввода данных c склавиатуры
//возвращает true, если данные прочитаны успешно
bool inputArray(int& n, float *&x, float *&y)
{
    cin>>n;
    if(n<0)
        return false;
    x=new float[n];
    y=new float[n];
    for(int i=0;i<n;i++) //добавить проверку на то, был ли конец файла (не хватает данных)
        cin>>x[i]>>y[i];
    return true;
}
