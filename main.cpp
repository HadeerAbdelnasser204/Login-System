// FCAI – Programming 1 – 2022 - Assignment 4.
// Last Modification Date: 24/8/2022
// Author1: Hadeer Abdelnasser
// Author2: Sohaila Abdelazim Khalifa
// Author3: Basmala Mohamed Sayed Gad
// Teaching Assistant: Afaf Abdelmonem

#include "LoginLib.cpp"


// userInformation ---> main struct
// information ---> passing parameter struct
// user ---> parameter struct of functions

int main() {
    map<string, userInformation> fileInformation;
    fstream file;
    userInformation information;
    string choice;
    while(true) {
        cout
                << " ________________________________________________________________________________" << "\n"
                << "|                                                                                " << "|" << "\n"
                << "|_________________________ Welcome To SBH LOGIN SYSTEM __________________________" << "|" << "\n"
                << "|"                       << "-- Please select an option :                                                    " << "|" << "\n"
                << "|"                       << "1. Register                                                                     " << "|" << "\n"
                << "|"                       << "2. login                                                                        " << "|" << "\n"
                << "|"                       << "3. change password                                                              " << "|" << "\n"
                << "|"                       << "4. Exit                                                                         " << "|" << "\n"
                << "|________________________________________________________________________________" << "|" << "\n" ;

        cin >> choice;

        if (choice == "1" )
        {
            Register(file,information);
        }

        else if (choice == "2" )
        {
            Login(file,information,fileInformation);
        }

        else if (choice == "3" )
        {
            ChangePassword(file,information,fileInformation);
        }

        else if (choice == "4" )
        {
            cout << "Thank you for using SBH Login system ! \n" << " We hope you had an enjoyable experience with us! \n";
            break ;
        }

        else
        {
            cout << "Please enter valid choice: " << "\n";
            cin >> choice;
        }

    }

    return 0;

}
