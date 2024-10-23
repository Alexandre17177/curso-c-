#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> vector1;
    vector <int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    cout << "\nvector1: " << vector1.at(0) <<"\n" << vector1.at(1) << endl;
    cout << "\nvector1 size: " << vector1.size() << endl;
    
    vector2.push_back(100);
    vector2.push_back(200);

    cout << "\nvector2: " << vector2.at(0) <<"\n" << vector2.at(1) << endl;
    cout << "\nvector2 size: " << vector2.size() << endl;

    vector <vector<int>> vector_2D;

    vector_2D.push_back(vector1);
    vector_2D.push_back(vector2);

    cout << vector_2D.at(0).at(0) << endl;
    cout << vector_2D.at(0).at(1) << endl;
    cout << vector_2D.at(1).at(0) << endl;
    cout << vector_2D.at(1).at(1) << endl;

    vector1.at(0) = 1000;

    cout << vector_2D.at(0).at(0) << endl;
    cout << vector_2D.at(0).at(1) << endl;
    cout << vector_2D.at(1).at(0) << endl;
    cout << vector_2D.at(1).at(1) << endl;

    cout << "\n vector1: " << vector1.at(0) << endl;


    return 0;
}