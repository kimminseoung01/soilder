#include <iostream>
using namespace std;

#define WIDTH 10
#define HEIGHT 5

char maze[HEIGHT][WIDTH] = {
    {'#','#','#','#','#','#','#','#','#','#'},
    {'#','P','.','.','#','.','.','.','E','#'},
    {'#','#','#','.','#','.','#','#','#','#'},
    {'#','.','.','.','.','.','.','.','.','#'},
    {'#','#','#','#','#','#','#','#','#','#'}
};

int playerX = 1, playerY = 1; // 플레이어 위치

void displayMaze() {
    system("cls");  // 화면 클리어
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            cout << maze[i][j] << " ";
        }
        cout << endl;
    }
}

void movePlayer(char direction) {
    int newX = playerX, newY = playerY;

    if (direction == 'w') newX--; // 위
    else if (direction == 's') newX++; // 아래
    else if (direction == 'a') newY--; // 왼쪽
    else if (direction == 'd') newY++; // 오른쪽

    if (maze[newX][newY] == '.' || maze[newX][newY] == 'E') {
        maze[playerX][playerY] = '.'; // 기존 자리 지움
        playerX = newX;
        playerY = newY;
        maze[playerX][playerY] = 'P'; // 새로운 자리 이동
    }
}

int main() {
    char input;
    while (true) {
        displayMaze();
        cout << "WASD로 이동 (q 입력 시 종료): ";
        cin >> input;

        if (input == 'q') break;

        movePlayer(input);

        if (maze[playerX][playerY] == 'E') {
            displayMaze();
            cout << "🎉 출구에 도착! 게임 클리어!\n";
            break;
        }
    }

    return 0;
}
