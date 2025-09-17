#include <iostream>
#include "Marine.h"

using namespace std;




int main(){
    Marine marine1(2,3);
    Marine marine2(5,6);

    marine1.show_status();
    marine2.show_status();

    cout<<"\n 마린 1이 공격! "<<endl;
    marine2.be_attacked(marine1.attack());

    marine1.show_status();
    marine2.show_status();

    return 0;
}