// Hospital Patient Management System
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Structure for Patient
struct Patient
{
    int id;
    string name;
    int age;
    string gender;
    string disease;
    string phone;
};

// Structure for Linked List Node
struct PatientNode
{
    Patient data;
    PatientNode* next;
};

// Structure for Doctor
struct Doctor
{
    int id;
    string name;
    string specialization;
};

// Structure for Appointment
struct Appointment
{
    int patientID;
    string patientName;
    string doctorName;
    string date;
};

// Structure for Emergency Patient
struct Emergency
{
    int patientID;
    string name;
    int priority;
};

// Global variables
PatientNode* head = NULL;

Doctor doctors[100];
int doctorCount = 0;

Appointment appointments[100];
int front = -1, rear = -1;

Emergency emergencyPatients[100];
int emergencyCount = 0;

// Search Patient
PatientNode* searchByID(int id)
{
    PatientNode* temp = head;

    while (temp != NULL)
    {
        if (temp->data.id == id)
            return temp;

        temp = temp->next;
    }

    return NULL;
}

// Register Patient
void registerPatient()
{
    Patient p;

    cout << "\nEnter Patient ID: ";
    cin >> p.id;

    if (searchByID(p.id) != NULL)
    {
        cout << "Patient ID already exists!\n";
        return;
    }

    cin.ignore(1000, '\n');

    cout << "Enter Name: ";
    getline(cin, p.name);

    cout << "Enter Age: ";
    cin >> p.age;

    cin.ignore(1000, '\n');

    cout << "Enter Gender: ";
    getline(cin, p.gender);

    cout << "Enter Disease: ";
    getline(cin, p.disease);

    cout << "Enter Phone: ";
    getline(cin, p.phone);

    PatientNode* newNode = new PatientNode;

    newNode->data = p;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        PatientNode* temp = head;

        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newNode;
    }

    cout << "\nPatient Registered Successfully!\n";
}

// Display Patients
void displayPatients()
{
    if (head == NULL)
    {
        cout << "\nNo Patient Records Found!\n";
        return;
    }

    PatientNode* temp = head;

    while (temp != NULL)
    {
        cout << "\nPatient ID: " << temp->data.id;
        cout << "\nName: " << temp->data.name;
        cout << "\nAge: " << temp->data.age;
        cout << "\nGender: " << temp->data.gender;
        cout << "\nDisease: " << temp->data.disease;
        cout << "\nPhone: " << temp->data.phone;
        cout << "\n--------------------------\n";

        temp = temp->next;
    }
}

// Search Patient
void searchPatient()
{
    int id;

    cout << "\nEnter Patient ID: ";
    cin >> id;

    PatientNode* temp = searchByID(id);

    if (temp == NULL)
    {
        cout << "Patient Not Found!\n";
        return;
    }

    cout << "\nPatient Found!";
    cout << "\nName: " << temp->data.name;
    cout << "\nDisease: " << temp->data.disease;
    cout << "\nPhone: " << temp->data.phone << endl;
}

// Update Patient
void updatePatient()
{
    int id;

    cout << "\nEnter Patient ID: ";
    cin >> id;

    PatientNode* temp = searchByID(id);

    if (temp == NULL)
    {
        cout << "Patient Not Found!\n";
        return;
    }

    cin.ignore(1000, '\n');

    cout << "Enter New Disease: ";
    getline(cin, temp->data.disease);

    cout << "Enter New Phone: ";
    getline(cin, temp->data.phone);

    cout << "Patient Updated Successfully!\n";
}

// Delete Patient
void deletePatient()
{
    int id;

    cout << "\nEnter Patient ID: ";
    cin >> id;

    PatientNode* temp = head;
    PatientNode* previous = NULL;

    while (temp != NULL && temp->data.id != id)
    {
        previous = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        cout << "Patient Not Found!\n";
        return;
    }

    if (previous == NULL)
        head = temp->next;
    else
        previous->next = temp->next;

    delete temp;

    cout << "Patient Deleted Successfully!\n";
}

