#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0)); // 난수 생성을 위한 시드 설정
    int target = std::rand() % 99 + 1; // 1부터 99 사이의 난수 생성
    int guess;
    int attempts = 0;
    const int max_attempts = 6;

    std::cout << "숫자 맞추기 게임에 오신 것을 환영합니다! 1부터 99 사이의 숫자를 맞춰보세요." << std::endl;

    while (attempts < max_attempts) {
        std::cout << "숫자를 입력하세요: ";
        std::cin >> guess;
        attempts++;

        if (guess == target) {
            std::cout << "WIN" << std::endl;
            return 0;
        } else if (guess < target) {
            std::cout << "UP" << std::endl;
        } else {
            std::cout << "DOWN" << std::endl;
        }
    }

    std::cout << "LOSE" << std::endl;
    return 0;
}