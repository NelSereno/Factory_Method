#include <iostream>

class Product{
	public:
	void doStuff(){
	   std::cout << "doStuff invocado!!!\n";
	};
};

class ConcreteProductA: public Product{};

class ConcreteProductB: public Product{};

class Creator{
	public:
        virtual Product* createProduct(){
	    return NULL;
	};
	void someOperation(){
	    Product* p = createProduct();  
	    p->doStuff();
	};
};

class ConcreteCreatorA: public Creator{
	public:
	Product* createProduct() override{
		return new ConcreteProductA();
	};
};

class ConcreteCreatorB: public Creator{
	public:
	Product* createProduct() override{
		return new ConcreteProductB();
	};
};

int main(){
	Creator c;
    c.someOperation();
}
