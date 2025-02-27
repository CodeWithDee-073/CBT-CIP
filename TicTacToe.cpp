#include <iostream>
#include <string>
using namespace std;

void displayBoard(char board[3][3])
{
  cout << "\n  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2];
  cout << "\n-----|-----|-----\n";
  cout << "  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2];
  cout << "\n-----|-----|-----\n";
  cout << "  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2];
  cout << "\n\n";
}

bool isWinner(char board[3][3], char &winner)
{
  winner = ' ';

  for (int i = 0; i < 3; i++)
  {
    if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
    {
      winner = board[i][0];
      return true;
    }
    if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
    {
      winner = board[0][i];
      return true;
    }
  }

  if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
  {
    winner = board[0][0];
    return true;
  }
  if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
  {
    winner = board[0][2];
    return true;
  }

  return false;
}

void leaderboard(string x, string o, int xW, int oW, int t, int tg)
{
  cout << "\n=====================================\n";
  cout << "            LEADERBOARD              \n";
  cout << "=====================================\n";
  cout << "   " << x << " Wins     : " << xW << "\n";
  cout << "   " << o << " Wins     : " << oW << "\n";
  cout << "   Ties        : " << t << "\n";
  cout << "   Total Games : " << tg << "\n";
  cout << "=====================================\n";
}

int main()
{
  int xWins = 0, oWins = 0, ties = 0, totalGames = 0;
  int r, c; // row & column
  char choice;
  string playerX, playerO;
  cout << "Enter Player X's name: ";
  cin >> playerX;
  cout << "Enter Player O's name: ";
  cin >> playerO;

  do
  {
    char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    char currentPlayer = 'X', winner = ' ';
    cout << "\nWelcome to Tic-Tac-Toe!\n";

    for (int i = 0; i < 9; i++)
    {
      displayBoard(board);
      cout << (currentPlayer == 'X' ? playerX : playerO) << ", enter row and column (0-2): ";

      cin >> r >> c;

      if (r < 0 || r > 2 || c < 0 || c > 2 || board[r][c] != ' ')
      {
        cout << "Invalid move, try again.\n";
        i--;
        continue;
      }

      board[r][c] = currentPlayer;
      if (isWinner(board, winner))
        break;
      currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    displayBoard(board);

    if (winner == 'X')
    {
      cout << playerX << " wins!\n";
      xWins++;
    }
    else if (winner == 'O')
    {
      cout << playerO << " wins!\n";
      oWins++;
    }
    else
    {
      cout << "It's a tie!\n";
      ties++;
    }
    totalGames++;
    leaderboard(playerX, playerO, xWins, oWins, ties, totalGames);

    cout << "Play again? (y/n): ";
    cin >> choice;
  } while (choice == 'y' || choice == 'Y');

  cout << "Thanks for playing!\n";
  return 0;
}
