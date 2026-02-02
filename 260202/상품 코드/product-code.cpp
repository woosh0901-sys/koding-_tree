#include <iostream>
#include <string>

using namespace std;
class Product{
public:
    string product_name;
    int product_code;

    Product(string product_name = "codetree", int product_code = 50){
        this->product_name = product_name;
        this->product_code = product_code;
    }
};


int main() {
    string product_name1;
    int product_code1;
    cin >> product_name1 >> product_code1;

    Product product1 = Product();
    cout << "product " << product1.product_code << " is " << product1.product_name << "\n";

    Product product2 = Product(product_name1,product_code1);

    cout << "product " << product2.product_code << " is " << product2.product_name;
    // Please write your code here.

    return 0;
}