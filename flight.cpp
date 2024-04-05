#include <iostream>
#include <string>
using namespace std;
class flight
{
private:
    int flight_no;
    float distance, fuel;
    string destination;
    float calfuel()
    {
        if (distance <= 1000)
        {
            fuel = 500;
        }
        else if (distance > 1000 && distance <= 2000)
        {
            fuel = 1100;
        }
        else
        {
            fuel = 2200;
        }
        return fuel;
    }

public:
    int c;
    void feedinfo()
    {
        cout << "enter flight number: ";
        cin >> flight_no;
        cout << "enter destination: ";
        cin >> destination;
        cout << "enter distance: ";
        cin >> distance;
        c = calfuel();
    }
    void showinfo()
    {
        cout<<endl<<endl;
        cout << "flight number is: " << flight_no << endl;
        cout << "destination of flight is: " << destination << endl;
        cout << "flight covers " << distance << " km distance " << endl;
        cout << "flight needs " << c << " litre of fuel to visit " << destination << endl;
    }
};
int main()
{
    flight f;
    f.feedinfo();
    f.showinfo();

}