/*
������� ����� ����� : 123456789
������� ��� ��������� : ������
������� ������ : 5000
������� ����� ������ : 6000
��� ���� : ������, 123456789, 6000
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
    std::cout << "������� ����� ����� : " << std::endl;
    bank_account new_num_account;
    std::cin >> new_num_account.num_account;

    std::cout << "������� ��� ��������� : " << std::endl;
    bank_account new_name_account;
    std::cin >> new_name_account.name_account;

    std::cout << "������� ������ : " << std::endl;
    bank_account new_limit_account;
    std::cin >> new_limit_account.limit_account;

    std::cout << "������� ����� ������ : " << std::endl;
    change_limit(new_limit_account);
    //std::cin >> new_limit_account.limit_account;

    std::cout << "��� ���� : " << new_name_account.name_account << ", "
        << new_num_account.num_account << ", "
        << new_limit_account.limit_account << std::endl;
}
