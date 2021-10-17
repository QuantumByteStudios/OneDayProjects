#include <iostream>
#include <stdlib.h>
using namespace std;

int mainMenu() {
  int choice;
  cout << "Tic-Tac-Toe Game" << endl;
  cout << "1) Play (2 Players)" << endl;
  cout << "2) Exit" << endl;
  cout << "\n>>> ";
  cin >> choice;
  return choice;
}

void displayCanvas(char canvas[3][3]) {
  int i, j;
  for (j = 0; j < 3; j++) {
    cout << "    | ";
    for (i = 0; i < 3; i++) {
      cout << canvas[j][i] << " | ";
    }
    cout << endl;
  }
}

void getValues(char canvas[3][3]) {
  int column, row;
  char symbol;
  cout << endl;
  cout << "Enter \'X\' or \'O\' : ";
  cin >> symbol;
  cout << "Enter Column : ";
  cin >> column;
  cout << "Enter Row : ";
  cin >> row;
  system("clear");
  if (canvas[column - 1][row - 1] == 'X' ||
      canvas[column - 1][row - 1] == 'O') {
    cout << "Space is Already Occupied :/" << endl;
    getValues(canvas);
  } else if (canvas[column - 1][row - 1] == 'x' ||
             canvas[column - 1][row - 1] == 'o') {
    cout << "Space is Already Occupied :/" << endl;
    getValues(canvas);
  } else if (canvas[column - 1][row - 1] == '-') {
    canvas[column - 1][row - 1] = symbol;
    displayCanvas(canvas);
  }
}

void checkWinner(char canvas[3][3]) {
  // probabilities

  // rows check
  // row One
  if (canvas[0][0] && canvas[0][1] && canvas[0][2] == 'X') {
    cout << "X Won!" << endl;
    system("exit");
  } else if (canvas[0][0] && canvas[0][1] && canvas[0][2] == 'O') {
    cout << "O Won!" << endl;
    system("exit");
  }
  // row Two
  else if (canvas[1][0] && canvas[1][1] && canvas[1][2] == 'X') {
    cout << "X Won!" << endl;
    system("exit");
  } else if (canvas[1][0] && canvas[1][1] && canvas[1][2] == 'O') {
    cout << "O Won!" << endl;
    system("exit");
  }
  // row Three
  else if (canvas[2][0] && canvas[2][1] && canvas[2][2] == 'X') {
    cout << "X Won!" << endl;
    system("exit");
  } else if (canvas[2][0] && canvas[2][1] && canvas[2][2] == 'O') {
    cout << "O Won!" << endl;
    system("exit");
  }

  // column check
  // column One
  else if (canvas[0][0] && canvas[1][0] && canvas[2][0] == 'X') {
    cout << "X Won!" << endl;
    system("exit");
  } else if (canvas[0][0] && canvas[1][0] && canvas[2][0] == 'O') {
    cout << "O Won!" << endl;
    system("exit");
  }
  // column Two
  else if (canvas[0][1] && canvas[1][1] && canvas[2][1] == 'X') {
    cout << "X Won!" << endl;
    system("exit");
  } else if (canvas[0][1] && canvas[1][1] && canvas[2][1] == 'O') {
    cout << "O Won!" << endl;
    system("exit");
  }
  // column Three
  else if (canvas[0][2] && canvas[0][2] && canvas[0][2] == 'X') {
    cout << "X Won!" << endl;
    system("exit");
  } else if (canvas[0][2] && canvas[0][2] && canvas[0][2] == 'O') {
    cout << "O Won!" << endl;
    system("exit");
  }

  // left Slant
  // 0,0; 1,1; 2,2
  else if (canvas[0][0] && canvas[1][1] && canvas[2][2] == 'X') {
    cout << "X Won!" << endl;
    system("exit");
  } else if (canvas[0][0] && canvas[1][1] && canvas[2][2] == 'O') {
    cout << "O Won!" << endl;
    system("exit");
  }

  // right Slant
  // 0,2; 1,1; 2,0
  else if (canvas[0][2] && canvas[1][1] && canvas[2][0] == 'X') {
    cout << "X Won!" << endl;
    system("exit");
  } else if (canvas[0][2] && canvas[1][1] && canvas[2][0] == 'O') {
    cout << "O Won!" << endl;
    system("exit");
  } else {
    cout << "Error";
  }
}

int main() {
  system("clear");
  char canvas[3][3] = {{'-', '-', '-'}, {'-', '-', '-'}, {'-', '-', '-'}};
  int choice, pos;
  choice = mainMenu();
  if (choice == 1) {
    cout << "Let's Start The Game" << endl;
    for (int i = 0; i < 9; i++) {
      getValues(canvas);
      checkWinner(canvas);
    }
  } else if (choice == 2) {
    cout << "Exiting..Game.." << endl;
    system("exit");
  } else {
    cout << "Wrong Option :/" << endl;
  }

  return 0;
}