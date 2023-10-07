#include <stdio.h>

int menu(){
  int a;
  while(1){
    cout << "0, 1, 2,에서 고르시오.";
    cin >> a;
    if (a == 0 || a == 1 || a == 2)
      return a;
    else
      cout << "0, 1, 2 에서 고르시오";
  }
}

int main(){
  while(1){
    int a = menu();
    if (a == 0)
      break;
    else if (a == 1)
      //학사팀으로 ㄱ
    else if (a == 2)
      //학생팀으로 ㄱ
  }

  return 0;
}
