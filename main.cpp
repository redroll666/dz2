#include <iostream>
#include <cmath>

const double PI = std::acos(-1);


void konus(float r, float R, float h) {
    if (r < 0 || R < 0 || h < 0) {
        std::cout << "Ошибка" << std::endl;
    }
    else {
        double V = (1.0/3)*PI*h*(R*R + R*r + r*r);
        float l = std::sqrt((R-r) * (R - r) + h*h);
        double S = PI*(R*R + (R+r)*l + r*r);
        std::cout << V << "\n" << S << std::endl; 
    }
    
}

void branching(float a, float x) {
    double w;
    if (std::abs(x) < 1) {
        if (x != 0) {
            std::cout << a * std::log(std::abs(x));
        }
        else {
            std::cout << "Ошибка";
        }
    } 
    else if(std::abs(x) >= 1){
        if (a - x*x >= 0) {
            std::cout << std::sqrt(a - x*x);
        } else {
            std::cout << "Ошибка";
        }
    }
    
}

void function(float x, float y, float b) {
    if (b - y == 0 || b - x < 0) {
        std::cout << "Ошибка" << std::endl;
    }
    else {
        std::cout << std::log(b - y)*std::sqrt(b - x);
    }
}

void order(int n) {
    if (n < 0) {
        float q = n + n*(-1) + 1;
        for (int i = q; i < q + 10; ++i) {
            std::cout << i << ' ';
        }
    } else if (n == 0){
        for (int i = n + 1; i < n + 11; ++i) {
            std::cout << i << ' ';
        }
    } else {
        for (int i = std::round(n) + 1; i < n + 10; ++i) {
            std::cout << i << ' ';
        }
    }
}

void tab() {
    for (double i = -4; i < 5; i += 0.5) {
        if (i - 1 == 0) {
            std::cout << "Ошибка" << std::endl;
        }
        else {
            std::cout << (i*i - 2*i + 2)/(i - 1) << " ; ";
        }
    }
}

int main() {
    setlocale(LC_ALL, "ru");

    float r, R, h;
    float a, x;
    float x1, y, b;
    int n;

    // std::cout << "Первая задача(r, R, h)" << std::endl;
    // std::cin >> r >> R >> h;
    // konus(r, R, h);
    // std::cout << std::endl;

    // std::cout << "Вторая задача(a, x)" << std::endl;
    // std::cin >> a >> x;
    // branching(a, x);
    // std::cout << std::endl;

    // std::cout << "Третья задача(x, y, b)" << std::endl;
    // std::cin >> x1 >> y >> b;
    // function(x1, y, b);
    // std::cout << std::endl;

    std::cout << "Четвертая задача(n)" << std::endl;
    std::cin >> n;
    order(n);
    std::cout << std::endl;

    // std::cout << "Пятая задача" << std::endl;
    // tab();

    return 0;
}