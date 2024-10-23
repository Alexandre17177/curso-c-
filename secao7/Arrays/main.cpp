#include <iostream>

using namespace std;

int main() {

    char vogais[] {'a','e','i','o','u'};
    cout << "\n o primeiro vogal e: " << vogais[0] << endl;
    cout << "o ultimo vogal e : " << vogais [4] << endl;

    // cin >> vogais[5];

    double hi_temps [] {90.1, 89.8, 77.5, 81.6};
    cout << "\nthe first high temperature is: " << hi_temps[0] << endl;

    hi_temps[0] = 100.7;;

    cout << "the first high temperature is now: " << hi_temps[0] << endl;
    //

    int test_scores [] {100, 90, 80, 70, 60};
    cout << "\nfirst score at index 0: " << test_scores[0] << endl;
    cout << "second score at index 1: " << test_scores[1] << endl;
    cout << "third score at index 2: " << test_scores[2] << endl;
    cout << "fourth score at index 3: " << test_scores[3] << endl;
    cout << "fifth score at index 4: " << test_scores[4] << endl;

    cout << "\nEnter 5 test scores: ";
    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];
    cin >> test_scores[3];
    cin >> test_scores[4];

    cout << "\nfirst score at index 0: " << test_scores[0] << endl;
    cout << "second score at index 1: " << test_scores[1] << endl;
    cout << "third score at index 2: " << test_scores[2] << endl;
    cout << "fourth score at index 3: " << test_scores[3] << endl;
    cout << "fifth score at index 4: " << test_scores[4] << endl;

    cout << "\nNotice what values of the arry name is: " << test_scores << endl;
    

    return 0;
}