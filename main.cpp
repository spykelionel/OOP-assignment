#include <iostream>
#include <string.h>
#define MAX_GUESS 5

using namespace std;
void my_goto();
void call_by_ref(int &);
void call_by_addr(int *);
// return by reference

    int p = 20;

int &retfef(int a){
    p = p + a;

    return p;
}

inline void show(){
    cout <<"This is an inline function."<<endl;
}

// Classes

class Demo {
    private:
    int cx,cy;
    char sname[10];

    public:
    void input_data(int x, int y){
        cx= x;
        cy=y;
    }
    void show_data(){
        cout<<"cx="<<cx<<"\t"<<"cy="<<cy<<endl;
    }
    void setName(char[]);
    void printName();
};

void Demo::printName(){
    cout <<"My name is: "<<sname<<endl;
}

class A {
    public:
    int a;
        A(){
            a = 10;
        }
};
class B: public virtual A {};
class C: public virtual A {};
class D: public B, public C {};

template <class FUNC>

FUNC max_num(FUNC a, FUNC b){
    return (a>b?a:b);
}

class E {
};

int main()
{


    try {
        throw E();
    }
    catch (E e) {
        cout << "CAUGHT EXCEPTION"<<endl;
    }

    cout <<"After exception something" <<endl;

    return 0;
}

// goto statements

void my_goto(){
    int num;
    guess:
        cout <<"Guess a number. "<<endl;
        cin>>num;
        if(num!=MAX_GUESS)goto guess;
        cout<< "You guessed " <<num << " Correctly"<<endl;

}

void call_by_ref(int &x){
    x = x + 10;
}

void call_by_addr(int *y){
    *y = *y + 10;
}
