#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> converter(string arr[5][3]){
    vector<string> finalVec;

    for(int i = 0; i < 5; i++){ // Iterates through rows
        for(int j = 0; j < 3; j++){ // Iterates through columns

            string currValue = arr[i][j];
            bool isDuplicate = false;

            for(const string element : finalVec){ // Iterates through final vector without changing the values
                if(element == currValue){ // If the value had a duplicate break the loop and move on
                    isDuplicate = true;
                    break;
                }
            }
            if(!isDuplicate){ // If no duplicate is found, add it to the final vector
                finalVec.push_back(currValue);
            }

        }
    }
    return finalVec;
}


int main() {
    string dungeonGator[5][3] = {{"Pride and Prejudice", "Bible","Don Quixote",},
                        {"Go Gators","The History of Broward County", "C Plus Plus Standard"},
                        {"Naruto","A Song of Fire and Ice", "One Piece"},
                        {"Forrest Gump", "Dale Carnegie", "Bhagavad Gita",},
                        {"The Great Gatsby","One Piece", "Ulysses"}

                        //A[n][m] n = 5, m = 3
                        // Initializes a test 2D array
    };


    vector<string> oneDContainer = converter(dungeonGator); //Calls function to convert 2D container to 1D container

    for(int i = 0; i < oneDContainer.size(); i++){ // Prints out new container w/o duplicates
        cout << oneDContainer.at(i) << endl;
    }
    return 0;
}
