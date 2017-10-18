    #include <iostream>

    using namespace std;

    class nokta{
        int x,y,z;

    public:
        nokta(int x=0,int y=0,int z=0);
        void goster();
        nokta operator+(nokta p);
        nokta operator-(nokta p);
    };

    void nokta::goster() {
        cout<<"Xdegeri: "<<x<<"Ydegeri: "<<y<<"Zdegeri: "<<z<<endl;
    }

    nokta::nokta(int x, int y, int z) {
        this->x=x;
        this->y=y;
        this->z=z;
    }

    nokta nokta::operator+(nokta p) {

        int yeni_x,yeni_y,yeni_z;

        yeni_x=x+p.x;
        yeni_y=y+p.y;
        yeni_z=z+p.z;

        return nokta(yeni_x,yeni_y,yeni_z);
    }

    nokta nokta::operator-(nokta p) {
        int yeni_x,yeni_y,yeni_z;

        yeni_x=x-p.x;
        yeni_y=y-p.y;
        yeni_z=z-p.z;
        return nokta(yeni_x,yeni_y,yeni_z);
    }


    int main() {

        nokta a(1,2,3),b(2,3,5),c;
        c=a+b;
        c.goster();
        nokta d(5,4,6),e(2,3,5),f;
        f=d-e;
        f.goster();
        return 0;
    }
