#include <iostream>
#include <string>
#include<fstream>
using namespace std;

int opt;    //Global variable
int appDate, appTime, appID, docID;
string patientName, patientAge, patientContactNumber, docFirstName, docLastName;

int docContact;
string fName, lName, docCity, docSpec;


// global void functions
void mainTitle();
void mainMenu();
void adminLogin();
void changeDocDetails();
void exit1();
void viewDocInfo();
void aboutUs();

void manageAppointment();
void createAppointment();
void editAppointment();
void deleteAppointment();
void viewAppointment();

void addNewDoc();
void changeDocInfo();
void deleteDocInfo();
void viewDocInfo();
void specD();



// heading function
void mainTitle() {
    system("cls");      // clearing console
    cout << "\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
    cout << "---------> ";
    printf("\t\x1B[34mSpire Health Care Hospital\033[0m\t");
    cout << "<--------- " << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n\n" << endl;
}

// login ui
void adminLogin() {
    int password;
    string username;
    mainTitle();
    cout << "\t\t Username: ";
    cin >> username;
    cout << "\t\t Password: ";
    cin >> password;

    if (username == "admin" && password == 1234)
    {
        mainMenu();
    }
    else if (username == "user" && password == 0000)
    {
        mainMenu();
    }
    else {
        cout << "\t\t - - - - - - - \n";
        cout << "\t\t   Try Again \n";
        cout << "\t\t - - - - - - - \n";
    loop:   //goto function
        cout << "Select an Option\n" << endl;
        cout << "\t1. Retry\n"
            << "\t2. Exit\n" << endl;
        cout << "Option: ";
        cin >> opt;
        if (opt == 1) {
            system("cls");
            adminLogin();
        }
        else if (opt == 2) {
            exit1();
        }
        else {
            cout << "\t\t - - - - - - - \n";
            cout << "\t\t   Try Again \n";
            cout << "\t\t - - - - - - - \n";
            goto loop;
        }


    }

}

// main menu ui
void mainMenu() {
loop1:
    system("cls");
    mainTitle();
    cout << "- - - - - - -  <<";  printf("\t\x1B[36mMain Menu\033[0m\t"); cout << ">>  - - - - - - -" << endl;

    cout << "\n\t\t1. Doctor Management\n"
        << "\t\t2. Appointment Management\n"
        << "\t\t3. About Us\n"
        << "\t\t4. Logout\n"
        << "\t\t5. Exit\n"
        << "\t\tOption : ";
    cin >> opt;

    switch (opt)
    {
    case 1:
        changeDocDetails();
        break;
    case 2:
        manageAppointment();
        break;
    case 3:
        aboutUs();
        break;
    case 4:
        adminLogin();
        break;
    case 5:
        cout << "Are you sure ?\n"
            << "1. Yes\n"
            << "2. No\n" << endl;
        cout << "Option: ";
        cin >> opt;
        if (opt == 1) {
            exit1();
        }
        else if (opt == 2) {
            goto loop1;
        }
        break;

    default:
        cout << "\t\t - - - - - - - \n";
        cout << "\t\t   Try Again \n";
        cout << "\t\t - - - - - - - \n";
        goto loop1;
        break;

    }
}

// doctor management ui 
void changeDocDetails() {
    system("cls");
docDetailsLoop:
    mainTitle();
    cout << "------------ <<";  printf("\t\t\x1B[36mDoctor Management\033[0m\t"); cout << ">> -------" << endl;
    cout << "\t\t1. Add New doctor\n"
        << "\t\t2. Edit doctor \n"
        << "\t\t3. Delete doctor \n"
        << "\t\t4. View doctor \n"
        << "\t\t5. Return to mainmenu \n" << endl
        << "\t\t6. Exit\n";
    cout << "\t\tOption : ";
    cin >> opt;
    switch (opt)
    {
    case 1:
        addNewDoc();
        break;
    case 2:
        changeDocInfo();
        break;
    case 3:
        deleteDocInfo();
        break;
    case 4:
        viewDocInfo();
        break;

    case 5:
        mainMenu();
        break;

    case 6:
        exit(0);
        break;
    default:
        cout << "\t\t - - - - - - - \n";
        cout << "\t\t   Try Again \n";
        cout << "\t\t - - - - - - - \n";
        goto docDetailsLoop;
        break;
    }
}

