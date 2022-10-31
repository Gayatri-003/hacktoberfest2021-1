#include<iostream>
#include<math.h>
#include<Windows.h>
using namespace std;
class lover
{
    int lovers ;
    char u[50];
    char lv[50];
public:
    void input();
    void output();

};
void lover::input()
{
    cout<<"\nenter your name\n\t ";
    cin>>u;
   
    cout<<"\nenter your  lover name\n\t ";
    cin>>lv;
}
void lover::output()
{
lovers=(rand()%100);
        //cout<<"\n\tyour love % is being calculating by the love calculator\n\t";
        Sleep(1000);
        cout<<"\n\t"<<u<<"your love percentage is   ="<<lovers<<"\twith your lover "<<lv<<endl;

}
int main()
{
    lover s;
    char ch;
    do
    {
        system("cls");
    s.input();
    s.output();
    cout<<"\n\tdo you want to calucate your love for other lover   (y/n) \n=";
    cin>>ch;
    }
    while(ch=='y'||ch=='Y');
        system("pause");
        system("cls");
        return 0;
}
