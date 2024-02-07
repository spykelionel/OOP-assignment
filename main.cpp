#include <iostream>
#define MAX_GUESS 5

using namespace std;
void my_goto();
void call_by_ref(int &);
void call_by_addr(int *);

int main()
{
    cout << "Hello world!" << endl;
    //my_goto();

    int x = 5; // for ref
    int y = 5; // for addr
    cout <<"Before Calling by reference, x="<<x<<endl;
    cout <<"Before Calling by address, y="<<y<<endl;
    call_by_ref(x);
    call_by_addr(&y);
    cout <<"After Calling by reference, x="<<x<<endl;
    cout <<"After Calling by address, y="<<y<<endl;
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
