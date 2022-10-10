#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {

  int number;
  int playerNumber;
  bool check = true;

  cout << "このゲームは2か1を選んで五回連続で推測できたらゲーム終了です。"
       << endl;
  while (check) {

    cout << "数字を推測してください。/n";
    cin >> number;
    //乱数生成関数の種
    srand(static_cast<unsigned int>(time(0)));
    //乱数を生成する
    int randomNumber = rand();
    // 1~6の間の数字を習得する
    int die = (randomNumber % 2) + 1;
    if (die == number) {
      playerNumber++;
      cout << playerNumber << "回当たりました！" << endl;
      check = false;
    } else {
      playerNumber = 0;
    }
    check = true;
    if (playerNumber >= 5) {
      cout << playerNumber << "回連続おめでとうございます！" << endl;
      check = false;
    }
  }
}