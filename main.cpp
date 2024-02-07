#include <iostream>
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

    public:
    void input_data(int x, int y){
        cx= x;
        cy=y;
    }
    void show_data(){
        cout<<"cx="<<cx<<"\t"<<"cy="<<cy<<endl;
    }
};

int main()
{
    Demo d1;
    d1.input_data(20, 23);
    d1.show_data();
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
