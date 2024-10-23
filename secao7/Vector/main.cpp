//Section 7
//Vectors

#include <iostream>
#include <vector>

using namespace std;

int main() {

    //vector <char> vogais;  //Vazio
    // vector <char> vogais (5) //5 serão inicializados como zero
    vector <char> vogais {'a', 'e', 'i', 'o', 'u'};

    cout << vogais[0] << endl;
    cout << vogais[4] << endl;
    
    // vector <int> testScores (3); //3 elementos serão inicializados com 0
    // vector <int> testScores (3, 100); // 3 elementos serão inicializados como 100

    vector <int> testScores {100, 98, 89};

    cout << "nTestscores usando sintaxe de array: " << endl;
    cout << testScores[0] << endl;
    cout << testScores[1] << endl;
    cout << testScores[2] << endl;


    cout << "\nTestscores usando sintaxe de vetor: " << endl;

    cout << testScores.at(0) << endl;
    cout << testScores.at(1) << endl;
    cout << testScores.at(2) << endl;
    cout << "\nThere are " << testScores.size() << " scores in the vector" << endl;

    cout << "\n Enter 3 test scores: ";
    cin >> testScores.at(0);
    cin >> testScores.at(1);
    cin >> testScores.at(2);

    cout << "\n test scores updated" << endl;

    cout << testScores.at(0) << endl;
    cout << testScores.at(1) << endl;
    cout << testScores.at(2) << endl;

    cout << "\nEnter a test score to add to the vector: "; 

    int scoreToAdd {0};
    cin >> scoreToAdd;

    testScores.push_back(scoreToAdd);

    cout << "\n Enter one more test score to add to the vector";
    
    cin  >> scoreToAdd;

    testScores.push_back(scoreToAdd);
    
    

    cout << "\nTest score are now: " << endl;

    cout << testScores.at(0) << endl;
    cout << testScores.at(1) << endl;
    cout << testScores.at(2) << endl;
    cout << testScores.at(3) << endl;
    cout << testScores.at(4) << endl;

    cout << "\nThere are now " << testScores.size() << " socres in the vector" <<  endl;

    // cout << "\n this can couse an exeption!!" << testScores.at(10) << endl;

    // exemple of 2d-vector

    vector <vector<int>> movieRatigs {
        {1,2,3,4},
        {1,2,4,4},
        {1,3,4,5}
    };

    cout << "\nHere are the movie for reviwer #1 using array syntax: " << endl;
    cout << movieRatigs[0][0] << endl;
    cout << movieRatigs[0][1] << endl;
    cout << movieRatigs[0][2] << endl;
    cout << movieRatigs[0][3] << endl;

    cout << "\nHere are the movie for reviwer #1 using vector syntax: " << endl;
    cout << movieRatigs.at(0).at(0) << endl;
    cout << movieRatigs.at(0).at(1) << endl;
    cout << movieRatigs.at(0).at(2) << endl;
    cout << movieRatigs.at(0).at(3) << endl;


    return 0;
}