// Add Doctor
void addDoctor()
{
    if (doctorCount == 100)
    {
        cout << "Doctor Storage Full!\n";
        return;
    }

    cout << "\nEnter Doctor ID: ";
    cin >> doctors[doctorCount].id;

    cin.ignore(1000, '\n');

    cout << "Enter Doctor Name: ";
    getline(cin, doctors[doctorCount].name);

    cout << "Enter Specialization: ";
    getline(cin, doctors[doctorCount].specialization);

    doctorCount++;

    cout << "Doctor Added Successfully!\n";
}

// Display Doctors
void displayDoctors()
{
    if (doctorCount == 0)
    {
        cout << "No Doctors Available!\n";
        return;
    }

    for (int i = 0; i < doctorCount; i++)
    {
        cout << "\nDoctor ID: " << doctors[i].id;
        cout << "\nName: " << doctors[i].name;
        cout << "\nSpecialization: "
             << doctors[i].specialization;
        cout << "\n--------------------------\n";
    }
}

// Book Appointment
void bookAppointment()
{
    int id;

    cout << "\nEnter Patient ID: ";
    cin >> id;

    PatientNode* p = searchByID(id);

    if (p == NULL)
    {
        cout << "Patient Not Registered!\n";
        return;
    }

    if (doctorCount == 0)
    {
        cout << "No Doctors Available!\n";
        return;
    }

    if ((rear + 1) % 100 == front)
    {
        cout << "Appointment Queue Full!\n";
        return;
    }

    displayDoctors();

    int doctorID;
    cout << "\nEnter Doctor ID: ";
    cin >> doctorID;

    int position = -1;

    for (int i = 0; i < doctorCount; i++)
    {
        if (doctors[i].id == doctorID)
        {
            position = i;
            break;
        }
    }

    if (position == -1)
    {
        cout << "Invalid Doctor ID!\n";
        return;
    }

    Appointment a;

    a.patientID = id;
    a.patientName = p->data.name;
    a.doctorName = doctors[position].name;

    cin.ignore(1000, '\n');

    cout << "Enter Appointment Date: ";
    getline(cin, a.date);

    if (front == -1)
        front = 0;

    rear = (rear + 1) % 100;

    appointments[rear] = a;

    cout << "Appointment Booked Successfully!\n";
}

// Display Appointments
void displayAppointments()
{
    if (front == -1)
    {
        cout << "No Appointments Available!\n";
        return;
    }

    int i = front;

    while (true)
    {
        cout << "\nPatient: "
             << appointments[i].patientName;

        cout << "\nDoctor: "
             << appointments[i].doctorName;

        cout << "\nDate: "
             << appointments[i].date;

        cout << "\n--------------------------\n";

        if (i == rear)
            break;

        i = (i + 1) % 100;
    }
}

// Process Appointment
void processAppointment()
{
    if (front == -1)
    {
        cout << "Appointment Queue Empty!\n";
        return;
    }

    cout << "\nProcessing Appointment...";
    cout << "\nPatient: "
         << appointments[front].patientName;

    if (front == rear)
        front = rear = -1;
    else
        front = (front + 1) % 100;

    cout << "\nAppointment Processed!\n";
}

// Add Emergency Patient
void addEmergencyPatient()
{
    if (emergencyCount == 100)
    {
        cout << "Emergency Queue Full!\n";
        return;
    }

    int id;

    cout << "\nEnter Patient ID: ";
    cin >> id;

    PatientNode* p = searchByID(id);

    if (p == NULL)
    {
        cout << "Patient Not Found!\n";
        return;
    }

    Emergency e;

    e.patientID = id;
    e.name = p->data.name;

    cout << "Enter Priority (1-5): ";
    cin >> e.priority;

    if (e.priority < 1 || e.priority > 5)
    {
        cout << "Invalid Priority!\n";
        return;
    }

    emergencyPatients[emergencyCount] = e;
    emergencyCount++;

    cout << "Emergency Patient Added!\n";
}

// Process Emergency Patient
void processEmergencyPatient()
{
    if (emergencyCount == 0)
    {
        cout << "No Emergency Patients!\n";
        return;
    }

    int highest = 0;

    for (int i = 1; i < emergencyCount; i++)
    {
        if (emergencyPatients[i].priority <
            emergencyPatients[highest].priority)
        {
            highest = i;
        }
    }

    cout << "\nEmergency Patient: "
         << emergencyPatients[highest].name;

    cout << "\nPriority: "
         << emergencyPatients[highest].priority;

    for (int i = highest; i < emergencyCount - 1; i++)
    {
        emergencyPatients[i] = emergencyPatients[i + 1];
    }

    emergencyCount--;

    cout << "\nEmergency Case Processed!\n";
}

