/*
¬ведите номер счЄта : 123456789
¬ведите им€ владельца : јндрей
¬ведите баланс : 5000
¬ведите новый баланс : 6000
¬аш счЄт : јндрей, 123456789, 6000
*/

#include <iostream>
#include <string>

struct bank_account {
    int num_account;
    std::string name_account;
    double limit_account;
};

void change_limit(bank_account& p) {
    std::cin >> p.limit_account;
}

int main() {
    setlocale(LC_ALL, "Russian");
    std::cout << "¬ведите номер счЄта : " << std::endl;
    bank_account new_num_account;
    std::cin >> new_num_account.num_account;

    std::cout << "¬ведите им€ владельца : " << std::endl;
    bank_account new_name_account;
    std::cin >> new_name_account.name_account;

    std::cout << "¬ведите баланс : " << std::endl;
    bank_account new_limit_account;
    std::cin >> new_limit_account.limit_account;

    std::cout << "¬ведите новый баланс : " << std::endl;
    change_limit(new_limit_account);
    //std::cin >> new_limit_account.limit_account;

    std::cout << "¬аш счЄт : " << new_name_account.name_account << ", "
        << new_num_account.num_account << ", "
        << new_limit_account.limit_account << std::endl;
}
