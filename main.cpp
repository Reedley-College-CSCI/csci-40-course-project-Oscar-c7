// CSCI-40 course project 
// Name: Oscar Castellanos 

// This program keeps track of statistics in soccer
//Which will allow users to input information about players in a team
//Like their names, goals scored, assists, and games played 
//As well as being able to add and remove player information all through a menu interface


#include <iostream> 
#include <vector>
#include <fstream> 
#include <string>
using namespace std; 


struct player {
    string name; 
    int goals; 
    int assists; 
    int gamesPlayed;

};

vector<player> team; 


void addPlayer(); 
void viewPlayers();
void updatePlayer();
void removePlayer();
void saveToFile();
void loadFromFile();
void menu();

int main() {
    loadFromFile();
    menu();
    return 0;
}

void addPlayer() {
    player p; 
    cout << "\nEnter player name: ";
    cin.ignore();
    getline(cin, p.name);

    cout << "Goals scored: ";
    cin >> p.goals; 

    cout << "assists: ";
    cin >> p.assists; 

    cout << "games played: ";
    cin >> p.gamesPlayed; 

    team.push_back(p);
    cout << "\nPlayer added successfully!\n";

}

void viewPlayers() {
    if (team.empty()) {
        cout << "\nNo players available.\n";
        return; 
    }
    cout << "\nTeam Players:\n";
    for (size_t i = 0; i < team.size(); ++i) {
        cout << i + 1 << ". " << team[i].name 
             << " | Goals: " << team[i].goals
             << " | Assists: " << team[i].assists
             << " | Games Played: " << team[i].gamesPlayed << endl;
    }
} 

void updatePlayer() {
    player p; 
    cout << "\nEnter player update: ";
    
    cout << "updated goals: ";
    cin >> p.goals; 

    cout << "updated assists: ";
    cin >> p.assists; 

    cout << "updated games played: "; 
    cin >> p.gamesPlayed; 

}
