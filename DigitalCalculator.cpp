#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

void displayResult(double result)
{
  cout << "\n\t******************************************\n";
  cout << "\t              RESULT IS: " << result << "\n";
  cout << "\t******************************************\n\n";
}
void add()
{
  double a, b;
  cout << "\nEnter two numbers to perform addition: ";
  cin >> a >> b;
  displayResult(a + b);
}

void subtract()
{
  double a, b;
  cout << "\nEnter two numbers to perform subtraction: ";
  cin >> a >> b;
  displayResult(a - b);
}

void multiply()
{
  double a, b;
  cout << "\nEnter two numbers to perform multiplication: ";
  cin >> a >> b;
  displayResult(a * b);
}

void divide()
{
  double a, b;
  cout << "\nEnter two numbers to perform division:  ";
  cin >> a >> b;
  if (b != 0)
    displayResult(a / b);
  else
    cout << "Invalid entry! Division by zero is not possible." << endl;
}

void percentage()
{
  double a;
  cout << "\nEnter a number to calculate percentage: ";
  cin >> a;
  displayResult(a / 100);
}

void factorial()
{
  int k, f = 1;
  cout << "\nEnter a non-negative integer to calculate factorial: ";
  cin >> k;

  if (k < 0)
  {
    cout << "Invalid entry! Factorial undefined for negative numbers." << endl;
  }
  else
  {
    while (k > 0)
    {
      f *= k;
      k--;
    }
    displayResult(f);
  }
}

void power()
{
  double base, expo;
  cout << "\nEnter base and exponent to calculate power: ";
  cin >> base >> expo;
  displayResult(pow(base, expo));
}

void squareRoot()
{
  double a;
  cout << "\nEnter a number to calculate square root:: ";
  cin >> a;
  if (a >= 0)
  {
    displayResult(sqrt(a));
  }
  else
  {
    cout << "Invalid entry! Square root undefined for negative numbers." << endl;
  }
}

void cubeRoot()
{
  double a;
  cout << "\nEnter a number to calculate cube root:: ";
  cin >> a;
  displayResult(cbrt(a));
}

void calcSin()
{
  double a;
  cout << "\nEnter an angle in degrees to calculate sine: ";
  cin >> a;
  displayResult(sin(a * M_PI / 180)); // M_PI = degree-to-radian conversion (present in cmath library)
}

void calcCos()
{
  double a;
  cout << "\nEnter an angle in degrees to calculate cosine: ";
  cin >> a;
  displayResult(cos(a * M_PI / 180));
}

void calcTan()
{
  double a;
  cout << "\nEnter an angle in degrees to calculate tangent: ";
  cin >> a;

  a = fmod(a, 180);

  if (fabs(a - 90) < 1e-9)
    cout << "Undefined angle\n";
  else
    displayResult(tan(a * M_PI / 180));
}

void log10()
{
  double a;
  cout << "\nEnter a number to calculate its base-10 logarithm: ";
  cin >> a;
  if (a > 0)
    displayResult(log10(a));
  else
    cout << "Invalid entry! Logarithm is undefined for non-positive numbers.\n";
}

void naturalLog()
{
  double a;
  cout << "\nEnter a number to calculate its natural logarithm: ";
  cin >> a;
  if (a > 0)
    displayResult(log(a));
  else
    cout << "Invalid entry! Logarithm is undefined for non-positive numbers.\n";
}

int main()
{
  char choice, rset;

  do
  {
    cout << "\n\n\t******************************************" << endl;
    cout << "\t|           DIGITAL CALCULATOR           |" << endl;
    cout << "\t******************************************" << endl;
    cout << "\t|      +      |      -      |      *     |" << endl;
    cout << "\t|     ADD     |   SUBTRACT  |  MULTIPLY  |" << endl;
    cout << "\t******************************************" << endl;
    cout << "\t|      /      |      %      |     !      |" << endl;
    cout << "\t|    DIVIDE   |  PERCENTAGE |  FACTORIAL |" << endl;
    cout << "\t******************************************" << endl;
    cout << "\t|      ^      |      S      |      R     |" << endl;
    cout << "\t|    POWER    | SQUARE ROOT |  CUBE ROOT |" << endl;
    cout << "\t******************************************" << endl;
    cout << "\t|      s      |       c     |     t      |" << endl;
    cout << "\t|     sin     |      cos    |    tan     |" << endl;
    cout << "\t******************************************" << endl;
    cout << "\t|     g       |      n      |     E      |" << endl;
    cout << "\t|  Log10(a)   |   log(a)    |    EXIT    |" << endl;
    cout << "\t******************************************" << endl;

    cout << "Enter ur choice(+, -, *, /, %, !, ^, S, R, s, c, t, l, n, E): ";
    cin >> choice;
    switch (choice)
    {
    case '+':
      add();
      break;
    case '-':
      subtract();
      break;
    case '*':
      multiply();
      break;
    case '/':
      divide();
      break;
    case '%':
      percentage();
      break;
    case '!':
      factorial();
      break;
    case '^':
      power();
      break;
    case 'S':
      squareRoot();
      break;
    case 'R':
      cubeRoot();
      break;
    case 's':
      calcSin();
      break;
    case 'c':
      calcCos();
      break;
    case 't':
      calcTan();
      break;
    case 'g':
      log10();
      break;
    case 'n':
      naturalLog();
      break;
    case 'E':
      cout << "Exiting the program.\n";
      exit(0);
    default:
      cout << "Invalid choice, please try again.\n";
      break;
    }

    cout << "Do you want to perform another calculation? (Y/N): ";
    cin >> rset;

  } while (rset == 'Y' || rset == 'y');

  return 0;
}
