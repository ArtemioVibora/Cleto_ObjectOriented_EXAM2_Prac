#include <iostream>

using namespace std;

class part
{
    private:
        int modelNumber;
        int partNumber;
        float cost;

    public:

        void setPart(int mn, int pn, float c)
        {
            modelNumber = mn;
            partNumber = pn;
            cost = c;
        }

        void showPart()
        {
            cout << "Model: " << modelNumber << endl;
            cout << "Part: " << partNumber << endl;
            cout << "Cost: " << cost << " pesos" << endl;
        }
};

int main()
{
    part part1;
    part1.setPart(6244, 373, 217.55);

    part1.showPart();
}