// appointment management ui
void manageAppointment() {
apploop:
    system("cls");
    mainTitle();
    cout << "-------------- <<";  printf("\t\x1B[32mAppointment Management\033[0m\t"); cout << ">> --------------" << endl;
    cout << "\t\t1. Create Appointment\n"
        << "\t\t2. Edit Appointment\n"
        << "\t\t3. Delete Appointment\n"
        << "\t\t4. View All Appointments\n"
        << "\t\t5. Return to Main Menu\n"
        << "\t\t6.Exit \n"
        << "\t\t\nOption: ";
    cin >> opt;
    switch (opt)
    {
    case 1:
        createAppointment();
        break;
    case 2:
        editAppointment();
        break;
    case 3:
        deleteAppointment();
        break;
    case 4:
        viewAppointment();
        break;
    case 5:
        mainMenu();
        break;
    case 6:
        exit1();
        break;

    default:
        cout << "\t\t - - - - - - - \n";
        cout << "\t\t   Try Again \n";
        cout << "\t\t - - - - - - - \n";
        goto apploop;
        break;
    }
}

// leaving message 
void exit1() {
    system("cls");
    printf("\t\t\x1B[31m- - - - - - - - - \033[0m\t\n");
    printf("\t\t\x1B[31m    Thank You !  \033[0m\t\n");
    printf("\t\t\x1B[31m- - - - - - - - - \033[0m\t\n");
    exit(0);
}

// about us ui
void aboutUs() {  // about us
    system("cls");
    cout << "-----------------------------------------------------------------------------------\n"
        << "- - - - - - - - - - - - - - - - - - >  ABOUT US ! < - - - - - - - - - - - - - - - -\n\n"
        << "                                Spire Healthcare Hospital                          \n"
        << "Spire Healthcare Hospital is a leading healthcare facility in London since 1920 ,\n "
        << "providing exceptional medical care to patients with state - of - the - art facilities\n"
        << "                    Web              : www.spirehospitals.uk                    \n"
        << "                    Email            : contact.email@spirehospitals.com         \n"
        << "                    Hotline          : 1919                                     \n\n"
        << "              Copyright @ Spire Healthcare Hospital 2023. All rights reserved.  \n"
        << " - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n";
Option:
    cout << "\n\n1. Return to Main Menu\n "
        << "2. Exit\n"
        << "Option : ";


    cin >> opt;
    switch (opt)
    {
    case 1:
        mainMenu();
        break;
    case 2:
        exit1();
        break;
    default:
        goto Option;
        break;
    }
}

// adding new doctors to system
void addNewDoc() {
addAgainLoop12:     //loop
    system("cls");  // clear the console
    mainTitle();
    cout << "-------------- <<";  printf("\t\x1B[36mAdd New Doctor\033[0m\t"); cout << ">> --------------" << endl;
    cout << "\t\tEnter the Doctor ID : ";
    cin >> docID;
    cout << "\t\tEnter the first name : ";
    cin >> fName;
    cout << "\t\tEnter the last name : ";
    cin >> lName;
    cout << "\t\tEnter the doctor's city : ";
    cin >> docCity;
    specD();        // calling global void
    cout << "\n\t\tEnter the doctor's contact number : ";
    cin >> docContact;

    fstream doctorDB;
    doctorDB.open("Doctor Details.txt", ios::app);      // Create and open a text file   
    doctorDB.seekp(0, ios::end);
    doctorDB << docID << endl
        << fName << endl
        << lName << endl
        << docCity << endl
        << docSpec << endl
        << docContact << endl;
    doctorDB.close();  // closing txt file

    // output
    system("cls");
    cout << "\t\t - - - - - - - - - - - - - -" << endl;
    cout << "\t\t   Doctor Profile Created ! " << endl;
    cout << "\t\t - - - - - - - - - - - - - -\n" << endl;

afterloop:
    cout << "\t\t1. Create another doctor profile\n"
        << "\t\t2. Back\n"
        << "\t\t3. Return to Main Menu\n"
        << "\t\t4. Exit\n"
        << "\nOption: ";
    cin >> opt;
    if (opt == 1) {
        goto addAgainLoop12;      // back to top again
    }
    else if (opt == 2) {
        changeDocDetails();
    }
    else if (opt == 3) {
        mainMenu();
    }
    else if (opt == 4) {
        exit1();
    }
    else {
        cout << "\t\t - - - - - - - \n";
        cout << "\t\t   Try Again \n";
        cout << "\t\t - - - - - - - \n";
        goto afterloop;
    }
}


