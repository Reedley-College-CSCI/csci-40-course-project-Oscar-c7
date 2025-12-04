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
#include <limits>
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
    getline(cin, p.name);

    cout << "Goals scored: ";
    cin >> p.goals;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

    cout << "assists: ";
    cin >> p.assists; 
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "games played: ";
    cin >> p.gamesPlayed;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

    team.push_back(p);
    cout << "\nPlayer added successfully!\n";
    
    return;

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
    return;
} 

void updatePlayer() {
        if (team.empty()) {
            cout << "\nNo players available to update.\n";
            return; 
        }
    size_t index;
    cout << "\nEnter the number of the player to update: ";
    cin >> index;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (index < 1 || index > team.size()) {
        cout << "\nInvalid player number.\n";
        return; 
    }

    index--;

    cout << "Enter new name or press enter to keep " << team[index].name << ": ";
    string newName;
    getline(cin, newName);
    if (!newName.empty()) team[index].name = newName;


    player p; 
    cout << "\nEnter player update: ";
    
    cout << "updated goals: ";
    cin >> p.goals; 
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "updated assists: ";
    cin >> p.assists; 
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "updated games played: "; 
    cin >> p.gamesPlayed;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

    team[index].goals = p.goals;
    team[index].assists = p.assists;
    team[index].gamesPlayed = p.gamesPlayed;

    cout << "\nPlayer updated successfully!\n";

    
    return;

}

void removePlayer() {
    if (team.empty()) {
        cout << "\nNo players available to remove.\n";
        return; 
    }
    size_t index;
    cout << "\nEnter the number of the player to remove: ";
    cin >> index;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (index < 1 || index > team.size()) {
        cout << "\nInvalid player number.\n";
        return; 
    }

    team.erase(team.begin() + index - 1);
    cout << "\nPlayer removed successfully!\n";
    return;
}

void saveToFile() {
    ofstream file("team_data.txt");
    for (auto &p : team) {
        file << p.name << "," << p.goals << "," << p.assists << "," << p.gamesPlayed << "\n";
    }
}

void loadFromFile() {
    ifstream file("team_data.txt");
    if (!file) return;

    string line;
    while (getline(file, line)) {
        player p;
        size_t pos = 0;

        pos = line.find(',');
        p.name = line.substr(0, pos);
        line.erase(0, pos + 1);

        pos = line.find(',');
        p.goals = stoi(line.substr(0, pos));
        line.erase(0, pos + 1);

        pos = line.find(',');
        p.assists = stoi(line.substr(0, pos));
        line.erase(0, pos + 1);

        p.gamesPlayed = stoi(line);

        team.push_back(p);
    
           
    }
}

void menu() {
    int choice;
    do {
        cout << "\nSoccer Stats Tracker\n";
        cout << "1. Add Player\n";
        cout << "2. View Players\n";
        cout << "3. Update Player\n";
        cout << "4. Remove Player\n";
        cout << "5. Save & Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');


        switch (choice) {

            case 1: addPlayer(); break;
            case 2: viewPlayers(); break;
            case 3: updatePlayer(); break;
            case 4: removePlayer(); break;  
            case 5: saveToFile(); cout << "\nsaved. Exiting...\n"; break;
            default: cout << "\nInvalid choice. Please try again.\n"; break;
        }
    } while (choice != 5);
}
  






