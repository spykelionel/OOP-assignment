#include <iostream>
#define MAX_GUESS 5

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    my_goto();
    return 0;
}

// goto statements

void my_goto(void){
    int num;
    guess:
        cout <<"Guess a number. "<<endl;
        cin<<num;
        if(num<MAX_GUESS)goto guess;
        count<< "You guessed" <<num << "Correctly"<<endl;

}