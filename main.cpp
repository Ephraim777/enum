#include <iostream>
using namespace std;
enum class months :int {
    January =1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};
int main()
{
    setlocale (LC_ALL,"Rus");


    int month;
    do {
        std::cout<<"Введите номер месяца: ";
        cin>> month;
        if(month== 0){
            cout<< "Пока";
            return 0;
        }
        switch(static_cast<months>(month)){

            case months::January:   cout<< "Январь"; break;
            case months::February:  cout<< "Февраль"; break;
            case months::March:     cout<< "Март"; break;
            case months::April:     cout<< "Апрель"; break;
            case months::May:       cout<< "Май"; break;
            case months::June:      cout<< "Июнь"; break;
            case months::July:      cout<< "Июль"; break;
            case months::August:    cout<< "Август"; break;
            case months::September: cout<< "Сентябрь"; break;
            case months::October:   cout<< "Октябрь"; break;
            case months::November:  cout<< "Ноябрь"; break;
            case months::December:  cout<< "Декабрь"; break;
            default: cout<< "Неправильный номер!!!"; break;

        }
        cout<< endl;


    }while (month!=0);


}