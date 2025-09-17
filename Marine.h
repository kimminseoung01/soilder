#ifndef MARINE_H
#define MARINE_H

class Marine{
private:
    int hp;
    int coord_x, coord_y;
    int damage;
    bool is_dead;

public:
    Marine();
    Marine(int x, int y);

    int attack() const;
    void be_attacked(int damage_earn);
    void move(int x, int y);
    int get_hp() const;
    bool get_is_dead()const;
    void show_status()const;
};

#endif // MARINE_H