#include <iostream>
using namespace std;

class Base {
public:
    virtual void tree() const = 0;
        
    
};

class FirstTree: public Base {
    virtual void tree()const override {
        cout <<" "<<"/ \\"<<endl;
        cout << "// \\\\" << endl;
    }
};

class SecondTree : public Base {
    virtual void tree()const override {
        cout << " " << "/\\" << endl;
        cout << "/**\\" << endl;
    }
};

    class ThirdTree : public Base {
        virtual void tree()const override {
            cout << " " << " " << "/\\" << endl;
            cout << "/ ++ \\" << endl;
        }
        };

        int main() {
            const int trees = 3;
            Base* array[trees] = { new FirstTree(), new SecondTree(), new ThirdTree() };

            

            for (auto tree: array) {
                
                tree->tree();
                cout <<endl;
            }
            for (auto tree: array) {
                delete tree;
            }
            return 0;
        }
   
