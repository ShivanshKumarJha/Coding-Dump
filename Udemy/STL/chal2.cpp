#include<iostream>
#include<fstream>
#include<sstream>
#include<iomanip>
#include<cmath>
#include<algorithm>
#include<iterator>         //for std::advanced
#include<numeric>
#include<string>
#include<vector>
#include<deque>
#include<set>
#include<map>
#include<list>
#include<memory>
#include<cctype>
#include<utility>
using namespace std;

class Song {
    friend ostream &operator<<(ostream &os, const Song &s);

    string name;
    string artist;
    int rating;
public:
    Song() = default;
    Song(string name, string artist, int rating)
            : name{name}, artist{artist}, rating{rating} {}

    string get_name() const {
        return name;
    }

    string get_artist() const {
        return artist;
    }
    
    int get_rating() const {
        return rating;
    }
    
    bool operator<(const Song &rhs) const  {
        return this->name < rhs.name;
    }
    
    bool operator==(const Song &rhs) const  {
        return this->name == rhs.name;
    }
};

ostream &operator<<(ostream &os, const Song &s) {
    os << setw(20) << left << s.name
       << setw(30) << left << s.artist
       << setw(2) << left << s.rating;
       return os;
}

void display_menu() {
    cout << "\nF - Play First Song" << endl;
    cout << "N - Play Next song" << endl;
    cout << "P - Play Previous song" << endl;
    cout << "A - Add and play a new Song at current location" << endl;
    cout << "L - List the current playlist" << endl;
    cout << "===============================================" << endl;
    cout << "Enter a selection (Q to quit): ";
}

void play_current_song(const Song &song) {
    cout << "Playing: " << endl;
    cout << song << endl;
}

void display_playlist(const list<Song> &playlist, const Song &current_song) {
    for (const Song &song: playlist) {
        cout << song << endl;
    }
    cout << "Current song: " << endl;
    cout << current_song << endl;
}

int main(){
    list<Song> playlist{
        {"God's Plan",        "Drake",                     5},
        {"Never Be The Same", "Camila Cabello",            5},
        {"Pray For Me",       "The Weekend and K. Lamar",  4},
        {"The Middle",        "Zedd, Maren Morris & Grey", 5},
        {"Wait",              "Maroone 5",                 4},
        {"Whatever It Takes", "Imagine Dragons",           3}          
    };

    list<Song>::iterator current_song = playlist.begin();
    display_playlist(playlist, *current_song);
    
    char selection{};
    do {
        display_menu();
        cin >> selection;
        selection = toupper(selection);
        if (selection == 'F') {
            cout << "Playing first song" << endl;
            current_song = playlist.begin();
            play_current_song(*current_song);
        }
        else if (selection == 'N') {
            cout << "Playing next song" << endl;
            current_song++;
            if (current_song == playlist.end()) {
                cout << "Wrapping to start of playlist" << endl;
                current_song = playlist.begin();
            }
            play_current_song(*current_song);
        }
        else if (selection == 'P') {
            cout << "Playing previous song" << endl;
            if (current_song == playlist.begin()) {
                cout << "Wrapping to end of playlist" << endl;
                current_song = playlist.end();
            }
            current_song--;
            play_current_song(*current_song);
        } else if (selection == 'A') {
            string name, artist;
            int rating;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout << "Adding and playing new song" << endl;
            cout << "Enter song name:";
            getline(cin, name);
            cout << "Enter song artist: ";
            getline(cin, artist);
            cout << "Enter your rating (1-5): ";
            cin >> rating;
            playlist.insert(current_song, Song{name, artist, rating});
            current_song--;
            play_current_song(*current_song);
        } else if (selection == 'L') {
            cout << endl;
            display_playlist(playlist, *current_song);            
        } else if (selection == 'Q')
            cout << "Quitting" << endl;
        else
            cout << "Illegal choice, try again...";
    } while (selection != 'Q');

    cout << "Thanks for listening!" << endl;    
    return 0;
}