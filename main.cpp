#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Tic-Tac-Toe" << endl << endl;
    cout << "Press '1' to play" << endl;
    cout << "Enter: ";
    int start;
    cin >> start;
    if (start == 1) {
        cout << "Would you like to go first?" << endl;
        cout << "       1. Yes" << endl;
        cout << "       2. No" << endl;
        cout << "   Selection: ";
        int Begin;
        cin >> Begin;
        if (Begin == 1) {
            cout << "Your turn (X)" << endl << endl;
        // interface to enter move selections
        // neither player nor computer can overwrite previous moves
            cout << "Enter 'X' where you would like to play" << endl << endl;
            // char 'X' only, for invalid: "please try again"
            // if player places 3 sequential X's, they win. Repeat
            // player moves, computer selects random unoccupied space (alternate character placement). repeat
            // if occupied space is chosen, notify user, and have them enter different space. Continue
            cout << "You won!" << endl << endl;
            cout << "   Play again?" << endl;
            cout << "       1. Yes\n       2. No\n" << endl;
            cout << "   Enter: ";
            int repeat1;
            cin >> repeat1;
            if (repeat1 == 1) {
                return main();
            } else if (repeat1 != 1) {
                cout << "Thanks for playing!" << endl;
                return 0;
            }
            // if computer places 3 sequential O's, player loses. Repeat
            cout << "Game Over" << endl << endl;
            cout << "   Play again?" << endl;
            cout << "       1. Yes\n       2. No\n" << endl;
            cout << "   Enter: ";
            int repeat2;
            cin >> repeat2;
            if (repeat2 == 1) {
                return main();
            } else if (repeat2 != 1) {
                cout << "Thanks for playing!" << endl;
                return 0;
            // if neither place 3 sequential characters, tie game. Repeat
            //cout << "Tie game" << endl << endl;
            //cout << "   Play again?" << endl;
            //cout << "       1. Yes\n       2. No\n" << endl;
            //cout << "   Enter: ";
            //int repeat3;
            //cin >> repeat3;
            //if (repeat2 == 1) {
            //return main();
            //}
            // else if (repeat2 != 1) {
            //cout << "Thanks for playing!" << endl;
            //return 0;
            //}
            }
            }
        else if (Begin == 2) {
                cout << "Computer's turn (O)" << endl << endl;
                cout << "Game Over" << endl << endl;
                cout << "   Play again?" << endl;
                cout << "       1. Yes\n       2. No\n" << endl;
                cout << "   Enter: ";
                int repeat;
                cin >> repeat;
                if (repeat == 1) {
                    return main();
                } else if (repeat != 1) {
                    cout << "Thanks for playing!" << endl;
                    return 0;
                }
            }
        else if ((Begin < 1) || (Begin > 2)) {
            cout << "Invalid choice " << endl << endl;
            return main();
        }
    }
    else if (start != 1) {
        cout << "Invalid entry" << endl << endl;
        return main();}
    }

