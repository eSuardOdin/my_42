class Point
{
private:
    float X;
    float Y;
public:
    Point(float x, float y);
    void Translate(float x, float y);
    void Display();
    ~Point();
};

