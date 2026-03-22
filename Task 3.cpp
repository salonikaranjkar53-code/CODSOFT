#include <iostream>
using namespace std;

char b[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char p = 'X';

void show() {
    cout << "\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            cout << b[i][j] << " | ";
        cout << endl << "------\n";
    }
}

bool win() {
    for(int i=0;i<3;i++){
        if(b[i][0]==b[i][1] && b[i][1]==b[i][2]) return true;
        if(b[0][i]==b[1][i] && b[1][i]==b[2][i]) return true;
    }
    if(b[0][0]==b[1][1] && b[1][1]==b[2][2]) return true;
    if(b[0][2]==b[1][1] && b[1][1]==b[2][0]) return true;
    return false;
}

int main() {
    int ch;
    for(int i=0;i<9;i++){
        show();
        cout << "Player " << p << " Turn.enter position: ";
        cin >> ch;

        int r=(ch-1)/3;
        int c=(ch-1)%3;

        if(b[r][c]=='X'||b[r][c]=='O'){
            cout<<"Postion already taken! Try again\n";
            i--;
            continue;
        }

        b[r][c]=p;

        if(win()){
            show();
            cout<<" congrats!!Player "<<p<<"you Wins!";
            return 0;
        }

        p = (p=='X') ? 'O' : 'X';
    }

    show();
    cout<<"Game Draw";
}