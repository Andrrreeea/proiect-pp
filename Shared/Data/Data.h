#ifndef DATA_H
#define DATA_H


class Data
{
    public:
        void set_zi(int zi_nou);
        int get_zi();
        void set_luna(int luna_nou);
        int get_luna();
        void set_an(int an_nou);
        int get_an();
        Data();
    private:
        int zi, luna, an;
};

#endif // DATA_H
