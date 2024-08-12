#ifndef SET_CHAR_H
#define SET_CHAR_H
const int N_CHAR_MAX = 512;


class set_char
{
    private:
    unsigned char set[N_CHAR_MAX];

    public:
    set_char();
    int add_char(char c);
    int get_card();
    int is_char_present(char c);
    void display();
};

#endif