#include <iostream>

using namespace std;

int main(){
    int counter = 1;

	string players;
    cin >> players;

    char prev = players[0];
    int Ocurrences = 1;

    while (counter < players.length() && Ocurrences < 7){
        if (players[counter] == prev){
            Ocurrences += 1;
        }
        else{
            Ocurrences = 1;
            prev = players[counter];
        }

        counter++;
    }

    if ( Ocurrences == 7){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}
