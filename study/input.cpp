#include<cstdlib>
#include<iostream>
#include<conio.h>
#include<ctime>
using namespace std;

void tips()
{
    cout << "=============================" << endl;
    cout << "======Press any key continue=======" << endl;
    cout << "======Press Esc exit game=========" << endl;
    char ch = _getch();
    if (ch==27)  //Esc
    {
        exit(0);
    }
}

void rand_ch(char* arr)
{
    srand((unsigned int)time(NULL))
    for (int i=0;1<50;i++)
    {
        arr[i] = rand() % 26 + 'a';  //a-z 
    }
}

void print_ch(char * arr)
{
    unsigned int start_time;
    unsigned int end_time;
    int val = 0;
    for(int i=0; i<50; i++)
    {
        char ch = _getch();
        if (i == 0)
        {
            start_time = time(NULL);  //time 19700101 - now
        }
        if (ch == arr[i])
        {
            cout << ch;
            val++
        }
        else
        {
            cout << "_";
        }
    }
    end_time = time(NULL);
    cout << "Time taken: " << end_time - start_time << " second" << endl;
    cout << "Accuary:  " << ((val/50.0) * 100) << endl;
}
int main()
{
    //1.character
    char arr[51];
    tips();
    //2.random
    rand_ch(arr);
    cout << arr;
    //3.input
    print_ch(arr);

    return 0;
}
