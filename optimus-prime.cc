#include <iostream>
#include <complex>
using namespace std;

int find_next_prime(int prev);
bool even_check(int number);
bool check_prime(int possible_prime);
int main()
{
  int prime_numbers[100];
  int prev_prime = 0;
  for (int i = 0; i< 100; i++)
  {
    prime_numbers[i] = find_next_prime(prev_prime);
  }
  cout << prime_numbers[3] << endl;
  int tall = 99;
  cout << check_prime(tall) << endl;
  return 0;
}

int find_next_prime(int prev)
{
  int possible_prime = prev + 2;
  return 0;
}
bool check_prime(int possible_prime)
{
  double temp = (double) possible_prime;
  temp = sqrt(temp);
  int max_fraction = (int) temp;
  for (int i = max_fraction; i > 1; i = i-2)
  {
    if(possible_prime % i == 0)
    {
      return false;
    }
  }
  return true;

}
bool even_check(int number)
{
  return (number % 2 == 0);
}
