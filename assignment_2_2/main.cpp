#include <iostream>
#include <map>
#include <fstream>

int main() {
    std::map<std::string, std::string> code;
    std::map<std::string, std::string> name;
    std::string choice="-1";

    std::ifstream ifs ("countries.txt", std::ifstream::in);
    std::string strings;
    std::string temp;
    int t = -1;
    while (getline(ifs, strings)){
        if (t==1){
            code[temp] = strings;
        } else if (t==-1){
            temp = strings;
        }
        t=t*-1;
    }
    ifs.close();


    for(auto it=code.begin(); it!=code.end();++it)
        name[it->second] = it->first;

    std::cout << "1. Look up a country name by country code" << std::endl
              << "2. Look up a country code by country name" << std::endl;
    std::cin >> choice;
    if (choice=="1"){
        std::cout << "country code: ";
        std::cin >> choice;
        std::cout << code[choice];
    } else if (choice=="2"){
        std::cout << "country name: ";
        std::cin >> choice;
        std::cout << name[choice];
    }

    return 0;

}