// doctor specialty option
void specD() {
specloop:       //goto function
    cout << "\n\t\t1.CARCFIOLOGIST\n"
        << "\t\t2.CARDIOLOGIST\n"
        << "\t\t3.DENTIST \n "
        << "\t\t4.ENDOCRINOLOGIST \n "
        << "\t\t5.ENT_SURGEON\n "
        << "\t\t6.EYE_SURGEON \n"
        << "\t\t7.GYNAECOLOGIST \n "
        << "\t\t8.PAEDIATRICIAN  \n"
        << "\n\t\tChoose Doctor Specialty: ";
    cin >> opt;
    switch (opt) {

    case 1: {
        docSpec = "CARCFIOLOGIST";
        break;
    }
    case 2: {
        docSpec = "CARDIOLOGIST";
        break;
    }
    case 3: {
        docSpec = "DENTIST";
        break;
    }
    case 4: {
        docSpec = "ENDOCRINOLOGIST";
        break;
    }
    case 5: {
        docSpec = "ENT_SURGEON";
        break;
    }
    case 6: {
        docSpec = "EYE_SURGEON ";
        break;
    }
    case 7: {
        docSpec = "GYNAECOLOGIST ";
        break;
    }
    case 8: {
        docSpec = "PAEDIATRICIAN  ";
        break;
    }

    default: {
        cout << "\t\t - - - - - - - \n";
        cout << "\t\t   Try Again \n";
        cout << "\t\t - - - - - - - \n";
        goto specloop;   //goto top of the loop
    }
    }
}
// change current doctor details
void changeDocInfo() {
    string dId;
loop:     //goto loop
    system("cls");
    cout << "-------------- <<";  printf("\t\x1B[36mEdit Doctor Details\033[0m\t"); cout << ">> --------------" << endl;
    cout << "\n\n\t\tEnter the Doctor ID : ";
    cin >> dId;
    fstream doctorDB("Doctor Details.txt");
    doctorDB.seekg(0);

    int contact, counter = 0;
    string id, firstName, lastName, city, specialty;
    while (doctorDB >> id >> firstName >> lastName >> city >> specialty >> contact)
    {
        if (id == dId) {
            cout << "\t\t1. ID :" << id << endl
                << "\t\t2. First Name : " << firstName << endl
                << "\t\t3. Last Name : " << lastName << endl
                << "\t\t4. City : " << city << endl
                << "\t\t5. Specialty : " << specialty << endl
                << "\t\t6. Contact Number : " << contact << endl;
            counter++;
        }
    }
    doctorDB.close();
    if (counter == 0) {
        cout << "\t\t - - - - - - - \n";
        cout << "\t\t   Not Found \n";
        cout << "\t\t - - - - - - - \n";
    afterloop:
        cout << "1. Re-Enter the Doctor ID to edit\n"
            << "2. Back\n"
            << "3. Return to Main Menu\n"
            << "4. Exit\n"
            << "\nOption: ";
        cin >> opt;
        if (opt == 1) {
            goto loop;
        }
        else if (opt == 2) {
            changeDocDetails();
        }
        else if (opt == 3) {
            mainMenu();
        }
        else if (opt == 4) {
            exit1();
        }
        else {
            cout << "\t\t - - - - - - - \n";
            cout << "\t\t   Try Again \n";
            cout << "\t\t - - - - - - - \n";
            goto afterloop;
        }
    }
    //edited data transfer
    fstream docDB("Doctor Details.txt");
    docDB.seekg(0, ios::beg);
    docDB.seekg(0);
    string Line;
    ofstream doctorDBTemp;
    doctorDBTemp.open("Doctemp.txt");   // Create and open a temporary text file
    doctorDBTemp.seekp(0);
    int tempContact;        //temporary variables
    string tempFName, tempLName, tcity, tempspecialty;
    docDB.seekg(0);
    docDB.seekg(0, ios::cur);
    while (docDB >> Line >> tempFName >> tempLName >> tcity >> tempspecialty >> tempContact)
    {
        if (Line != id) {
            doctorDBTemp << Line << endl << tempFName << endl << tempLName << endl << tcity << endl << tempspecialty << endl << tempContact << endl;
        }
    }
    docDB.close();
    doctorDBTemp.close();
    remove("Doctor Details.txt");       // remove original text file
    int changetxt;
    char doctemp[] = "Doctemp.txt";
    char newfile[] = "Doctor Details.txt";
    changetxt = rename(doctemp, newfile);   //rename temporary file as original

    int docEdit;        // variable like "opt"
    cout << "Select a detail to edit: ";
    cin >> docEdit;
    switch (docEdit) {
    case 1: {
        cout << "Change Doctor ID to: ";
        cin >> id;
        break;
    }
    case 2: {
        cout << "Change First Name to: ";
        cin >> firstName;
        break;
    }
    case 3: {
        cout << "Change Last Name to: ";
        cin >> lastName;
        break;
    }
    case 4: {
        cout << "Change City to: ";
        cin >> city;
        break;
    }
    case 5: {
        specD();
        cin >> specialty;
        break;
    }
    case 6: {
        cout << "Change Contact Number to: ";
        cin >> contact;
        break;
    }
    default: {
        cout << "\t\t - - - - - - - \n";
        cout << "\t\t   Try Again \n";
        cout << "\t\t - - - - - - - \n";
        exit(0);
    }
    }
    system("cls");
    cout << "\t\t - - - - - - - - - - - - - -" << endl;
    cout << "\t\t   Doctor Profile Updated ! " << endl;
    cout << "\t\t - - - - - - - - - - - - - -\n" << endl;
    cout << " ID: " << id << endl
        << " First Name: " << firstName << endl
        << " Last Name: " << lastName << endl
        << " City: " << city << endl
        << " Specialty: " << specialty << endl
        << " Contact Number: " << contact << endl;

    //updated txt
    fstream overwriteTxt;
    overwriteTxt.open("Doctor Details.txt", ios::app);
    overwriteTxt.seekp(0, ios::end);
    overwriteTxt << id << endl << firstName << endl << lastName << endl << city << endl << city << endl << specialty << endl << contact << endl;
    overwriteTxt.close();

afterloop1:
    cout << "1. Edit another Doctor Profile\n"
        << "2. Back\n"
        << "3. Return to Main Menu\n"
        << "4. Exit\n"
        << "\nOption: ";
    cin >> opt;
    if (opt == 1) {
        goto loop;
    }
    else if (opt == 2) {
        changeDocDetails();
    }
    else if (opt == 3) {
        mainMenu();
    }
    else if (opt == 4) {
        exit1();
    }
    else {
        cout << "\t\t - - - - - - - \n";
        cout << "\t\t   Try Again \n";
        cout << "\t\t - - - - - - - \n";
        goto afterloop1;
    }
}

