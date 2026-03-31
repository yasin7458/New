#include <iostream>
using namespace std;

class ArrayManager
{
private:
    int arr[20];
    int num;

public:
    ArrayManager()
    {
        num = 0;
    }

    void creatArray()
    {
        cout << "How Many Elements Want To Add In Array :- ";
        cin >> num;

        cout << endl;

        if (num <= 20)
        {
            for (int i = 0; i < num; i++)
            {
                cout << "Enter The Elements " << i + 1 << " :- ";
                cin >> arr[i];
            }
            cout << "Array Created Successfully.....!!!!" << endl;
        }
        else
        {
            cout << "Invalide Size......." << endl;
        }
    }

    void readArray()
    {
        cout << "Array Elements Are :- ";

        for (int i = 0; i < num; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void deleteArray()
    {
        int pos;

        cout << "Enter Element Position To Delete In Array :- ";
        cin >> pos;

        if (pos >= 0 && pos < num)
        {
            for (int i = pos - 1; i < num - 1; i++)
            {
                arr[i] = arr[i + 1];
            }
            num--;
            cout << "Array Deleted Successfully.....!!!!" << endl;
        }
        else
        {
            cout << "Invalide Position....." << endl;
        }
    }

    void updateArray()
    {
        int pos, value;

        cout << endl;
        cout << "Enter Element Position To Update In Array :- ";
        cin >> pos;

        if (pos >= 0 && pos < num)
        {
            cout << endl;
            cout << "Enter The New Value :- ";
            cin >> value;

            arr[pos] = value;

            cout << endl;

            cout << "Array Updated Successfully......!!!" << endl;
        }
        else
        {
            cout << "Invalide Position....." << endl;
        }
    }
};

int main()
{
    ArrayManager obj;

    while (true)
    {
        cout << endl;
        cout << "======== WELCOME TO OUR PROGRAMME ========" << endl;
        cout << endl;

        cout << "1. Create An Array" << endl;
        cout << "2. Read An Array" << endl;
        cout << "3. Delete An Array" << endl;
        cout << "4. Update An Array" << endl;
        cout << "0. Exit An Array" << endl;
        cout << endl;

        int choice;

        cout << "Enter Your Choice :- ";
        cin >> choice;

        cout << endl;

        switch (choice)
        {
        case 1:
            obj.creatArray();
            break;
        case 2:
            obj.readArray();
            break;
        case 3:
            obj.deleteArray();
            break;
        case 4:
            obj.updateArray();
            break;
        case 0:
            cout << endl;
            cout << "Exit From Array Successfully......!!!" << endl;
            return 0;

        default:
            cout << "Invalide Choice!!!!!" << endl;
            break;
        }
    }
}