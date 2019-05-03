#include <iostream>
#include <string>

using namespace std;

int main()
{
    bool randomTrue = true;
    bool kickOne = false;
    bool punchOne = false;
    bool wrongAttack = false;
    double wolfDamage = 40;
    string firstAttackWay;
    double punchDamage = 10;
    double kickDamage = 15;
    float wolfHealth = 75;
    float playerHealth = 100;
    string userName;
    cout << "               Hello there!\n               What is your name?: ";
    cin >> userName;
    cout << "               Hi there " + userName + "!";
    cout << "\n               HHUUUHH!!\n               Looks like there is a wolf on our tale!" << endl;
    if (wrongAttack == true || randomTrue == true) {
    cout << "Powers:\nPunch = 1\nKick = 2" << endl;
    cout << "Player health: ";
    cout << playerHealth << endl;
    cout << "Wolf health: ";
    cout << wolfHealth;
    cout << "               Attack the wolf!\n               Enter the attack you want to do (1, 2, or E to end): ";
    cin >> firstAttackWay;
    if (firstAttackWay == "1")
    {
        punchOne = true;
    }
    else if (firstAttackWay == "2")
    {
        kickOne = true;
    }
    else if (firstAttackWay == "E")
    {
        return 0;
    }
    else
    {
        cout << "               You did not type in the correct type of attack";
        wrongAttack = true;
    }
    if (punchOne == true) {
    wolfHealth -= punchDamage;
    cout << "               You punched the wolf!\nWolf health:" << endl;
    cout << wolfHealth << endl;
    }
    if (kickOne == true) {
        wolfHealth -= kickDamage;
        cout << "               You kicked the wolf!\nWolf health:" << endl;
        cout << wolfHealth << endl;
    }
    if (punchOne == true || kickOne == true)
    {
        playerHealth -= wolfDamage;
        cout << "               The wolf has bit you!\nPlayer health:" << endl;
        cout << playerHealth;
    }

}
}
