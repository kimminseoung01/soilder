#include <iostream>
#include "Marine.h"
using namespace std;


Marine::Marine()
    : hp(50), coord_x(0), coord_y(0), damage(5), is_dead(false)
{}

Marine::Marine(int x, int y)
 : hp(50), coord_x(x), coord_y(y), damage(5), is_dead(false)
{}

int Marine::attack() const{
    return damage;
}

void Marine::be_attacked(int damage_earn){
    hp-=damage_earn;
    if(hp<=0){
        hp=0;
        is_dead=true;
    }
}

void Marine::move(int x, int y){
    coord_x = x;
    coord_y = y;
}

int Marine::get_hp() const{
    return hp;
}

bool Marine::get_is_dead() const{
    return is_dead;
}

void Marine::show_status() const {
    cout<< "*** Marine *** \n"
        << " Location : (" <<coord_x<<", "<<coord_y<<")\n"
        << " HP       : "<< hp << "\n"
        << " Status   : "<<(is_dead ? "Dead\n" : "Alive\n")
        << endl;

}
