#include <bits/stdc++.h>
#include <fstream>
using namespace std;
// FUNCTION PROTOTYPES

void stats();
void feepayment(int);

// CLASS STUDENT
class student
{
public:
    string name;
    string fname;
    string mname;
    string date;
    string telno;
    int sclass;
    char div;
    int rno;
    float marks[5];
    string sec_code;
    int attct;
    float per;
    char grade;

    // DESTRUCTOR
    ~student() {}

    // FUNCTION TO GENERATE ID CARD

    void id()
    {
        ofstream file;
        file.open("print1.txt");
        file << endl
             << endl;
        for (int i = 0; i < 80; i++)
        {
            file << "-";
        }
        file << endl
             << "\n\t\t\t  THE INDIAN NATIONAL SCHOOL\n\n";

        for (int i = 0; i < 80; i++)
        {
            file << "-";
        }
        file << endl
             << "\n\t\t\t\t   STUDENT ID CARD\n";
        for (int i = 0; i < 27; i++)
        {
            file << "-+-";
        }
        file << endl
             << "\n\t\t\t\t   PERSONAL DETAILS\n";
        for (int i = 0; i < 27; i++)
        {
            file << "-+-";
        }

        file << "\nNAME: " << name << "\t\t";
        file << "CLASS: " << sclass << "\t";
        file << "DIV: " << div << "\t\t";
        file << "ROLL NO: " << rno << "\n\n";
        file << "FATHERS NAME: Mr.  " << fname << "\t\t\t";
        file << "MOTHERS NAME: Mrs.  " << mname << "\n\n";
        file << "DATE OF BIRTH: " << date << "\t\t\t";
        file << "TELEPHONE: " << telno << "\n\n";

        file << endl
             << endl;

        for (int i = 0; i < 27; i++)
        {
            file << "-+-";
        }
        file.close();
        system("open -a TextEdit print1.txt");
    }

    // FUNCTION TO GET PERCENTAGE
    void getper()
    {
        per = (marks[0] + marks[1] + marks[2] + marks[3] + marks[4]) / 5;
    }

    // FUNCTION TO GET GRADE
    void getgrade()
    {
        if (per >= 80)
            grade = 'A';
        else if ((per >= 60) && (per <= 79))
            grade = 'B';
        else if ((per >= 40) && (per <= 59))
            grade = 'C';
        else if ((per >= 35) && (per <= 39))
            grade = 'D';
        else if (per < 35)
            grade = 'E';
    }

    // FUNCTION TO DISPLAY ALL THE ATTRIBUTES
    void display()
    {
        cout << endl;
        cout << endl
             << "1.NAME";
        cout << endl
             << "2.FATHER'S NAME";
        cout << endl
             << "3.MOTHER'S NAME";
        cout << endl
             << "4.DATE OF BIRTH";
        cout << endl
             << "5.TELEPHONE NUMBER";
        cout << endl
             << "6.SECURITY CODE";
        cout << endl
             << "7.CLASS";
        cout << endl
             << "8.DIVISION";
        cout << endl
             << "9.ROLL NO.";
        cout << endl
             << "10.ATTENDANCE";
    }

