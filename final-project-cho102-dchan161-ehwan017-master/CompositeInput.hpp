#ifndef __COMPOSITE_PATTERN_HPP__
#define __COMPOSITE_PATTERN_HPP__
void printMenu();

void AddToGuide();
void PrintTop();
void EnterNewGuide();
Category* AccessGuide();
void addItem(Category*);
void CompositeInput();
vector<Category*> top;


void printMenu() {
      cout << "Enter 1 to create new guide." << endl;
      cout << "Enter 2 add new task/catergory to existing guide." << endl;
      cout << "Enter 3 to print out guide." << endl;
      cout << "Enter 0 to quit guide access." << endl;
      cout << "Enter job you want to do: ";
}


void EnterNewGuide() {
  string name;
  cout << "Enter name of new guide planner: ";
  cin >> name;
  cout << "Enter hours planned to study each day: ";
  double hpd;
  cin >> hpd;
  cout << "Enter how many days until D-Day: ";
  int dday;
  cin >> dday;
  cout << endl;
  Category* main = new Category (name, hpd, dday);
  top.push_back(main);
  addItem(main);
}

Category* AccessGuide() {
  cout << "List of Guides: " << endl;
  for (int i = 0; i < top.size(); ++i) {
    cout << i+1 << ". " << top.at(i)->getName() << endl;
  }
  cout << endl;
  int test = 1;
  int num;
  while (test) {
      cout << "Enter the corresponding number of guide you want to access: ";
      cin >> num;
      if (!(num < 1) || !(num >= top.size())) {
        test = 0;
      }
      else {
        cout << "Error!" << endl;
      }
  }
  return top.at(num-1);
}

void addItem(Category* temp) {
  int ctrl = 1;
  int input;
  while (ctrl) {
    cout << "Enter 1 for new Category in " << temp->getName() << ".\n";
    cout << "Enter 2 for new Task in " << temp->getName() << ".\nEnter 3 to quit \n";
    cin >> input;
    if (input == 1) {
      string name1;
      cout << "Enter name of Category: ";
      cin >> name1;
      Category* subcat = new Category(name1, 0, 0);
      temp->add(subcat);
      top.push_back(subcat);
      cout << endl;
    }
    else if (input == 2) {
      string name2;
      cout << "Enter name of Task: ";
      cin >> name2;
      Task* task = new Task(name2);
      temp->add(task);
      cout << endl;
    }
    else if (input == 3) {
      cout << endl;
      ctrl = 0;
    }
    else {
      cout << "Enter valid number!" << endl;
    }

  }
}

void AddToGuide() {
        if (top.size() == 0) {
          cout << "No guides to access.\n" << endl;
        }
        else {
          Category* temp = AccessGuide();
          addItem(temp);
        }
}

void PrintTop() {
        if (top.size() == 0) {
          cout << "No guides to access.\n" << endl;
        }
        else {
          for (int i = 0; i < top.size(); ++i) {
            top.at(i)->calculateTimeEachDay();
          }
          Category* print = AccessGuide();
          cout << "Guide (Total days: " << print->getMax() << "): " << endl;
          print->printGuide();
          cout << endl;
        }
}

void CompositeInput() {
  cout << "\n\n\n\n\n";
  int control = 1;
    string input;
    while (control) {
      printMenu();
      cin >> input;
      if (input == "1") {
        EnterNewGuide();
      }
      else if (input == "2") {
        AddToGuide();
      }
      else if (input == "3") {
        PrintTop();
      }
      else if (input == "0") {
        cout << "Thank you!\n\n" << endl;
        control = 0;
      }
      else {
        cout << "ENTER VALID NUMBER\n" << endl;
      }
    }

}

#endif