// delete current doctor details
void deleteDocInfo() {
    string input;
    system("cls");
    cout << "-------------- <<";  printf("\t\x1B[36mDelete Doctor Details\033[0m\t"); cout << ">> --------------" << endl;
    cout << "\n\t\tEnter the Doctor ID : " << endl;
    cin >> input;
    fstream DocDB("Doctor Details.txt");
    DocDB.seekg(0);
    int count = 0, contact;
    string docid, firstName, lastName, city, specialization;
    while (DocDB >> docid >> firstName >> lastName >> city >> specialization >> contact) {
        if (docid == input) {
            cout << "\n1. ID: " << docid << endl
                << "2. First Name: " << firstName << endl
                << "3. Last Name: " << lastName << endl
                << "4. City: " << city << endl
                << "5. Specialization: " << specialization << endl
                << "6. Contact Number: " << contact << endl;
            count++;
        }
    }
    DocDB.close();
    if (count == 0) {
        cout << "\t\t - - - - - - - \n";
        cout << "\t\t   Not Found \n";
        cout << "\t\t - - - - - - - \n";
    afterloop: //goto function
        cout << "1. Enter Doctor ID again  \n"
            << "2. Back\n"
            << "3. Return to Main Menu\n"
            << "4. Exit\n"
            << "\nOption: ";
        cin >> opt;
        if (opt == 1) {
            deleteDocInfo();
        }
        else if (opt == 2) {
            changeDocDetails();
        }
        else if (opt == 3) {
            mainMenu();
        }
        else if (opt == 4) {
            exit1();
        }
        else {
            cout << "\t\t - - - - - - - \n";
            cout << "\t\t   Try Again \n";
            cout << "\t\t - - - - - - - \n";
            goto afterloop; //goto function 
        }
    }
confirmDeleteLoop: //goto function
    cout << "Confirm delete profile : ( Yes = 1 / No = 0 )";
    cin >> opt;
    if (opt == 1) {
        fstream docDB("Doctor Details.txt");
        docDB.seekg(0, ios::beg);
        docDB.seekg(0);
        string Line;
        ofstream docDBTemp;
        docDBTemp.open("Doctemp.txt");
        docDBTemp.seekp(0);
        int skip = 0, tempContact;
        string tempFName, tempLName, tempCity, tempSpecialty;
        docDB.seekg(0);
        docDB.seekg(0, ios::cur);
        while (docDB >> Line >> tempFName >> tempLName >> tempCity >> tempSpecialty >> tempContact) {
            if (Line != input) {
                docDBTemp << Line << endl << tempFName << endl << tempLName << endl << tempCity << endl << tempSpecialty << endl << tempContact << endl;
            }
        }
        //delete txt file 
        docDB.close();
        docDBTemp.close();
        remove("Doctor Details.txt");
        int changetxt;
        char doctemp[] = "Doctemp.txt";
        char newfile[] = "Doctor Details.txt";
        changetxt = rename(doctemp, newfile);  // rename temp file as original
        system("cls");
        cout << "\n --------------------------------------" << endl;
        cout << " Doctor Profile Deleted ! " << endl;
        cout << " --------------------------------------\n" << endl;
        goto afterloop; //goto function 


    }
    else if (opt == 0) {
        goto afterloop; //goto function 
    }
    else {
        cout << "\t\t - - - - - - - \n";
        cout << "\t\t   Try Again \n";
        cout << "\t\t - - - - - - - \n";
        goto confirmDeleteLoop; //goto function 
    }

}