    // FUNCTION TO GET INPUT FROM USER
    void enter()
    {
        for (int i = 0; i < 40; i++)
        {
            cout << "-+-";
        }
        cout << "\t\t\t\t\t   ENTER THE STUDENT DETAILS" << endl
             << endl;
        for (int i = 0; i < 40; i++)
        {
            cout << "-+-";
        }
        cout << endl;
        cin.ignore();
        cout << "\t\tNAME OF THE STUDENT: " << endl;
        getline(cin,name);
        cout << "\t\tFATHER'S NAME: " << endl;
        getline(cin,fname);
        cout << "\t\tMOTHER'S NAME: " << endl;
        getline(cin,mname);
        cout << "\t\tDATE OF BIRTH(DD/MM/YY): " << endl;
        getline(cin,date);
        cout << "\t\tTELEPHONE NUMBER(10-digits): " << endl;
        getline(cin,telno);
        cout << "\t\tSECURITY CODE(4-characters): " << endl;
        getline(cin,sec_code);
        cout << "\t\tCLASS(1-12): " << endl;
        cin >> sclass;
        cout << "\t\tDIVISION(single charcter only): " << endl;
        cin >> div;
        cout << "\t\tROLL NUMBER(1-40 only): " << endl;
        cin >> rno;
        cout << "\t\tDAYS PRESENT(<=100): " << endl;
        cin >> attct;

        cout << endl
             << endl;
        for (int i = 0; i < 40; i++)
        {
            cout << "+-+";
        }
        cout << "\t\t\t\t\t   ENTER THE SUBJECT MARKS" << endl;
        for (int i = 0; i < 40; i++)
        {
            cout << "+-+";
        }
        cout << endl;
        cout << "\t\t\t       PHYSICS(out of 100): ";
        cin >> marks[0];
        cout << "\t\t\t       CHEMISTRY(out of 100): ";
        cin >> marks[1];
        cout << "\t\t\t       MATHEMATICS(out of 100): ";
        cin >> marks[2];
        cout << "\t\t\t       COMPUTER(out of 100): ";
        cin >> marks[3];
        cout << "\t\t\t       ENGLISH(out of 100): ";
        cin >> marks[4];
    }

    // FUNCTION TO DISPLAY REPORT CARD OF STUDENT
    void display_report()
    {
        cout << endl
             << endl;
        for (int i = 0; i < 40; i++)
        {
            cout << "-";
        }
        cout << endl
             << "\t\t\t\t\t   THE INDIAN NATIONAL SCHOOL\n\n";
        for (int i = 0; i < 40; i++)
        {
            cout << "-";
        }
        cout << endl
             << "\t\t\t\t\t   STUDENT REPORT CARD\n";
        for (int i = 0; i < 40; i++)
        {
            cout << "-+-";
        }
        cout << endl
             << "\t\t\t\t\t   PERSONAL DETAILS\n";
        for (int i = 0; i < 40; i++)
        {
            cout << "-+-";
        }

        cout << "\nNAME: " << name << "\t\t";
        cout << "CLASS: " << sclass << "\t";
        cout << "DIV: " << div << "\t\t";
        cout << "ROLL NO: " << rno << "\n\n";
        cout << "DATE OF BIRTH: " << date << "\t\t\t";
        cout << "TELEPHONE: " << telno << "\n\n";
        cout << "FATHERS NAME: Mr.  " << fname << "\t\t\t";
        cout << "MOTHERS NAME: Mrs.  " << mname << "\n\n";
        cout << endl
             << endl;

        for (int i = 0; i < 40; i++)
        {
            cout << "-+-";
        }
        cout << endl
             << "\t\t\t\t   ACADEMIC PERFORMANCE\n";

        for (int i = 0; i < 40; i++)
        {
            cout << "-+-";
        }
        cout << endl
             << "\t\t\t\t   MARKS\n";

        cout << "\t\t\t  PHYSICS\t" << marks[0] << "\n";
        cout << "\t\t\t  CHEMISTRY\t" << marks[1] << "\n";
        cout << "\t\t\t  MATHS\t\t" << marks[2] << "\n";
        cout << "\t\t\t  COMPUTER\t" << marks[3] << "\n";
        cout << "\t\t\t  ENGLISH\t" << marks[4] << "\n";

        cout << endl
             << endl
             << "\t\t\t\t   PERCENTAGE: ";
        cout << per;
        cout << "  %";
        cout << "\t\tGRADE: ";
        cout << grade;
        cout << endl;
    }

