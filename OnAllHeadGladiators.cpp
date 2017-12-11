#include <iostream>
#include <string>
#include <conio.h>
//тут ещё короче надо подключить dos.h , что-бы функцию delay() можно было вызывать. Но у меня не получилось


using namespace std;

string usrlearn();
void mainm();

int main(int argc, const char * argv[]){

string name;

usrlearn();
mainm();

}

//обучение
string usrlearn(){
  std::cout << "Привет! Ну как, оЧУХАлся? " << '\n';
  std::cout << "Ну, тут вообщем дело такое. Ты теперь - гладиатор !" << '\n';
  std::cout << "Да, да. Всё вы тут 'да я просто домой шёл, как друг темнота...' " << '\n';
  std::cout << "Так что, оружее в руки, и бегом переобучаться, хех. " << '\n';
  std::cout << "Вот, кстати, наш арсенал для новичков, выбирай с умом. " << '\n';
  //todo запилить обучение

}

//главное меню
void mainm(){
  int mma;


  std::cout << "1.Персонаж" << '\n';
  std::cout << "2.Магазин" << '\n';
  std::cout << "3.Битва" << '\n';
  std::cin >> mma;

do {
  bool flag = true;

  if (mma == 1){
   user();
 } else if (mma == 2) {
   shop();
 } else if (mma == 3) {
   fightpick();
 } else {
   flag = false;
 }
} while(!flag);
