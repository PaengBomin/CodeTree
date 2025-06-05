#include <iostream>
#include <string>

using namespace std;

class Product {
private: 
    string product_name;
    int product_code;
public:
    Product(string name="codetree", int code=50) {
        this->product_name=name;
        this->product_code=code;
    }
    void print_product() {
        cout << "product " << product_code << " is " << product_name << endl;
    }
};

int main() {
    string name;
    int code;

    Product sub1;
    sub1.print_product();

    cin >> name >> code;

    Product sub2(name,code);
    sub2.print_product();

    return 0;
}