    // FUNCTION TO DISPLAY INFORMATION TO TEACHER
    void display_all()
    {
        cout << "\t\tNAME: " << name << endl;
        cout << "\t\tFATHER: Mr. " << fname << "\t"
             << "MOTHER: Mrs." << mname << endl
             << endl;
        cout << "\t\tROLL NO: " << rno << "\t"
             << "SECURE CODE: " << sec_code << endl;
        cout << "\t\tCLASS: " << sclass << " " << div << "\t";
        cout << "\t\tTELEPHONE NO: " << telno << endl
             << endl;
        cout << "\t\t                     MARKS" << endl;
        cout << "\t\tPHY\tCHEM\tMATHS\tBIO/COMP\tENG" << endl;
        cout << "\t\t" << marks[0] << "\t" << marks[1] << "\t" << marks[2] << "\t";
        cout << marks[3] << "\t\t" << marks[4] << "\n\n";
        cout << "\t\tPERCENTAGE: " << per << "%\t\t"
             << "GRADE: " << grade << endl;
        cout << "\t\tATTENDANCE: " << attct << " %";
    }

    // FUNCTION TO PRINT THE REPORT CARD

    void print_report()
    {
        ofstream file;
        file.open("print.txt");
        file << "\t\t\t   THE INDIAN NATIONAL SCHOOL" << endl;
        file << "\t\t\t\t   REPORT CARD" << endl
             << endl
             << endl;
        file << "\tNAME : " << name << endl;
        file << "\tROLL NO: " << rno << endl;
        file << "\tCLASS: " << sclass << " " << div << endl
             << endl
             << endl;
        file << "\tYOUR MARKS ARE AS FOLLOWS:" << endl
             << endl;
        file << "\tPHYSICS : " << marks[0] << endl
             << "\tCHEMISTRY : " << marks[1] << endl
             << "\tMATHS : " << marks[2] << endl
             << "\tCOMPUTER : " << marks[3] << endl
             << "\tENGLISH : " << marks[4] << endl
             << endl
             << endl;
        file << "\tRESULT : " << endl
             << endl;
        file << "\tPERCENTAGE: " << per << "%" << endl
             << "\tGRADE: " << grade << endl
             << endl
             << endl;
        file << "-----------------------------------------------------------------------------------";
        file.close();
        system("open -a TextEdit print.txt");
    }

} ob1[40]; // GLOBAL OBJECT
int main()
{
    char n,c,d;
    int f=0, g, h, k = 50,cls, e;
    string b, s;

// MAIN MENU TO DISPLAY LOG IN OPTIONS
A:

    cout << endl
         << endl;
    cout << "\t\t\t\t\t\t   MAIN MENU";
    cout << endl
         << endl
         << "\t\t\t\t\t      SELECT DESIGNATION";
    cout << endl
         << endl;
    cout << "\t\t\t\t    1. TEACHER\t2. STUDENT\t3. PUBLIC";
    cout << endl
         << endl
         << "\t\t\t\t\t\t(PRESS 4 TO EXIT)";
    cout << endl
         << endl
         << "\t\t\t\t\tSELECT AN OPTION(1-4):  ";
    cin >> n;
    cin.ignore();
    if (n == '1')
    {
        // PASSWORD AUTHORIZATION
        cout << endl
             << "ENTER PASSWORD: ";
        cin >> b;
        if (b == "ABCDEF")
        {
            cout << "ACCESS GRANTED" << endl;
        a1:
            // SUB MENU FOR TEACHER TO PERFORM VARIOUS TASKS
            cout << "\t\t\t\t\t\t  MENU" << endl;
            cout << "\t\t\t\t\t1.ADD A NEW RECORD";
            cout << endl
                 << "\t\t\t\t\t2.SEARCH FOR A RECORD";
            cout << endl
                 << "\t\t\t\t\t3.MODIFY A RECORD";
            cout << endl
                 << "\t\t\t\t\t4.DISPLAY NAMES OF ALL THE STUDENTS ENROLLED";
            cout << endl
                 << "\t\t\t\t\t5.DISPLAY ALL THE RECORDS";
            cout << endl
                 << "\t\t\t\t\t6.CLASS STATISTICS";
            cout << endl
                 << "\t\t\t\t\t7.GO TO MAIN MENU";
            cout << endl
                 << endl
                 << "\t\t\t\t   ENTER YOUR OPTION(1-7): ";
            cin >> c;

            // CASE 1 TO HELP TEACHER TO ADD DETAILS OF STUDENTS
            if (c == '1')
            {
                cout << "HOW MANY RECORDS YOU WANT TO ADD? ";
                cin >> f;
                for (int i = 0; i < f; i++)
                {
                    try
                    {
                        ob1[i].enter();
                        ob1[i].getper();
                        ob1[i].getgrade();
                        if (ob1[i].telno.size() != 10)
                        {
                            throw "INVALID INPUT,TELEPHONE NUMBER SHOULD OF LENGTH 10 ONLY";
                        }
                        else if (!(ob1[i].div >= 'a' && ob1[i].div <= 'z' || ob1[i].div >= 'A' && ob1[i].div <= 'Z'))
                        {
                            throw "INVALID INPUT,DIVISION  SHOULD BE A SINGLE CHARACTER ONLY";
                        }
                        else if (!(ob1[i].sclass >= 1 && ob1[i].sclass <= 12))
                        {
                            throw "INVALID INPUT,CLASS SHOULD BE BETWEEN 1-12 ONLY";
                        }
                        else if (!(ob1[i].rno >= 1 && ob1[i].rno <= 40))
                        {
                            throw "INVALID INPUT,ROLL NUMBER SHOULD BE BETWEEN 1-40 ONLY";
                        }
                        else if (!(ob1[i].attct <= 100))
                        {
                            throw "INVALID INPUT";
                        }
                        else if (ob1[i].sec_code.size() != 4)
                        {
                            throw "INVALID INPUT,SECURITY CODE SHOULD BE OF LENGTH 4 ONLY";
                        }
                        else if (!(ob1[i].marks[0] <= 100 && ob1[i].marks[1] <= 100 && ob1[i].marks[2] <= 100 && ob1[i].marks[3] <= 100 && ob1[i].marks[4] <= 100))
                        {
                            throw "INVALID INPUT,MARKS CANNOT BE GREATER THAN 100";
                        }
                        else if (!(ob1[i].date[2] == '/' && ob1[i].date[5] == '/'))
                        {
                            throw "INVALID INPUT";
                        }
                    }
                    catch (const char *s)
                    {
                        cout << "INVALID INPUT :(" << endl;
                        goto a1;
                    }
                }
                cout << endl
                     << "\t-->  RECORD SUCESSFULLY ADDED!" << endl;
                goto a1;
            }
            // CASE 2 TO HELP USER SEARCH FOR STUDENT RECORD
            else if (c == '2')
            {

                cout << endl
                     << "ENTER THE ROLL NO. TO BE SEARCHED: ";
                cin >> g;
                int i;
                if (f != 0)
                {
                    for (i = 0; i < f; i++)
                    {
                        if (ob1[i].rno == g)
                        {
                            ob1[i].display_all();
                            goto a1;
                        }
                    }
                }

                else
                {
                    cout << "SORRY, NO SUCH RECORD FOUND!" << endl;
                    goto a1;
                }
            }
            // CASE 3 TO HELP USER MODIFY PRE EXISTING RECORD
            else if (c == '3')
            {
                
                cout << "ENTER THE ROLL NO. OF THE STUDENT WHOSE RECORD IS TO BE MODIFIED: ";
                cin >> h;
                for (int i = 0; i < 40; i++)
                {
                    if (ob1[i].rno == h)
                    {
                        k = i;
                        break;
                    }
                }
                if (k == 50)
                {
                    cout << endl
                         << "SORRY, NO SUCH RECORD FOUND!!";
                    goto a1;
                }

                else if (k != 50)
                {
                    ob1[k].display_all();
                    cout << endl;
                    ob1[k].enter();
                    cout << endl
                         << "RECORD SUCCESSFULLY MODIFIED.";
                    goto a1;
                }
            }
            // CASE 4 TO DISPLAY NAMES OF STUDENTS ENROLLED
            else if (c == '4')
            {
                

                cout << endl
                     << "   NAME:-\t\t CLASS:-\n";
                int i=0;
                if(ob1[i].sclass==0) cout<<"No Record Found!!"<<endl<<endl;
                for (i = 0; i < 40; i++)
                {
                    if (ob1[i].sclass != 0)
                    {
                        cout << endl
                             << i + 1 << ". " << ob1[i].name;
                        cout << "\t\tCLASS: " << ob1[i].sclass;
                    }
                }

                goto a1;
            }
            // CASE 5 TO DISPLAY ALL EXISTING RECORDS
            else if (c == '5')
            {
                

                cout << endl;
                if (f == 0)
                {
                    cout << endl
                         << "SORRY, NO DATA FOUND :(";
                    goto a1;
                }
                else
                {
                    for (int i = 0; i < f; i++)
                    {
                        ob1[i].display_all();
                        cout << endl
                             << endl;
                    }
                }
                goto a1;
            }
            // CASE 6 TO DISPLAY CLASS STATISTICS
            else if (c == '6')
            {
                

                stats();
                goto a1;
            }
            // CASE 7 TO GO TO MAIN MENU
            else if (c == '7')
            {
                
                goto A;
            }
            else
            {
                cout<<"Invalid Input!! Try Again."<<endl<<endl;
                goto a1;
            }
        }   
        else
        {
            cout << "Access Denied!!";
            goto A;
        }
    }
    // CASE 2 TO DISPLAY MAIN MENU FOR STUDENT
    else if (n == '2')
    {
        while (true)
        {
            cout << endl
                 << endl
                 << "\t\t\t\t\t\t  MENU";
            cout << endl
                 << endl
                 << "\t\t\t\t\t1.SEARCH FOR YOUR RECORDS";
            cout << endl
                 << "\t\t\t\t\t2.VIEW CLASS STATISTICS";
            cout << endl
                 << "\t\t\t\t\t3.PAY YOUR ACADEMIC FEE";
            cout << endl
                 << "\t\t\t\t\t4.GET YOUR ID CARD";
            cout << endl
                 << "\t\t\t\t\t5.PRINT YOUR REPORT CARD";
            cout << endl
                 << "\t\t\t\t\t6.GO TO MAIN MENU";
            cout << endl
                 << endl
                 << "\t\t\t\t   ENTER YOUR OPTION(1-6): ";
            cin >> d;

            // CASE 1 TO SEARCH FOR STUDENT RECORD
            if (d == '1')
            {
                cout << "ENTER YOUR ROLL NO.: ";
                cin >> g;
                cout << "ENTER YOUR SECURITY CODE: ";
                cin >> s;
                cout << "ENTER YOUR CLASS: ";
                cin >> cls;
                int i;
                for (i = 0; i < 40; i++)
                {
                    if (ob1[i].rno == g && ob1[i].sclass == cls && ob1[i].sec_code == s)
                    {
                        ob1[i].display_report();
                        break;
                    }
                }
                if (i == 40)
                {
                    cout << endl
                         << "SORRY,NO SUCH RECORD FOUND :(";
                }
            }

            // CASE 2 TO DISPLAY CLASS STATISTICS
            else if (d == '2')
            {
                stats();
            }

            // CASE 3 TO PAY YOUR ACADEMIC FEE
            else if (d == '3')
            {
                cout << endl;
                cout << "ENTER YOUR ROLL NO.: ";
                cin >> g;
                cout << "ENTER YOUR SECURITY CODE: ";
                cin >> s;
                cout << "ENTER YOUR CLASS: ";
                cin >> cls;
                int i;
                for (i = 0; i < 40; i++)
                {
                    if (ob1[i].rno == g && ob1[i].sclass == cls && ob1[i].sec_code == s)
                    {
                        feepayment(cls * 5000);
                        break;
                    }
                }
                if (i == 40)
                {
                    cout << "SORRY,NO SUCH RECORD FOUND :(" << endl;
                }
            }
            // CASE 4 TO GENERATE THE ID CARD OF THE STUDENT
            else if (d == '4')
            {
                cout << "ENTER YOUR ROLL NO.: ";
                cin >> g;
                cout << "ENTER YOUR SECURITY CODE: ";
                cin >> s;
                cout << "ENTER YOUR CLASS: ";
                cin >> cls;
                int i;
                for (i = 0; i < 40; i++)
                {
                    if (ob1[i].rno == g && ob1[i].sclass == cls && ob1[i].sec_code == s)
                    {
                        ob1[i].id();
                        break;
                    }
                }

                if (i == 40)
                {
                    cout << "Sorry! No record found." << endl;
                }
            }

            // CASE 5 TO PRINT THE REPORT CARD OF THE STUDENT
            else if (d == '5')
            {
                cout << "ENTER YOUR ROLL NO.: ";
                cin >> g;
                cout << "ENTER YOUR SECURITY CODE: ";
                cin >> s;
                cout << "ENTER YOUR CLASS: ";
                cin >> cls;
                int i;
                for (i = 0; i < 40; i++)
                {
                    if (ob1[i].rno == g && ob1[i].sclass == cls && ob1[i].sec_code == s)
                    {
                        ob1[i].print_report();
                        break;
                    }
                }
                if (i == 40)
                {
                    cout << "Sorry! No record found." << endl;
                }
            }

            // CASE 6 TO GO TO Main MENU
            else if (d == '6')
            {
                cout << "Returning to Main Menu...." << endl;
                goto A;
            }
        }
    }

    else if (n == '3')
    {
        while (true)
        {
            cout<<endl << "\t\t\t\t Welcome to The INDIAN NATIONAL SCHOOL" << endl;

            cout << "\t\t\t\t\t\t DELHI" << endl<<endl;
            cout << "\t\t\t\t You have the following options to do-" << endl;

            cout << endl
                 << endl
                 << "\t\t\t\t\t\t  MENU";
            cout << endl
                 << endl
                 << "\t\t\t\t\t1.VIEW CLASS STATISTICS";
            cout << endl
                 << "\t\t\t\t\t2.GO TO MAIN MENU";
            cout << endl
                 << endl
                 << "\t\t\t\t   ENTER YOUR OPTION(1-2): ";
            cin >> e;
            if (e == 1)
            {
                stats();
            }
            else if (e == 2)
            {
                cout << "Returning to Main Menu!!" << endl;
                goto A;
            }
        }
    }
    else if (n == '4')
    {
        cout << "Thanks for using our software...exiting!" << endl;
        exit(0);
    }
    else
    {
        cout << "INVALID INPUT,INPUT SHOULD BE INTEGER ONLY BETWEEN 1-4 " << endl;
        goto A;
    }

    return 0;
}

