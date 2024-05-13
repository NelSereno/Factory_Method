#include <iostream>

class Shape{
    public:
    virtual void draw() = 0;
};

class Circle: public Shape{
    public:
    void draw() override{
        std::cout << "Circle\n";
    };
};

class Square: public Shape{
    public:
    void draw() override{
        std::cout << "Square\n";
    };
};

class Rectangle: public Shape{
    public:
    void draw() override{
        std::cout << "Rectangle\n";
    };
};

class ShapeFactory{
  public:
  Shape* getShape(){
      return new Rectangle;
  };
};

class FactoryPatternDemo{
    public:
    void main(){
        ShapeFactory sf;
        Shape* s = sf.getShape();
        s->draw();
    };
};

int main(){
    FactoryPatternDemo fpd;
    fpd.main();
}

