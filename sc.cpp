#include <iostream>

using namespace std;

class simpleClass
{
    private:
        int someData;
    public:

        void setData(int data)
        {
            someData = data;
        }

        void showData()
        {
            cout << "Data is " << someData << endl;
        }
};

int main()
{
    simpleClass sc1, sc2;

    sc1.setData(1066);
    sc2.setData(1776);

    cout << "Output of the program would be: "<< endl;

    sc1.showData();
    sc2.showData();
}
