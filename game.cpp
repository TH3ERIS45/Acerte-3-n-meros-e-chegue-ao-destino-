#include <iostream>
#include <ctime>

int main() {
  srand((time(0)));
  int num;3
  int contador = 0;
  int contadoral = 3;
  int acertos = 0;

  std::cout << "********************************\n";
  std::cout << "Acerte 3 números e chegue ao destino\n";
  std::cout << "********************************\n";

  while (contador < 3) {
    contador++;
    std::cout << "Digite o " << contador << " Número: ";
    std::cin >> num;

    if (num == rand() % contadoral + 1) {
      std::cout << "Correto!\n";
      contadoral += 3;
      acertos++;
    }
  }

  if (acertos == 3) {
    std::cout << "Você chegou ao destino!\n";
  } else {
    std::cout << "Não foi dessa vez!\n";
  }

  return 0;
}
