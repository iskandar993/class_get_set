#include <iostream>
using namespace std;
class student{
    private:
    std::string fulname;
    int age;
    int year;
    public:
    // setter
    void setFulname (std::string s){
        fulname = s;
    }
    void setAge (int a){
        age = a;
    }
    void setYear (int y){
        year = y;
    }
    //getter
    string getFulname () { return fulname;}
    int getAge () { return age;}
    int getYear () { return year;}
};

int main(){
    student stud;
    stud.setFulname ("John Smith");
    stud.setAge (30);
    stud.setYear (1993);
    cout<<stud.getFulname()<<" "<<stud.getAge()<<" "<<stud.getYear()<<std::endl;
}