// view all doctors
void viewDocInfo() {
    system("cls");
    fstream docDB("Doctor Details.txt");
    docDB.seekg(0);
    cout << "-------------- <<";  printf("\t\x1B[36mView Doctor Details\033[0m\t"); cout << ">> --------------" << endl;
    cout << "Doctor IDs and Names\n" << endl;
    int count = 0, contact;
    string id, firstName, LastName, city, specialization;
    while (docDB >> id >> firstName >> LastName >> city >> specialization >> contact) {
        count++;
        cout << "ID : " << id << endl
            << "Name : " << firstName << " " << LastName << endl;
    }
    if (count == 0)
    {
        cout << "\n ----------------------------" << endl;
        cout << "   |     No Doctor Found!    |" << endl;
        cout << " ----------------------------\n" << endl;
    repeat: //goto function
        cout << "\n1. Enter Doctor ID\n"
            << "2. Back\n"
            << "3. Return to Main Menu\n"
            << "4. Exit\n"
            << "\nOption : ";
        cin >> opt;
        if (opt == 1) {
            viewDocInfo();
        }
        else if (opt == 2) {
            changeDocDetails();
        }
        else if (opt == 3) {
            mainMenu();
        }
        else if (opt == 4) {
            exit1();
        }
        else {
            cout << "\t\t - - - - - - - \n";
            cout << "\t\t   Try Again \n";
            cout << "\t\t - - - - - - - \n";
            goto repeat;
        }

    }
    docDB.close();

    string input;
    cout << "\nEnter the Doctor ID: ";
    cin >> input;
    ifstream docDB1;
    docDB1.open("Doctor Details.txt", ios::out | ios::in);
    docDB1.seekg(0);
    while (docDB1 >> id >> firstName >> LastName >> city >> specialization >> contact) {
        if (id == input) {
            cout << "1. ID : " << id << endl
                << "2. First Name : " << firstName << endl
                << "3. Last Name : " << LastName << endl
                << "5. City : " << city << endl
                << "6. Specialization : " << specialization << endl
                << "7. Contact Number : " << contact << endl << endl;
            count++;
        }
    }
    docDB1.close();
    if (count == 0) {
        cout << "\n ----------------------------" << endl;
        cout << "   |     No Matches Found!    |" << endl;
        cout << " ----------------------------\n" << endl;
    }
repeat1: //goto function
    cout << "1. Enter Doctor ID Again\n"
        << "2. Back\n"
        << "3. Return to Main Menu\n"
        << "4. Exit\n"
        << "\nOption : ";
    cin >> opt;
    if (opt == 1) {
        viewDocInfo();
    }
    else if (opt == 2) {
        changeDocDetails();
    }
    else if (opt == 3) {
        mainMenu();
    }
    else if (opt == 4) {
        exit1();
    }
    else {
        cout << "\t\t - - - - - - - \n";
        cout << "\t\t   Try Again \n";
        cout << "\t\t - - - - - - - \n";
        goto repeat1;
    }
}


