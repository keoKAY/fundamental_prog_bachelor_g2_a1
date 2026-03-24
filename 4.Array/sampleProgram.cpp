#include <iostream>
using namespace std;
struct Worker
{
    int id;
    string name;
    float salary;
    Worker() {}
    Worker(int id, string name, float salary)
    {
        this->id = id;
        this->name = name;
        this->salary = salary;
    }
    void input()
    {
        cout << "Enter worker id: ";
        cin >> id;
        cin.ignore();
        cout << "Enter worker name: ";
        getline(cin, name);
        cout << "Enter worker salary: ";
        cin >> salary;
    }
    void update()
    {
        cout << "Enter new worker name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter new salary: ";
        cin >> salary;
    }
    void output()
    {
        cout << id << " - " << name << " - " << salary << endl;
    }
};

// return as an index
// index = -1 not found
// index !=-1 found
int searchWorkerByID(Worker workerList[], int size)
{
    int searchID;
    cout << "Enter ID to search: ";
    cin >> searchID;
    for (int i = 0; i < size; i++)
    {
        if (workerList[i].id == searchID)
        {
            return i; // return the found index
        }
    }
    return -1; // Not found
}

// wait for user to press enter
void waitForKeyPress()
{
    cout << "---------------Press Enter to continue----------------" << endl;
    cin.ignore();
    cin.get();
}

void printAllWorker(Worker workerList[], int counter)
{
    for (int i = 0; i < counter; i++)
    {
        cout << (i + 1) << ". ";
        workerList[i].output();
    }
}
int main()
{
    int option;
    system("clear");
    int n; // max amount of record
    cout << "Enter max amount of record: ";
    cin >> n;
    if (n <= 0)
    {
        cout << " ⚠️ Message= n must be greater than 0 " << endl;
        return 0; // exit from main (close the program)
    }
    Worker workerList[n];
    int counter = 0;
    do
    {
        system("clear");
        cout << "===============<<WORKER PROGRAM>>=============" << endl;
        cout << "1. Add new worker " << endl;
        cout << "2. Show all worker info " << endl;
        cout << "3. Update worker " << endl;
        cout << "4. Delete worker " << endl;
        cout << "5. Search worker " << endl;
        cout << "6. Exit" << endl;
        cout << ">> CHoose your option(1-6): ";
        cin >> option;
        switch (option)
        {
        case 1:
        {

            // TODO: add condition if counter is still valid
            if (counter >= n)
            {
                cout << " ⚠️ Capacity full, delete some data or increase the size of array " << endl;
                break;
            }
            // Add worker to workerList
            // create a new worker
            Worker newWorker;
            cout << "------------INPUT--------------" << endl;
            newWorker.input();
            workerList[counter] = newWorker;
            counter++;
        }
        break;
        case 2:
        {
            cout << "-------------[Show ALL]-------------" << endl;
            if (counter == 0)
            {
                cout << " ⚠️ There is no data to show !" << endl;
                break;
            }

            cout << "1. Show all data " << endl;
            cout << "2. Show highest -> lowest (salary)" << endl;
            cout << "3. Show lowest -> higest (worker id )" << endl;
            int showOption;
            cout << "--> Choose your option: ";
            cin >> showOption;
            switch (showOption)
            {
            case 1:
            {
                printAllWorker(workerList, counter); 
            }
            break;
            case 2:
            {
                // show by sort salary (highest -> lowest )
                for (int i = 0; i < counter; i++)
                {
                    for (int j = 0; j < counter - i - 1; j++)
                    {
                        if (workerList[j].salary < workerList[j + 1].salary)
                        {
                            swap(workerList[j], workerList[j + 1]);
                        }
                    }
                }

                printAllWorker(workerList,counter); 
            }
            break;

            case 3:
                //  sort by id ( lowest to highest )
                {
                    for (int i = 0; i < counter; i++)
                    {
                        for (int j = 0; j < counter - i - 1; j++)
                        {
                            if (workerList[j].id > workerList[j + 1].id)
                            {
                                swap(workerList[j], workerList[j + 1]);
                            }
                        }
                    }
                    printAllWorker(workerList, counter); 
                }
                break;
            default:
                cout << "Invalid option! Choose from 1-3 " << endl;
                break;
            }
        }
        break;
        case 3:
        {

            cout << "=============<<UPDATE>>==========" << endl;
            int index = searchWorkerByID(workerList, counter);
            if (index == -1)
            {
                cout << " ❌ Cannot update, record not found!" << endl;
            }
            else
            {
                // update the worker data
                // string newName; float newSalary;
                Worker existingWorker = workerList[index];
                existingWorker.update();            // update their name and salary
                workerList[index] = existingWorker; // update the list
                cout << " ✅ Successfully updated the worker info" << endl;
            }
        }
        break;
        case 4:
        {

            cout << "=============<<Delete worker >>==========" << endl;
            // 1. search first
            int index = searchWorkerByID(workerList, counter);
            if (index == -1)
            {
                cout << " ❌ Can't delete! Result not found!" << endl;
            }
            else
            {
                int size = counter;
                for (int i = index; i < size - 1; i++)
                {
                    workerList[i] = workerList[i + 1];
                }
                counter--;
                cout << " ✅ Delete successfully! " << endl;
            }
        }
        break;
        case 5:
        {

            // Search the worker data
            cout << "===========<<Search Worker>>==============" << endl;
            int index = searchWorkerByID(workerList, counter);
            if (index == -1)
            {
                cout << " ❌ Result not found!! " << endl;
            }
            else
            {
                cout << " ✅ Record found !! " << endl;
                workerList[index].output();
            }
        }
        break;
        case 6:
            cout << "Exit from the program!" << endl;
            break;
        default:
            cout << " ❌ Invalid choice ! Try again from 1-6" << endl;
            break;
        }

        waitForKeyPress();
    } while (option != 6);
    return 0;
}