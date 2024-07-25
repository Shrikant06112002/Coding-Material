#include<iostream>
using namespace std;
class Student{
    protected:
        int rollno;
    public:
        void setNumber(int);
        void getNumber(void);
};
void Student::setNumber(int r){
    rollno = r;
}
void Student::getNumber(){
    cout<<"the student roll number is"<<rollno<<endl;
}

class Exam:public Student{
    protected:
        float maths;
        float phy;
    public:
        void setMarks(float,float);
        void getMarks(void);
};
void Exam :: setMarks(float m1,float m2){
    maths=m1;
    phy=m2;
}
void Exam :: getMarks(){
    cout<<"maths:-"<<maths<<endl;
    cout<<"physics:-"<<phy<<endl;
}

class Result: public Exam{
    float perc;
    public:
        void display(){
            getNumber();
            getMarks();
            cout<<"your percentage is"<<maths*phy<<endl;
        }
};

int main(){
    Result shri; // Exam and Student che methods
    shri.setNumber(47);
    shri.setMarks(56.0,34.0);
    // shri.getMarks();
    shri.display();
    

    return 0;
}