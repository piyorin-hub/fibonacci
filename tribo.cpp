#include <iostream>
#include <vector>
using namespace std;

vector<long long> memo;
// トリボナッチ数列
long long tribo(int n);

int main()
{
  int n;
  cin >> n;

  memo.assign(n, -1);

  cout << tribo(n) << endl;
  
}

long long tribo(int n)
{
  if (n == 0) return 0;
  else if (n == 1) return 1;

  if (memo[n] != -1)
  {
    // 既に計算済ならメモを返す
    return memo[n];
  }

  return memo[n] = tribo(n - 1) + tribo(n - 2) + tribo(n - 3);
}