// make new appointments
void createAppointment() {
afterloop:
    system("cls");
    cout << "-------------- <<";  printf("\t\x1B[32mCreate Appointment\033[0m\t"); cout << ">> --------------" << endl;
    cout << "Enter the Appointment ID : ";
    cin >> appID;
    cout << "\nSet Appointment Date (DD_MM_YYYY) : ";
    cin >> appDate;
    cout << "Set Appointment Time(24Hr) (HH_MM) : ";
    cin >> appTime;
    cout << "\n\nPatient : \n\n";
    cout << "Enter the Name (Use _ instead space) : ";
    cin >> patientName;
    cout << "Enter the Age : ";
    cin >> patientAge;
    cout << "Enter the Contact Number : ";
    cin >> patientContactNumber;
    cout << "\n\nDoctor : ";
    cout << "Enter the Doctor ID : ";
    cin >> docID;
    cout << "Enter the Doctor First Name : ";
    cin >> docFirstName;
    cout << "Enter the Doctor Last Name : ";
    cin >> docLastName;



    // adding to txt
    fstream setApp;
    setApp.open("Appointments.txt", ios::app);
    setApp.seekp(0, ios::end);
    setApp << appID << endl
        << appDate << endl
        << appTime << endl
        << patientName << endl
        << patientAge << endl
        << patientContactNumber << endl
        << docID << endl
        << docFirstName << endl
        << docLastName << endl;
    setApp.close();
    //copmlete adding to txt
    system("cls");
    cout << "\n ---------------------------------" << endl;
    cout << " Appointment Created ! " << endl;
    cout << " ---------------------------------\n" << endl;
againloop:
    cout << "1. Create another appointment\n"
        << "2. Back\n"
        << "3. Return to Main Menu\n"
        << "4. Exit\n"
        << "\nOption: ";
    cin >> opt;
    if (opt == 1) {
        goto afterloop;
    }
    else if (opt == 2) {
        manageAppointment();
    }
    else if (opt == 3) {
        mainMenu();
    }
    else if (opt == 4) {
        exit1();
    }
    else {
        cout << "\t\t - - - - - - - \n";
        cout << "\t\t   Try Again \n";
        cout << "\t\t - - - - - - - \n";
        goto againloop;
    }
}

