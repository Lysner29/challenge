#include <iostream>
#include <string>
#include <stdlib.h>

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



        cout << " - - - \n - - - \n - - -" << endl;
        cout << "1. Top left" << endl;
        cout << "2. Top middle" << endl;
        cout << "3. Top right" << endl;
        cout << "4. Center left" << endl;
        cout << "5. Middle" << endl;
        cout << "6. Center right" << endl;
        cout << "7. Bottom left" << endl;
        cout << "8. Bottom middle" << endl;
        cout << "9. Bottom right" << endl;
        int t1;
        cin >> t1;
            if (t1 == 1) {
                cout << " X - - \n - - - \n - - -" << endl;
            }
            else if (t1 == 2) {
                cout << " - X - \n - - - \n - - -" << endl;
            }
            else if (t1 == 3) {
                cout << " - - X \n - - - \n - - -" << endl;
            }
            else if (t1 == 4) {
                cout << " - - - \n X - - \n - - -" << endl;
            }
            else if (t1 == 5) {
                cout << " - - - \n - X - \n - - -" << endl;
            }
            else if (t1 == 6) {
                cout << " - - - \n - - X \n - - -" << endl;
            }
            else if (t1 == 7) {
                cout << " - - - \n - - - \n X - -" << endl;
            }
            else if (t1 == 8) {
                cout << " - - - \n - - - \n - X -" << endl;
            }
            else if (t1 == 9) {
                cout << " - - - \n - - - \n - - X" << endl;
            }
        cout << "Computer's turn (O)" << endl;
            // From 1 to 9
        int ct1;
        ct1 = 1 + rand() % 9;
        while (ct1 == t1) {
            ct1 = 1 + rand() % 9;
        }
        if (ct1 == 0) {
            cout << " O - - \n - - - \n - - -" << endl;
        } else if (ct1 == 1) {
            cout << " - O - \n - - - \n - - -" << endl;
        } else if (ct1 == 2) {
            cout << " - - O \n - - - \n - - -" << endl;
        } else if (ct1 == 3) {
            cout << " - - - \n O - - \n - - -" << endl;
        } else if (ct1 == 4) {
            cout << " - - - \n - O - \n - - -" << endl;
        } else if (ct1 == 5) {
            cout << " - - - \n - - O \n - - -" << endl;
        } else if (ct1 == 6) {
            cout << " - - - \n - - - \n O - -" << endl;
        } else if (ct1 == 7) {
            cout << " - - - \n - - - \n - O -" << endl;
        } else if (ct1 == 8) {
            cout << " - - - \n - - - \n - - O" << endl;
        }


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

