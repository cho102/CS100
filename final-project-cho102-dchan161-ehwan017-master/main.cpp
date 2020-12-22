#include <iostream>
#include "UserGuide.hpp"
#include "Task.hpp"
#include "Category.hpp"
#include "CompositeInput.hpp"
#include "ConcreteFactory.hpp"
#include "PlaylistSubclasses.hpp"
#include "songLength.hpp"
#include "songAlphabetical.hpp"
#include "artistAlphabetical.hpp"
#include "strategy.hpp"
#include <vector>
#include <string>

using namespace std;

//Abstract Factory class functions
void printMenu2();
void printMenu3();


//Strategy class functions


int main() {
	//composite pattern
	CompositeInput();
	
  //abstract factory pattern
  int control2 = 1;
  int control3 = 1;
  char input2;
  char input3;
  string pname;
  vector<string> chosensongs;
  vector<string> chosenartists;
  vector<double> chosentimes;

  while (control2) {
    printMenu2();
    cin >> input2;
    cout << "\n\n" << endl;
    if (input2 == 'h'){
      ConcreteFactory* choice = new ConcreteFactory();
      cout << "Enter a name for the Hip Hop playlist: " << endl;
      cin >> pname;
      cout << "\n\n" << endl;
      HipHopPlaylist* user = choice->CreateHipHopPlaylist(pname);
      chosensongs = user->getSongs();
      chosenartists = user->getArtists();
      chosentimes = user->getTimes();

      //strategy pattern
      while(control3){
        printMenu3();
        cin >> input3;
        if (input3 == 's'){
          songAlphabetical* final = new songAlphabetical(user);
          final->bubbleSort();
          final->display();
          control3 = 0;
        }
        else if (input3 == 'a'){
          artistAlphabetical* final = new artistAlphabetical(user);
          final->insertionSort();
          final->display();
          control3 = 0;
        }
        else if (input3 == 't'){
          songLength* final = new songLength(user);
          final->selectionSort();
          final->display();
          control3 = 0;
        }
        else {
          cout << "INVALID INPUT!" << endl;
        }
      }
      control2 = 0;
    }
    else if (input2 == 'e'){
      ConcreteFactory* choice = new ConcreteFactory();
      cout << "Enter a name for the EDM playlist: " << endl;
      cin >> pname;
      cout << "\n\n" << endl;
      EDMPlaylist* user = choice->CreateEDMPlaylist(pname);
      chosensongs = user->getSongs();
      chosenartists = user->getArtists();
      chosentimes = user->getTimes();
      cout << "Playlist: " << pname << endl;

      //strategy pattern
      while(control3){
        printMenu3();
        cin >> input3;
        if (input3 == 's'){
          songAlphabetical* final = new songAlphabetical(user);
          final->bubbleSort();
          final->display();
          control3 = 0;
        }
        else if (input3 == 'a'){
          artistAlphabetical* final = new artistAlphabetical(user);
          final->insertionSort();
          final->display();
          control3 = 0;
        }
        else if (input3 == 't'){
          songLength* final = new songLength(user);
          final->selectionSort();
          final->display();
          control3 = 0;
        }
        else {
          cout << "INVALID INPUT!" << endl;
        }
      }

      control2 = 0; 
    }
    else if (input2 == 'p'){
      ConcreteFactory* choice = new ConcreteFactory();
      cout << "Enter a name for the Pop playlist: " << endl;
      cin >> pname;
      cout << "\n\n" << endl;
      PopPlaylist* user = choice->CreatePopPlaylist(pname);
      chosensongs = user->getSongs();
      chosenartists = user->getArtists();
      chosentimes = user->getTimes();

      //strategy pattern
    while(control3){
      printMenu3();
      cin >> input3;
      if (input3 == 's'){
        songAlphabetical* final = new songAlphabetical(user);
        final->bubbleSort();
        final->display();
        control3 = 0;
      }
      else if (input3 == 'a'){
        artistAlphabetical* final = new artistAlphabetical(user);
        final->insertionSort();
        final->display();
        control3 = 0;
      }
      else if (input3 == 't'){
        songLength* final = new songLength(user);
        final->selectionSort();
        final->display();
        control3 = 0;
      }
      else{
        cout << "INVALID INPUT!" << endl;
      }
    }

      control2 = 0; 
    }
    else if (input2 == 'l'){
      ConcreteFactory* choice = new ConcreteFactory();
      cout << "Enter a name for the Lo-Fi playlist: " << endl;
      cin >> pname;
      cout << "\n\n" << endl;
      LoFiPlaylist* user = choice->CreateLoFiPlaylist(pname);
      chosensongs = user->getSongs();
      chosenartists = user->getArtists();
      chosentimes = user->getTimes();

      //strategy pattern
    while(control3){
      printMenu3();
      cin >> input3;
      if (input3 == 's'){
        songAlphabetical* final = new songAlphabetical(user);
        final->bubbleSort();
        final->display();
        control3 = 0;
      }
      else if (input3 == 'a'){
        artistAlphabetical* final = new artistAlphabetical(user);
        final->insertionSort();
        final->display();
        control3 = 0;
      }
      else if (input3 == 't'){
        songLength* final = new songLength(user);
        final->selectionSort();
        final->display();
        control3 = 0;
      }
      else {
        cout << "INVALID INPUT!" << endl;
      }
    }
      control2 = 0; 
    }
    else if (input2 == 'r'){
      ConcreteFactory* choice = new ConcreteFactory();
      cout << "Enter a name for the RnB playlist: " << endl;
      cin >> pname;
      cout << "\n\n" << endl;
      RnBPlaylist* user = choice->CreateRnBPlaylist(pname);
      chosensongs = user->getSongs();
      chosenartists = user->getArtists();
      chosentimes = user->getTimes();

      //strategy pattern
    while(control3){
      printMenu3();
      cin >> input3;
      if (input3 == 's'){
        songAlphabetical* final = new songAlphabetical(user);
        final->bubbleSort();
        final->display();
        control3 = 0;
      }
      else if (input3 == 'a'){
        artistAlphabetical* final = new artistAlphabetical(user);
        final->insertionSort();
        final->display();
        control3 = 0;
      }
      else if (input3 == 't'){
        songLength* final = new songLength(user);
        final->selectionSort();
        final->display();
        control3 = 0;
      }
      else{
        cout << "INVALID INPUT!" << endl;
      }
    }
      control2 = 0; 
    }
    else if (input2 == 'n'){
      ConcreteFactory* choice = new ConcreteFactory();
      cout << "Enter a name for the Nature Sounds playlist: " << endl;
      cin >> pname;
      cout << "\n\n" << endl;
      NaturalPlaylist* user = choice->CreateNaturalPlaylist(pname);
      chosensongs = user->getSongs();
      chosenartists = user->getArtists();
      chosentimes = user->getTimes();

      //strategy pattern
    while(control3){
      printMenu3();
      cin >> input3;
      if (input3 == 's'){
        songAlphabetical* final = new songAlphabetical(user);
        final->bubbleSort();
        final->display();
        control3 = 0;
      }
      else if (input3 == 'a'){
        artistAlphabetical* final = new artistAlphabetical(user);
        final->insertionSort();
        final->display();
        control3 = 0;
      }
      else if (input3 == 't'){
        songLength* final = new songLength(user);
        final->selectionSort();
        final->display();
        control3 = 0;
      }
      else{
        cout << "INVALID INPUT!" << endl;
      }
    }
      control2 = 0; 
    }
    else if (input2 == 'q'){
      cout << "Thank you!" << endl;
      control2 = 0;
    }
    else {
      cout << "Not a valid input. Please try again." << endl;
      cout << "\n\n" << endl;
    }
  }

  // cout << "Playlist: " << pname << endl;

  //strategy pattern
    return 0;
}

void printMenu2() {
  cout << "\n\n\n" << endl;
  cout << "Choose a playlist to listen to: " << endl;
  cout << "Enter 'h' to listen to a Hip Hop playlist." << endl;
  cout << "Enter 'e' to listen to an EDM playlist." << endl;
  cout << "Enter 'p' to listen to a Pop playlist." << endl;
  cout << "Enter 'l' to listen to a Lo-Fi playlist." << endl;
  cout << "Enter 'r' to listen to an RnB playlist." << endl;
  cout << "Enter 'n' to listen to a Nature Sound playlist." << endl;
  cout << "Enter 'q' to quit playlist menu." << endl;
  }

void printMenu3() {
  cout << "\n\n" << endl;
  cout << "Choose how you would like to view your chosen playlist: " << endl;
  cout << "Enter 's' to see the playlist organized alphabetically by song title." << endl;
  cout << "Enter 'a' to see the playlist organized alphabetically by artist name." << endl;
  cout << "Enter 't' to see the playlist organized in ascending order of song length." << endl;
}
