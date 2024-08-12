#ifndef SET_INT_H
#define SET_INT_H
class set_int
{
    private:
        int *values;
        int max;
        int current;
    public:
        set_int(int num_el);
        int add_value(int v);
        void display();
        int is_present(int v);
        ~set_int();
};




#endif