#include <iostream>

int main() {
    
    int num, numa, numb, numc;
    int x, y;
    int pazymys;
    int metai;

    std::cout << "Iveskite skaiciu: " << '\n';
    std::cin >> num;
    if (num%2 == 0) {
        std::cout << "Skaicius yra lyginis." << std::endl;
    } else {
        std::cout << "Skaicius yra nelyginis." << std::endl;
    }

    std::cout << " " << '\n';

    std::cout << "Iveskite tris skaicius: " << '\n';
    std::cin >> numa >> numb >> numc;
    if (numa > numb && numa > numc) {
        std::cout << "Didziausias skaicius yra: " << numa << std::endl;
    } else if (numb > numa && numb > numc) {
        std::cout << "Didziausias skaicius yra: " << numb << std::endl;
    } else {
        std::cout << "Didziausias skaicius yra: " << numc << std::endl;
    }
     std::cout << " " << '\n';

    std::cout << "Iveskite koordinate X ir Y: " << '\n';
    std::cin >> x >> y;
    if (x > 0 && y > 0) {
        std::cout << "Taskas yra pirmajame ketvirtyje." << std::endl;
    } else if (x < 0 && y > 0) {
        std::cout << "Taskas yra antrajame ketvirtyje." << std::endl;
    } else if (x < 0 && y < 0) {
        std::cout << "Taskas yra treciajame ketvirtyje." << std::endl;
    } else if (x > 0 && y < 0) {
        std::cout << "Taskas yra ketvirtajame ketvirtyje." << std::endl;
    } else {
        std::cout << "Taskas yra ant koordinačių ašies." << std::endl;
    }

    std::cout << " " << '\n';

    std::cout << "Iveskite studento pazymi: (1-10) " << '\n';
    std::cin >> pazymys;
    if (pazymys >= 5 && pazymys <= 10) {
        std::cout << "Islaike" << std::endl;
        if (pazymys >=8 && pazymys <= 10) {
            std::cout << "gauna stipendija" << std::endl;
        }
        if (pazymys >= 6 && pazymys <= 8) {
            std::cout << "Studento kategorija: " << "Vidutiniokai" << std::endl;
            
        }
        if (pazymys == 5) {
            std::cout << "Studento kategorija: " << "Rizikos grupe" << std::endl;
        }
        if (pazymys >= 9 && pazymys <= 10) {
            std::cout << "Studento kategorija: " << "Geriausi" << std::endl;
        }

    }
    else if (pazymys < 5 && pazymys >= 0) {
        std::cout << "Neislaike" << std::endl;
        std::cout << "Studento kategorija: " << "Akademine skola" << std::endl;
    } else {
        std::cout << "Ivestas netinkamas pazymys." << std::endl;
    }    

    std::cout << " " << '\n';

    std::cout << "Iveskite metus " << '\n';
    std::cin >> metai;
    if(metai % 4 == 0 && metai % 100 != 0 || metai % 400 == 0) {
        std::cout << "Metai yra keliamieji." << std::endl;
    } else {
        std::cout << "Metai nera keliamieji." << std::endl;
    }

    return 0;
}