// Sort Patients Using Bubble Sort
void sortPatients()
{
    if (head == NULL)
    {
        cout << "No Patient Records!\n";
        return;
    }

    for (PatientNode* i = head; i != NULL; i = i->next)
    {
        for (PatientNode* j = i->next; j != NULL; j = j->next)
        {
            if (i->data.id > j->data.id)
            {
                Patient temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }

    cout << "Patients Sorted By ID!\n";
}

// Save Patient Records
void saveRecords()
{
    ofstream file("patients.txt");

    if (!file)
    {
        cout << "File Opening Failed!\n";
        return;
    }

    PatientNode* temp = head;

    while (temp != NULL)
    {
        file << temp->data.id << '\n';
        file << temp->data.name << '\n';
        file << temp->data.age << '\n';
        file << temp->data.gender << '\n';
        file << temp->data.disease << '\n';
        file << temp->data.phone << '\n';

        temp = temp->next;
    }

    file.close();

    cout << "Records Saved Successfully!\n";
}

// Load Patient Records
void loadRecords()
{
    ifstream file("patients.txt");

    if (!file)
        return;

    Patient p;

    while (file >> p.id)
    {
        file.ignore(1000, '\n');

        getline(file, p.name);
        file >> p.age;

        file.ignore(1000, '\n');

        getline(file, p.gender);
        getline(file, p.disease);
        getline(file, p.phone);

        PatientNode* newNode = new PatientNode;

        newNode->data = p;
        newNode->next = NULL;

        if (head == NULL)
            head = newNode;
        else
        {
            PatientNode* temp = head;

            while (temp->next != NULL)
                temp = temp->next;

            temp->next = newNode;
        }
    }

    file.close();
}

// Free allocated memory
void clearMemory()
{
    while (head != NULL)
    {
        PatientNode* temp = head;
        head = head->next;
        delete temp;
    }
}

// Main Function
int main()
{
    int choice;

    loadRecords();

    do
    {
        cout << "\n====================================";
        cout << "\n HOSPITAL PATIENT MANAGEMENT SYSTEM";
        cout << "\n====================================";

        cout << "\n1. Register Patient";
        cout << "\n2. Display Patients";
        cout << "\n3. Search Patient";
        cout << "\n4. Update Patient";
        cout << "\n5. Delete Patient";
        cout << "\n6. Add Doctor";
        cout << "\n7. Display Doctors";
        cout << "\n8. Book Appointment";
        cout << "\n9. Display Appointments";
        cout << "\n10. Process Appointment";
        cout << "\n11. Add Emergency Patient";
        cout << "\n12. Process Emergency Patient";
        cout << "\n13. Sort Patients";
        cout << "\n14. Save Records";
        cout << "\n15. Exit";

        cout << "\n\nEnter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1: registerPatient(); break;
            case 2: displayPatients(); break;
            case 3: searchPatient(); break;
            case 4: updatePatient(); break;
            case 5: deletePatient(); break;
            case 6: addDoctor(); break;
            case 7: displayDoctors(); break;
            case 8: bookAppointment(); break;
            case 9: displayAppointments(); break;
            case 10: processAppointment(); break;
            case 11: addEmergencyPatient(); break;
            case 12: processEmergencyPatient(); break;
            case 13: sortPatients(); break;
            case 14: saveRecords(); break;

            case 15:
                saveRecords();
                clearMemory();
                cout << "\nThank You!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while (choice != 15);

    return 0;
}
/*output:
====================================
 HOSPITAL PATIENT MANAGEMENT SYSTEM
====================================
1. Register Patient
2. Display Patients
3. Search Patient
4. Update Patient
5. Delete Patient
6. Add Doctor
7. Display Doctors
8. Book Appointment
9. Display Appointments
10. Process Appointment
11. Add Emergency Patient
12. Process Emergency Patient
13. Sort Patients
14. Save Records
15. Exit

Enter Your Choice: */