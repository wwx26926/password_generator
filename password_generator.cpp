#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

std::string generatePassword(int length) {
    const std::string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()";
    std::string password = "";

    for (int i = 0; i < length; ++i) {
        password += characters[rand() % characters.size()];
    }

    return password;
}

int main() {
    srand(static_cast<unsigned int>(time(0))); // Ustawienie ziarna dla generatora liczb pseudolosowych

    int length;
    std::cout << "Podaj długość hasła: ";
    std::cin >> length;

    if (length > 0) {
        std::string password = generatePassword(length);
        std::cout << "Wygenerowane hasło: " << password << std::endl;
    } else {
        std::cout << "Długość hasła musi być większa niż 0." << std::endl;
    }

    return 0;
}
