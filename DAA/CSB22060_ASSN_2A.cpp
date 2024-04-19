#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>  //instead random

using namespace std;

string match(const string& plyr1, const string& plyr2) {

    if (plyr1.length() > plyr2.length()) {
        return plyr1;  //player1
    } else {
        return plyr2;  //player2
    }
}


string tournament(vector<string>& players, ofstream& output) {

    if (players.size() == 1) {
        return players[0];
    }

    vector<string> winners;

    for (size_t i = 0; i < players.size(); i += 2) {
        string winner = match(players[i], players[i + 1]);
        winners.push_back(winner);
        
        output << "Match: " << players[i] << " vs " << players[i + 1] << " --> Winner: " << winner << endl;
    }

    output << endl << "Players in this round: ";
    for (const string& player : players) {
        output << player << " ";
    }
    output << endl;

    return tournament(winners, output);
}


int main() {

    ifstream inn("input1.txt");

    if (!inn.is_open()) {
        cerr << "Unable to open input file." << endl;
        cerr << "\nThank you" <<endl;
        return 1;
    }

    int numPlayers;
    inn >> numPlayers;

    vector<string> playerNames;
    string playerName;

    while (inn >> playerName) {
        playerNames.push_back(playerName);
    }
    inn.close();

    random_shuffle(playerNames.begin(), playerNames.end());

    ofstream op("output1.txt");
    if (!op.is_open()) {
        cerr << "Unable to open output file." << endl;
        cerr << "\nThank you" <<endl;
        return 1;
    }

    op << "Initial player list: ";
    for (const string& player : playerNames) {
        op << player << " ";
    }
    op << endl << endl;

    op << "Tournament Tree:" << endl << endl;
    string winner = tournament(playerNames, op);
    op << endl << "The ultimate winner is: " << winner << endl;
    op << endl << "Thank you !!" <<endl;

    op.close();

    return 0;
}