// FUNCTION TO DISPLAY CLASS STATISTICS
void stats()
{
    cout << endl
         << endl;
    cout << "\t\t\t\t\t     STATISTICS";
    for (int i = 0; i < 5; i++)
    {
        int count = 0;
        float avgmarks = 0;
        for (int z = 0; z < 10; z++)
        {
            if (ob1[z].marks[i] != 0)
            {
                avgmarks += ob1[z].marks[i];
                count++;
            }
        }
        cout << endl
             << "AVERAGE MARKS OF SUBJECT " << i + 1 << " = ";
        cout << avgmarks / count;
    }
    cout << endl
         << endl;
    cout << "ABBRIVATIONS USED: ";
    cout << endl
         << "1=PHYSICS\n2=CHEMISTRY\n3=MATHEMATICS\n4=COMPUTER\n5=ENGLISH";
}

// FUNCTION FOR PAYMENT PORTAL TO ACCEPT ACADEMIC FEES
void feepayment(int cost)
{
    int otp,pin,z;
    string expiry, crdholder, upi, cardno, cvv;
    for (int i = 0; i < 40; i++)
    {
        cout << "-+-";
    }
    cout << "\t\t\t\t\t    WELCOME TO OUR PAYMENT GATEWAY" << endl;
    for (int i = 0; i < 40; i++)
    {
        cout << "-+-";
    }
    cout << "\t\t\t\t\t    TOTAL ACADEMIC FEES= Rs. " << cost << endl;
z1:

    cout << endl
         << endl
         << "\t\t HOW WOULD YOU LIKE TO PAY?";
    cout << endl
         << "\t\t 1.CARD";
    cout << endl
         << "\t\t 2.UPI";

    cout << endl
         << "\tPLEASE SELECT YOUR OPTION: ";
    cin >> z;
    if (z == 1)
    {
    a9:
        cout << endl
             << endl
             << "\tYOU HAVE CHOOSEN PAYMENT BY CARD METHOD. ";
        cout << endl
             << "\tPLEASE ENTER YOUR CARD DETAILS:- ";
        cout << endl
             << "\t\tCARD NUMBER: ";
        try
        {
            cin >> cardno;
            if (cardno.size() != 16)
            {
                throw 10;
            }
        }
        catch (int e)
        {
            cout << endl
                 << "INVALID INPUT,INPUT SHOULD BE 16 INTEGER VALUES ONLY ";
            goto a9;
        }
        try
        {
            cout << endl
                 << endl
                 << "\t\tCVV(3-Digit no.): ";
            cin >> cvv;
            if (cvv.size() != 3)
            {
                throw 4.1;
            }
        }
        catch (double dou)
        {
            cout << endl
                 << "INVALID INPUT,CVV SHOULD BE OF 3 INTEGER VALUES ONLY ";
            goto a9;
        }

        cout << endl
             << "\t\tEXPIRY DATE: ";
        cin >> expiry;
        cout << endl
             << "\t\tCARD HOLDER NAME: ";
        cin >> crdholder;

        cout << endl
             << endl
             << "\t\tWAIT WHILE WE ARE SENDING YOU AN OTP " << endl;
        for (int i = 0; i < 100; i++)
        {
            cout << ".";
        }
        try
        {
            cout << endl
                 << endl
                 << "\t\tEnter OTP: ";
            cin >> otp;
            if (otp)
            {
                for (int i = 0; i < 40; i++)
                {
                    cout << "-+-";
                }
                cout << "\t\t\t\t\t      !!PAYMENT SUCCESSFULL!!" << endl;

                for (int i = 0; i < 40; i++)
                {
                    cout << "-+-";
                }
            }
            else
            {
                
                throw "abc";
            }
        }
        catch (const char *s)
        {
            cout << "Invalid otp!!" << endl
                 << "Cancelling Payment." << endl;
            goto z1;
        }
    }
    else if (z == 2)
    {
        cout << endl
             << endl
             << "\tYOU HAVE CHOOSEN PAYMENT BY UPI METHOD. ";
        cout << endl
             << "\tPLEASE ENTER YOUR UPI ID: ";
        cin >> upi;
        try
        {
            cout << endl
                 << "\tPLEASE ENTER YOUR UPI PIN: ";
            cin >> pin;
            if (pin)
            {
                for (int i = 0; i < 40; i++)
                {
                    cout << "-+-";
                }
                cout << "\t\t\t\t\t       PAYMENT SUCCESSFULL" << endl;

                for (int i = 0; i < 40; i++)
                {
                    cout << "-+-";
                }
            }
            else
            {
                throw 123;
            }
        }
        catch (int x)
        {
            cout << "Invalid pin!!" << endl
                 << "Cancelling Payment." << endl;
            goto z1;
        }
    }
}