// edit exist appointments
void editAppointment() {
    string input;
againloop:
    system("cls");
    cout << "-------------- <<";  printf("\t\x1B[32mEdit Appointment\033[0m\t"); cout << ">> --------------" << endl;
    cout << "\n Enter Appointment ID : ";
    cin >> input;
    fstream editapp("Appointments.txt");
    editapp.seekg(0);

    int pAge, pContact, count = 0;
    char aDate, aTime;
    string aId, pName, aDocId, aDocFirstName, aDocLastName;
    while (editapp >> aId >> aDate >> aTime >> pName >> pAge >> pContact >> aDocId >> aDocFirstName >> aDocLastName) {
        if (aId == input) {
            cout << "1. Appointment ID : " << aId << endl
                << "2. Appointment  Date : " << aDate << endl
                << "3. Appointment  Time : " << aTime << endl
                << "4. Patient  Name : " << pName << endl
                << "5. Patient Age : " << pAge << endl
                << "6. Patient Contact Number : " << pContact << endl
                << "7. Doctor ID : " << aDocId << endl
                << "8. Doctor First Name : " << aDocFirstName << endl
                << "9. Doctor Last Name : " << aDocLastName << endl;
            count++;
        }
    }
    editapp.close();
    if (count == 0) {
        cout << "\n No Matches Found!\n" << endl;
    afterloop:
        cout << "1. Re-Enter Appointment ID \n"
            << "2. Back\n"
            << "3. Return to Main Menu\n"
            << "4. Exit\n"
            << "\nOption: ";
        cin >> opt;
        if (opt == 1) {
            goto againloop;
        }
        else if (opt == 2) {
            editAppointment();
        }
        else if (opt == 3) {
            mainMenu();
        }
        else if (opt == 4) {
            exit1();
        }
        else {
            cout << "\t\t - - - - - - - \n";
            cout << "\t\t   Try Again \n";
            cout << "\t\t - - - - - - - \n";
            goto afterloop;
        }
    }
    //transfering edited data
    fstream appEdit("Appointments.txt");
    appEdit.seekg(0, ios::beg);
    appEdit.seekg(0);
    string appLine;
    ofstream appTemp;
    appTemp.open("AppointmentTemp.txt");
    appTemp.seekp(0);
    int docs = 0;
    int  tempPAge, tempPContact;
    char tempADate, tempATime;
    string tempAId, tempDocID, tempPName, tempDocFName, tempDocLName;
    appEdit.seekg(0);
    appEdit.seekg(0, ios::cur);
    while (appEdit >> appLine >> tempAId >> tempADate >> tempATime >> tempPName >> tempPAge >> tempPContact >> tempDocID >> tempDocFName >> tempDocLName) {
        if (appLine != input) {
            appTemp << appLine << endl
                << tempAId << endl
                << tempADate << endl
                << tempATime << endl
                << tempPName << endl
                << tempPAge << endl
                << tempPContact << endl
                << tempDocID << endl
                << tempDocFName << endl
                << tempDocLName << endl;
        }
    }
    appEdit.close();
    appTemp.close();
    remove("Appointments.txt");
    int overwritetxt;
    char apptemp[] = "AppointmentTemp.txt";
    char newapptxt[] = "Appointments.txt";
    overwritetxt = rename(apptemp, newapptxt);

editLoop:
    int optUser;
    cout << "Enter the Detail to edit : ";
    cin >> optUser;
    switch (optUser) {
    case 1: {
        cout << "\n\nChange Appointment ID into: ";
        cin >> aId;
        break;
    }
    case 2: {
        cout << "Change Appointment Date into : ";
        cin >> aDate;
        break;
    }
    case 3: {
        cout << "Change Appointment Time into : ";
        cin >> aTime;
        break;
    }
    case 4: {
        cout << "Change Patient Name into : ";
        cin >> pName;
        break;
    }
    case 5: {
        cout << "Change Patient's Age into : ";
        cin >> pAge;
        break;
    }
    case 6: {
        cout << "Change Patient Contact Number into : ";
        cin >> pContact;
        break;
    }
    case 7: {
        cout << "Change Doctor ID into : ";
        cin >> aDocId;
        break;
    }
    case 8: {
        cout << "Change Doctor First Name into : ";
        cin >> aDocFirstName;
        break;
    }
    case 9: {
        cout << "Change Doctor Last Name into : ";
        cin >> aDocLastName;
        break;
    }
    default: {
        cout << "\t\t - - - - - - - \n";
        cout << "\t\t   Try Again \n";
        cout << "\t\t - - - - - - - \n";
        goto editLoop;
    }
    }
    system("cls");
    cout << "\n -------------------------------" << endl;
    cout << " Profile Updated ! " << endl;
    cout << " -------------------------------\n\n" << endl;
    cout << " Appointment ID : " << aId << endl
        << " Appointment Date : " << aDate << endl
        << " Appointment Time : " << aTime << endl
        << "\n Patient Name : " << pName << endl
        << " Patient Age: " << pAge << endl
        << " Patient Contact Number : " << pContact << endl
        << "\n Doctor ID: " << aDocId << endl
        << " Doctor First Name : " << aDocFirstName << endl
        << " Doctor Last Name : " << aDocLastName << endl;

    //updated
    fstream updateApp;
    updateApp.open("Appointments.txt", ios::app);
    updateApp.seekp(0, ios::end);
    updateApp << aId << endl
        << aDate << endl
        << aTime << endl
        << pName << endl
        << pAge << endl
        << pContact << endl
        << aDocId << endl
        << aDocFirstName << endl
        << aDocLastName << endl;
    updateApp.close();      // close txt

againLoop2:
    cout << "1. Edit another Appointment ID \n"
        << "2. Back\n"
        << "3. Return to Main Menu\n"
        << "4. Exit\n"
        << "\nOption: ";
    cin >> opt;
    if (opt == 1) {
        goto againloop;
    }
    else if (opt == 2) {
        manageAppointment();
    }
    else if (opt == 3) {
        mainMenu();
    }
    else if (opt == 4) {
        exit1();
    }
    else {
        cout << "\t\t - - - - - - - \n";
        cout << "\t\t   Try Again \n";
        cout << "\t\t - - - - - - - \n";
        goto againLoop2;
    }
}

