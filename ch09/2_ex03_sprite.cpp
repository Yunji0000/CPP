#include <iostream>
#include <string>
using namespace std;

class Sprite {
    int x, y;
    string image;
public:
    Sprite(int x, int y, string image) : x(x), y(y), image(image) {}

    virtual void draw() {
        // 드로잉 로직 (플레이스홀더)
        cout << "스프라이트를 (" << x << ", " << y << ")에서 이미지 " << image << "로 그립니다." << endl;
    }

    virtual void move() {
        // 이동 로직 (플레이스홀더)
        cout << "스프라이트를 (" << x << ", " << y << ")에서 이동합니다." << endl;
    }

    friend ostream& operator<<(ostream& os, const Sprite& sprite) {
        os << "스프라이트 위치: (" << sprite.x << ", " << sprite.y << "), 이미지: " << sprite.image;
        return os;
    }
};

class Alien : public Sprite {
    int speed;
public:
    Alien(int x, int y, string image, int speed) : Sprite(x, y, image), speed(speed) {}

    void move() override {
        // Alien의 이동 로직 재정의
        cout << "Alien이 속도 " << speed << "로 이동합니다." << endl;
    }

    friend ostream& operator<<(ostream& os, const Alien& alien) {
        os << static_cast<const Sprite&>(alien) << " 및 속도: " << alien.speed;
        return os;
    }
};

class Player : public Sprite {
    string name;
public:
    Player(int x, int y, string image, string name) : Sprite(x, y, image), name(name) {}

    void move() override {
        // Player의 이동 로직 재정의
        cout << "플레이어 " << name << "가 이동합니다!" << endl;
    }

    friend ostream& operator<<(ostream& os, const Player& player) {
        os << static_cast<const Sprite&>(player) << " 및 이름: " << player.name;
        return os;
    }
};

int main() {
    Alien a(0, 100, "alien_image.jpg", 5);
    Player p(0, 100, "player_image.jpg", "Hero");

    cout << a << endl;
    cout << p << endl;

    a.move();
    p.move();

    return 0;
}
