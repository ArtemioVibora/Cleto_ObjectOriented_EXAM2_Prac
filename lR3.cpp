#include <iostream>

using namespace std;

class Length
{
private:
    int feet;
    float inches;
public:
    Length() : feet(0), inches(0.0f) {}
    Length(int ft, float in) : feet(ft), inches(in) {}

    void getLength()
    {
        cout << "Enter Feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;

        while (inches >= 12)
        {
            inches = inches - 12;
            ++feet;
        }
    }

    void showLength()
    {
        cout << feet << " feet and " << inches << " inches." << endl;
    }

    void addLength(Length, Length);


};

void Length::addLength(Length l1, Length l2)
{

    inches = l1.inches + l2.inches;
    feet = l1.feet + l2.feet;

    while(inches >= 12)
    {
        inches = inches - 12;
        ++feet;
    }
}

int main()
{
    Length l1, l3;

    Length l2(11, 6.25);

    l1.getLength();
    l3.addLength(l1, l2);

    cout << endl << "Length 1 = "; l1.showLength();
    cout << "Length 2 = "; l2.showLength();
    cout << "Length 3 = "; l3.showLength();
}