// delete exist appointments
void deleteAppointment() {
    string delId;
    system("cls");
    cout << "-------------- <<";  printf("\t\x1B[32mDelete Appointment\033[0m\t"); cout << ">> --------------" << endl;
    cout << "\nEnter the Appointment ID : ";
    cin >> delId;
    fstream delApp("Appointments.txt");
    delApp.seekg(0);
    char aDate, aTime;
    int  count = 0;
    string aId, aDocId, pName, pAge, pContact, aDocFName, aDocLName;
    while (delApp >> aId >> aDate >> aTime >> pName >> pAge >> pContact >> aDocId >> aDocFName >> aDocLName) {
        if (aId == delId) {
            cout << "\n1. Appointment ID : " << aId << endl
                << "2. Appointment Date : " << aDate << endl
                << "3. Appointment Time : " << aTime << endl
                << "4. Patient Name : " << pName << endl
                << "5. Patient Age : " << pAge << endl
                << "6. Patient Contact Number : " << pContact << endl
                << "7. Doctor ID: " << aDocId << endl
                << "8. Doctor First Name : " << aDocFName << endl
                << "9. Doctor Last Name : " << aDocLName << endl;
            count++;
        }
    }
    delApp.close();
    if (count == 0) {
        cout << "\n ----------------------------" << endl;
        cout << "| No Matches Found! |" << endl;
        cout << " ----------------------------\n" << endl;
    againLoop:
        cout << "---------------- << Delete Appointment  >> ----------------\n\n" << endl;
        cout << "1. Delete another Appointment ID \n"
            << "2. Back\n"
            << "3. Return to Main Menu\n"
            << "4. Exit\n"
            << "\nOption : ";
        cin >> opt;
        if (opt == 1) {
            deleteAppointment();
        }
        else if (opt == 2) {
            editAppointment();
        }
        else if (opt == 3) {
            mainMenu();
        }
        else if (opt == 4) {
            exit1();
        }
        else {

            cout << "\t\t - - - - - - - \n";
            cout << "\t\t   Try Again \n";
            cout << "\t\t - - - - - - - \n";

            goto againLoop; //goto function 
        }
    }
}

// view all appointments
void viewAppointment() {
    system("cls");
    cout << "-------------- <<";  printf("\t\x1B[32mView Appointment\033[0m\t"); cout << ">> --------------" << endl;
    fstream appDB("Appointments.txt");
    appDB.seekg(0);
    cout << "Appointment ID and Patient Name\n" << endl;
    int pAge, pContact, count = 0;
    char aDate, aTime;
    string aId, pName, aDocId, aDocFName, aDocLName;
    while (appDB >> aId >> aDate >> aTime >> pName >> pAge >> pContact >> aDocId >> aDocFName >> aDocLName) {
        count++;
        cout << "Appointment ID : " << aId << endl
            << "Patient Name : " << pName << endl;
    }
    if (count == 0)
    {
        cout << "\n ----------------------------" << endl;
        cout << "        No Appointment Found!    " << endl;
        cout << " ----------------------------\n" << endl;
    }
    appDB.close();

    string input;
    cout << "\nEnter the Doctor ID: ";
    cin >> input;
    ifstream appDB1;
    appDB1.open("Doctor Details.txt", ios::out | ios::in);
    appDB1.seekg(0);
    while (appDB1 >> aId >> aDate >> aTime >> pName >> pAge >> pContact >> aDocId >> aDocFName >> aDocLName) {
        if (aId == input) {
            cout << " Appointment ID : " << aId << endl
                << " Appointment Date : " << aDate << endl
                << " Appointment Time : " << aTime << endl
                << " Patient Name : " << pName << endl
                << " Patient Age : " << pAge << endl
                << " Patient Contact Number : " << pContact << endl
                << " Docotor ID : " << aDocId << endl
                << " Docotor First Name : " << aDocFName << endl
                << " Docotor Last  Name : " << aDocLName << endl;
            count++;
        }
    }
    appDB1.close();
    if (count == 0) {
        cout << "\n ----------------------------" << endl;
        cout << "        No Appointment Found!    " << endl;
        cout << " ----------------------------\n" << endl;
    }
repeat: //goto function
    cout << "1. Enter Doctor ID\n"
        << "2. Back\n"
        << "3. Return to Main Menu\n"
        << "4. Exit\n"
        << "\nOption : ";
    cin >> opt;
    if (opt == 1) {
        viewAppointment();
    }
    else if (opt == 2) {
        manageAppointment();
    }
    else if (opt == 3) {
        mainMenu();
    }
    else if (opt == 4) {
        exit1();
    }
    else {
        cout << "\t\t - - - - - - - \n";
        cout << "\t\t   Try Again \n";
        cout << "\t\t - - - - - - - \n";
        goto repeat;
    }
}


int main()
{
    mainTitle();
    adminLogin();
    return 0;
}