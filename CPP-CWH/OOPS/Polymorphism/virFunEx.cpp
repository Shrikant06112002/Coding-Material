#include<iostream>
using namespace std;
class CWH{
    protected:
        string title;
        float rating;
    public: 
        CWH(string s,float r){
            title=s;
            rating =r;
        }
        virtual void display(){

        }
};
class CWHVideo: public CWH{
    int wordlen;
    public:
        CWHVideo(string s,float r,int val):CWH(s,r){
            wordlen=val;
        }
        void display(){
        cout<<"this is amzing video tiitle  "<<title<<endl;
        cout<<"this is rating  "<<rating<<endl;
        cout<<"this is words "<<wordlen<<endl;

        }
};
int main(){
    string title;
    float rating=4.5;
    int vlen=34;

    CWHVideo vi("shrikant",rating,vlen);
    // vi.display();

    CWHVideo vi2("shrikant2",9,12);
    CWH* tut[2];
    tut[0] = &vi;
    tut[1] = &vi2;

    tut[0]->display();
    tut[1]->display();

return 0;
}