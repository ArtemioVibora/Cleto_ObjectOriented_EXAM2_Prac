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
        cout << "Enter feet: ";
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
        cout << feet << " feet and " << inches << " inches.";
    }

    Length addLength(Length l2)
    {
        Length temp;

        temp.inches = inches + l2.inches;
        temp.feet = feet + l2.feet;

        while(temp.inches >= 12)
        {
            temp.inches = temp.inches - 12;
            ++temp.feet;
        }

        return temp;
    }

};

int main()
{
    Length l1, l3;
    Length l2(11, 6.25);

    l1.getLength();
    l3 = l1.addLength(l2);

    cout << "\nLength 1 = ";
    l1.showLength();
    cout << "\nLength 2 = ";
    l2.showLength();
    cout << "\nLength 3 = ";
    l3.showLength();
}
