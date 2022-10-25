class Rectangle
{
private:
    double length;
    double width;

public:
    Rectangle();

    double calcPerimeter();
    double calcArea();
    
    double getLength();
    void setLength(double length);

    double getWidth();
    void setWidth(double width);

    ~Rectangle();
};
