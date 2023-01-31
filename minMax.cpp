#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int numbers[] = {10, 35, 18, 7, 8, 15, 11};
    int max = numbers[0]; //starting value the number index of zero is equal to 10
    int min = numbers[0]; //starting value... dahil ito yung una nating value di pa naten alam

    int numbersLength = sizeof(numbers) / sizeof(int);// to count the length of the numbers

    for(int i = 0; i < numbersLength; i++) // counter naten
    {
        if(numbers[i] >= max) // kung yung numbers index of i daw mas malaki o di kaya equal sa max value naten 10 >= 10
        {
            max = numbers[i]; //kung true yung statement set naten yung max sa numbers index of i kasi mas malaki yung numbers[i] 10 = 10
        }

        if(numbers[i] <= min) // dito titignan kung mas mababa naman sya  sa min
        {
            min = numbers[i]; // kapag true set naten o iupdate naten value ng min sa number[i] 
        }
    }

    cout << "Max : " << max << endl;
    cout << "Min : " << min;
}
