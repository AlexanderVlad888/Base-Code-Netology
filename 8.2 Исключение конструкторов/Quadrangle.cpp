#include <iostream>
#include "Figure.h"
#include "Quadrangle.h"
#include "MyClassException.h"


Quadrangle::Quadrangle(int a, int b) : Figure("�������������", 4) {
    this->a = a;
    this->b = b;
    c = a;
    d = b;
    A = 90;
    B = 90;
    C = 90;
    D = 90;
    if (A + B + C + D != 360) {
        throw MyClassException("������ �������� ������ �������������. �������: ����� ����� �� ����� 360.");
    }
    if (a <= 0 || b <= 0 || c <= 0 || d <= 0) {
        throw MyClassException("������ �������� ������  �������������. �������: ������� �������������� ������ ���� ������ 0.");
    }
    if (sides_count != 4) {
        throw MyClassException("������ �������� ������ �������������. �������: ���������� ������ �������������� ������ ���� ������ 4.");
    };
    if (a != c || d != b) {
        throw MyClassException("������ �������� ������ �������������. �������: ��������������� ������� �� �����.");
    };
    if (C != A || C != B || C != D) {
        throw MyClassException("������ �������� ������ �������������. �������: ���� �� �����.");
    };
    
}
Quadrangle::Quadrangle(int a) : Figure("�������", 4)
{
    this->a = a;
    b = c = d = a;
    A = 90;
    B = 90;
    C = 90;
    D = 90;
    
    if (A + B + C + D != 360) {
        throw MyClassException("������ �������� ������ �������. �������: ����� ����� �� ����� 360.");
    }
    if (a <= 0 || b <= 0 || c <= 0 || d <= 0) {
        throw MyClassException("������ �������� ������  �������. �������: ������� �������������� ������ ���� ������ 0.");
    }
    if (sides_count != 4) {
        throw MyClassException("������ �������� ������ �������. �������: ���������� ������ �������� ������ ���� ������ 4.");
    };
    if (a != c || a != b || a != d ) {
        throw MyClassException("������ �������� ������ �������. �������:  ������� �������� �� �����.");
    };
    if (C != A || C != B || C != D) {
        throw MyClassException("������ �������� ������ �������. �������: ���� �� �����.");
    };
}

Quadrangle::Quadrangle(int a, int b, float A, float B) : Figure("����", 4) {
    this->a = a;
    this->b = b;
    c = d = a;
    this->A = A;
    this->B = B;
    C = A;
    D = B;

    if (A + B + C + D != 360) {
        throw MyClassException("������ �������� ������ ����. �������: ����� ����� �� ����� 360.");
    }
    if (A <= 0 || B <= 0) {
        throw MyClassException("������ �������� ������ ����. �������: ���� ����� ������ ���� ������ 0.");
    }
    if (a <= 0 || b <= 0 || c <= 0 || d <= 0) {
        throw MyClassException("������ �������� ������  ����. �������: ������� �������������� ������ ���� ������ 0.");
    }
    if (sides_count != 4) {
        throw MyClassException("������ �������� ������ ����. �������: ���������� ������ ����� ������ ���� ������ 4.");
    };
    if (a != c || a != b || a != d) {
        throw MyClassException("������ �������� ������ ����. �������: ������� �� �����.");
    };
    if (C != A || D != B) {
        throw MyClassException("������ �������� ������ ����. �������: ��������������� ���� �� �����.");
    };
}
Quadrangle::Quadrangle(int a, int b, float A) : Figure("��������������", 4) {
    this->a = a;
    this->b = b;
    c = a;
    d = b;
    this->A = A;
    C = A;
    B = (360 - A * 2) / 2;
    D = B;
    
    if (A + B + C + D != 360) {
        throw MyClassException("������ �������� ������ ��������������. �������: ����� ����� �� ����� 360.");
    }
    if (A <= 0 || B <= 0) {
        throw MyClassException("������ �������� ������ ��������������. �������: ���� ��������������� ������ ���� ������ 0.");
    }
    if (a <= 0 || b <= 0 || c <= 0 || d <= 0) {
        throw MyClassException("������ �������� ������  ��������������. �������: ������� ��������������� ������ ���� ������ 0.");
    }
    if (sides_count != 4) {
        throw MyClassException("������ �������� ������ ��������������. �������: ���������� ������ ��������������� ������ ���� ������ 4.");
    };
    if (a != c || d != b) {
        throw MyClassException("������ �������� ������ ��������������. �������: ��������������� ������� �� �����.");
    };
    if (C != A || D != B) {
        throw MyClassException("������ �������� ������ ��������������. �������: ��������������� ���� �� �����.");
    };
}
Quadrangle::Quadrangle(int a, int b, int c, int d, float A, float B, float C, float D) : Figure("��������������", 4), a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) {

    if (A + B + C + D != 360) {
        throw MyClassException("������ �������� ������ ��������������. �������: ����� ����� �� ����� 360.");
    }
    if (A <= 0 || B <= 0) {
        throw MyClassException("������ �������� ������ ��������������. �������: ���� ��������������� ������ ���� ������ 0.");
    }
    if (a <= 0 || b <= 0 || c <= 0 || d <= 0) {
        throw MyClassException("������ �������� ������  ��������������. �������: ������� ��������������� ������ ���� ������ 0.");
    }
    if (sides_count != 4) {
        throw MyClassException("������ �������� ������ ��������������. �������: ���������� ������ ��������������� ������ ���� ������ 4.");
    };
   

}

// ��������������� ������
void Quadrangle::get_info() {
    std::cout << "(�������: " << "" << a << ", " << "" << b << ", " << "" << c << ", " << d  ;
    std::cout << " ����: " << "" << A << ", " << "" << B << ", " << "" << C << ", " << D << ") ������." << std::endl;
}

bool Quadrangle::check() {
    if (A + B + C + D == 360 && get_sides_count() == 4) {
        return true;
    }
    return false;
}
float Quadrangle::get_C() {
    return C;
}
float Quadrangle::get_A() {
    return A;
}
float Quadrangle::get_B() {
    return B;
}
float Quadrangle::get_D() {
    return D;
}
int Quadrangle::get_a() {
    return a;
}
int Quadrangle::get_c() {
    return c;
}
int Quadrangle::get_b() {
    return b;
}
int Quadrangle::get_d() {
    return d;
}

//����� ��������� �������� ����� ��������������
void Quadrangle::set_Anle(float A, float B, float C, float D) {
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
}


