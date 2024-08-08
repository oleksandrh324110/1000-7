#include "iostream"
#include "thread"

using namespace std::chrono_literals;

int main(void) {
  std::this_thread::sleep_for(1s);
  std::cout << "Я  \n";
  std::this_thread::sleep_for(2s);
  std::cout << "Гуль  \n";
  std::this_thread::sleep_for(1s);

  for (int i = 1000; i - 7 > 0; i -= 7) {
    std::cout << i << " - 7 = " << i - 7 << "  \n";
    std::this_thread::sleep_for(10ms);
  }
}
