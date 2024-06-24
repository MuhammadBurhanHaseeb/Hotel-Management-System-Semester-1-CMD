#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <conio.h>
#include <sstream>
#include <windows.h>
#include <stdio.h>
using namespace std;

// ****************************** SECTION C ROLL NO 2021-CS-165 ***********************************

//------------------ Functions Prototypes-------------------
string LoginMenu();
void header();
void Add_items();
void AddbillsToFile();
void view_items();
char SalesManMenu();
void Search_items();
void searchcustomer();
void update_items();
void BillCalculate();
char AdminMenu();
void BillCalculate();
int GenerateSales();
void saleshistory();
void change_Password();
void clear_secreen();
void sendMessage();
void AdminAlerts();
void loaddata();
void loadbills();
void loaditems();
void AddItemToFile2();
void storetimeinfilee();
void DeleteUsers();
void Deleteitems();
void loadmessage();
void messagesinfile();
void change_password_in_File();
void storetimeinfile();
string s_user(string line, int field);
string gettime(string line);
float s_userf(string line, int field);
void sendMessageinfile(string line, int index);
string match(string line, string item, string brand, string quantity, string code, string price);
void AddItemToArray(string item, string brand, float quantity, float code, float price);
void addUser(string name, string pass, string role);
string t;

//-------------------End Functions prototypes--------------

//-------------------Data Structures----------------------
const int MAX_RECORDS = 20;
string usernameA[MAX_RECORDS];
string passwordsA[MAX_RECORDS];
string rolesA[MAX_RECORDS];
string itemA[MAX_RECORDS];          // FOR ADD ITEM ARRAY
string brandA[MAX_RECORDS];         // FOR ADD ITEM ARRAY
float quantityA[MAX_RECORDS];       // FOR ADD ITEM ARRAY
float codeA[MAX_RECORDS];           // FOR ADD ITEM ARRAY
float priceA[MAX_RECORDS];          // FOR ADD ITEM ARRAY
string customer_nameA[MAX_RECORDS]; // USE IN CALCULATE BILLS
float total_amountA[MAX_RECORDS];   // FOR SEARCH CUSTOMER ARRAY
float payamountA[MAX_RECORDS];      // FOR SEARCH CUSTOMER ARRAY
float payamountB[MAX_RECORDS];      // SORTING ARRAY
float discountA[MAX_RECORDS];       // FOR SEARCH CUSTOMER ARRAY
string item_nameA[MAX_RECORDS];     // FOR SEARCH CUSTOMER ARRAY
string checktime[MAX_RECORDS];
float  idA[MAX_RECORDS];
string lineA[MAX_RECORDS];
float sale_quantityA[MAX_RECORDS]; // FOR SEARCH CUSTOMER ARRAY
float sale_quantity, total_amount, pay_amount;
int testcount = 0, index2, sub2; // THIS INDEX TO STORE USERNAME INDEX TO SHOW MESSAGE.
int lineAcount = 0;
int messageindex = 0; // THIS VARIABLE IS USE TO LOAD DATA FROM MESSAGE TEXT FILE AND STORE INDEX
int customer_name_Count = 0;
int userCount = 0;
int count = 0;
int total_amount_Count = 0;
int pay_amount_Count = 0;
int item_name_Count = 0;
int discount_Count = 0;
int bill_Count = 0;
int connt =0; // FOR TIME UPDATE
int sale_quantity_count = 0;

//-------------------End data structures----------
main()
{
    string who, line2;
    char op, op2;

    loaddata();
    loaditems();
    loadbills();
    loadmessage();
   
  int cc =0;
    while (true)
    {
        system("CLS");
        who = LoginMenu();
        system("CLS");
        if (who == "SALESMAN")
        {   
            while (true)
            {
                system("CLS");
            op = SalesManMenu();

          /*   if(cc == 0){
              time_t timetoday;
              time(&timetoday);
              checktime[index2] = asctime(localtime(&timetoday));     // 1
              cc = 1;
              storetimeinfile();
            }*/
            
                if (op == '1')
                {
                    system("CLS");
                    Add_items();
                    clear_secreen();
                }
                else if (op == '2')
                {
                    system("CLS");
                    header();
                    cout << " *** Main menue of poragram   << VIEW ITEMS ***" << endl;
                    cout << "Brand Code"
                         << "\t"
                         << "   "
                         << "Brand Name"
                         << "\t"
                         << "   "
                         << "Item Name"
                         << "\t"
                         << "    "
                         << "Quantity"
                         << "\t    "
                         << "Price" << endl;
                    view_items();
                    cout << "\n";
                    clear_secreen();
                }
                else if (op == '3')
                {
                    system("CLS");
                    header();
                    cout << " *** Main menue of poragram   << SEEARCH ITEMS ***" << endl;
                    Search_items();
                    cout << "\n";
                    clear_secreen();
                }
                else if (op == '4')
                {
                    system("CLS");
                    header();
                    cout << " *** Main menue of poragram   << UPDATE ITEMS ***" << endl;
                    update_items();
                    cout << "\n";
                    clear_secreen();
                }
                else if (op == '5')
                {
                    system("CLS");
                    header();
                    cout << " *** Main menue of poragram   << BILL CALCULATE ***" << endl;
                    BillCalculate();
                    cout << "\n";
                    clear_secreen();
                }
                else if (op == '6')
                {
                    system("CLS");
                    header();
                    AdminAlerts();
                    cout << "\n";
                    clear_secreen();
                }
                else if ( op =='7'){
                  //  header();
                    searchcustomer();
                    clear_secreen();
                }
                else if (op == '8')
                {
                    cout << " ***** Dear User Thankyou For Using Clothing Store Management system  ****** " << endl;
                     cc =0;
                     connt =0;  
                   clear_secreen();
                    system("CLS");
                    break;
                }
                else
                {
                    cout << "\n";
                    cout << "************       Invalid Option selected..      *************" << endl;
                    clear_secreen();
                }
            }
        } // END SALESMAN BRACKET

        else if (who == "ADMIN")
        {
            while (true)
            {
            op2 = AdminMenu();
              if(cc == 0){
              time_t timetoday;
              time(&timetoday);
              checktime[index2] = asctime(localtime(&timetoday));     // 1
              cc = 1;
              storetimeinfilee();
              }
                if (op2 == '1')
                {
                    searchcustomer();
                    clear_secreen();
                }
                else if (op2 == '2')
                {
                    system("CLS");
                    header();
                    cout << " *** Main menue of poragram   << VIEW ITEMS ***" << endl;
                    cout << "-------------------------------------------- \n";

                    cout << "Brand Code"
                         << "\t"
                         << "   "
                         << "Brand Name"
                         << "\t"
                         << "   "
                         << "Item Name"
                         << "\t"
                         << "     "
                         << "Quantity"
                         << "\t\t"
                         << "Price" << endl;
                    view_items();
                    cout << "\n";
                    clear_secreen();
                }
                else if (op2 == '3')
                {
                    system("CLS");
                    saleshistory();
                    cout << "\n";
                    clear_secreen();
                }
                else if (op2 == '4')
                {
                    system("CLS");
                    header();
                    cout << " *** Main menue of poragram   <<  SALES IN ORDER  ***" << endl;
                    cout << "------------------------------------------------------\n";
                    cout << "Customer Name"
                         << "       "
                         << "Pay Amount"
                         << "      "
                         << "Total Amount"
                         << "       "
                         << "Discount"
                         << "       "
                         << "Quantities"
                         << "      "
                         << "Product" << endl;

                    /* this loop first all value in payamountA array  save in to payamountB[]
                       SORTING WAS  PAYAMOUNTB[] */

                    for (int j = 0; j < bill_Count; j++)
                    {
                        payamountB[j] = payamountA[j];
                    }
                    for (int p = 0; p < bill_Count; p++)
                    {
                        int getLargest = GenerateSales();
                        cout << customer_nameA[getLargest] << "            " << payamountA[getLargest] << "               " << total_amountA[getLargest] << "             " << discountA[getLargest] << "          " << sale_quantityA[getLargest] << "            " << item_nameA[getLargest] << endl;
                        payamountB[getLargest] = -1;
                    }
                    cout << "\n";
                    clear_secreen();
                }
                else if (op2 == '5')
                {
                    system("CLS");
                    change_Password();
                    clear_secreen();
                }
                else if (op2 == '6')
                {

                    system("CLS");
                    header();
                    cout << " *** Main menue of poragram   << ADD USERS  ***" << endl;
                    cout << "------------------------------------------------------\n";
                    cout << "Enter username..";
                    string username;
                    cin.ignore();
                    getline(cin, username);
                    int cont = 0;
                    for(int i=0 ; i<userCount; i++){
                        if(username == usernameA[i]){
                           cout << "\n";
                           cout << " THE USER IS ALREADY PRESENT IN OUR DATABASE. PLEASE TRY ANOTHER USER...."<<endl;
                            cout << "\n";
                         cont = 1;
                        }
                    }
                    if(cont == 0){
                    cout << "Enter password..";
                    string password;
                    cin >> password;
                    cout << "Enter role..";
                    string role;
                    cin >> role;
                    if (role == "ADMIN" || role == "SALESMAN")
                    {
                        addUser(username, password, role);
                        cout << "\n";
                        cout << " *** User has been successfully created *** " << endl;
                    }
                    else
                    {
                      
                        cout << " *** Invalid role enter ***" << endl;
                    }
                    }
                    clear_secreen();
                }
                else if (op2 == '7')
                {
                    system("CLS");
                    sendMessage();
                    cout << "\n";
                    clear_secreen();
                }
                else if (op2 == '8')
                {
                    system("CLS");
                    header();
                    cout << " *** Main menue of poragram   << DELETE USERS / ITEMS  ***" << endl;
                    cout << "------------------------------------------------------\n";
                    cout << "1) Press [1] for Delete user." << endl;
                    cout << "2) Press [2] for delete items." << endl;
                    cout << " Your option..";
                    char option;
                    cin >> option;
                    if (option == '2')
                    {
                        system("CLS");
                        Deleteitems();
                    }
                     if (option == '1')
                    {
                        system("CLS");
                        DeleteUsers();
                    }
                    else{
                        cout << "************       Invalid Option selected..      ***************" << endl;
                        
                    }
                    clear_secreen();
                    
                }
                else if (op2 == '9')
                {
                    cout<<"\n";
                    cout << " ***** Dear Admin Thankyou For Using Clothing Store Management system  ****** " << endl;
                    cout<<"\n";
                    cc =0;
                     connt =0;  
                    clear_secreen();
                    break;
                }
                else
                {
                    cout << "\n";
                    cout << "************       Invalid Option selected..      ***************" << endl;
                    cout << "\n";
                    clear_secreen();
                }
            }
        }
    }
}
// --------------  LOGIN MENU -----------------------
string LoginMenu()
{

    header();
    char x = 175;
    for(int i =0; i<170; i++){
        cout<<x;
    }
    cout<<endl;
    
           time_t timetoday;
            time(&timetoday);
            cout <<"\t\t\t\t\t\t\t\t\t" << asctime(localtime(&timetoday));
           
            

    for(int j =0; j<170; j++){
        cout<<x;
    }
   string pass[50];
   int k =0;
    cout<<"\n";
    cout << "Please Enter Your Username And Password Below.." << endl;
    cout<<"\n";
    cout << "Enter Username : ";
    string user;
    cin >> user;
    cout<<"\n";
    cout << "Enter Password  : ";
    while(pass[k-1] != "\r"){
        pass[k] = getch();
        if(pass[k]!= "\r"){
            cout << "*";
        }
        k++;
    }
    pass[k-1] ="\0";
     string item;
    for(int i=0; pass[i]!= "\0"; i++){
       
        item = item + pass[i];
    }

    //   char index2 = ' ';

    for (int i = 0; i < userCount; i++)
    {
        if (usernameA[i] == user && passwordsA[i] == item)
        {
            testcount = 0;
            index2 = i;
          cout << "\n";
          cout << "\n";
         cout<< " WELCOME TO CLOTHING STORE MAMAGMENT SYSTEM  !! LOGIN IS SUCCWESSFULL.. ";
         cout<< "\n";
         cout << " SYSTEM IS LOADING PLEASE WAIT..."<<endl;

         for(int i=0; i<50;i++){
             cout<<" ";
             Sleep(150);
         }
          /*  time_t timetoday;
            time(&timetoday);
           checktime[i] = asctime(localtime(&timetoday));
           // cout << checktime[i];
            getch(); */
          //  storetimeinfile();
            return rolesA[i];
        }
        else
        {
            testcount++;
        }
    }
    if (testcount == userCount)
    {
        cout << endl;
        cout << "Invalid Username & Password combination .Please try again." << endl;
    }
    testcount = 0;
    clear_secreen();
    string test = "he";
    return test; 
} 

void storetimeinfile(){
     fstream tim;
    tim.open("time.txt", ios::out);
    cout << userCount;
    getch();
    for (int i = 0; i < userCount; i++)
    {
        tim << checktime[i] << endl;
        cout << "first "<< checktime[i] <<" end";
        getch();
    }
    tim.close();
}
// ------- Delete users..
void DeleteUsers()
{
    header();
  //   cout <<v;
    cout << " Please enter the username.";
    string user;
    cin.ignore();
    getline(cin, user);
    int check = 0;
    for (int i = 0; i < userCount; i++)
    {
        if (user == usernameA[i])
        {
            cout << "\n";
            cout << "  *** Sucessfully record found.. ***" << endl;
            cout << "\n";
            cout << " Are you sure you want to delete the user. Press (y) for yes and (N) for no..";
            char y;
            cin >> y;
            if (y == 'Y' | y == 'y')
            {
                check = 1;
                rolesA[i] = " ";
                usernameA[i] = "   ";

                cout << "\n";
                cout << " **** User has been successfully deleted..  ****";
                cout << "\n";
                change_password_in_File();
            }
            else
            {
                check = 1;
                cout << "\n";
                continue;
            }
        }
    }
    if (check == 0)
    {
        cout << "\n";
        cout << " ******    USER DOES NOT EXIST IN OUR DATABASE    ***** " << endl;
        cout << "\n";
    }
}

// ------------ ADD USER -------------------
void storetimeinfilee(){
    fstream tim;
    cout << userCount;
    getch();
    tim.open("time.txt", ios::out);
    for (int i = 0; i < userCount; i++)
    {
        tim << checktime[i] <<endl;
        cout << "first "<< checktime[i] <<" end";
        getch();
    }
    tim.close();

}
void addUser(string name, string pass, string role)
{
    usernameA[userCount] = name;
    passwordsA[userCount] = pass;
    rolesA[userCount] = role;
    string waqt = "0000";
    checktime[userCount] = waqt; 
    userCount++;

    change_password_in_File();
}

//  --------- THIS FUNCTION WILL LOAD CREDENTIALS INFORMATION WHICH WAS STORE IN FILE------
void loaddata()
{
    string line;
    fstream userload;
    fstream time;
    userload.open("users.txt", ios::in);
    time.open("time.txt", ios::in);
    while (!userload.eof())
    {
        
        getline(userload, line);

        usernameA[userCount] = s_user(line, 1);
        passwordsA[userCount] = s_user(line, 2);
        rolesA[userCount] = s_user(line, 3);

         getline(time, line);
        checktime[userCount] = gettime(line);
       // cout << checktime[userCount];
       //  getch();

        
        userCount++;
    }
    userload.close();
    time.close();
    userCount--;
}
// -------- THIS IS THE MENU OF SALESMAN -------------
string gettime(string line){
    string timeadd;

    for(int i =0 ; i<24; i++ ){
        
        timeadd = timeadd + line[i];
      //  cout << "t"<<timeadd;
       // getch();
        
}
 return timeadd;
}
char SalesManMenu()
{
    header();
    
    
    if(connt == 0){
     t = checktime[index2];
     connt = 1;
    }
    cout <<"________________________________________________"<<endl;
    cout <<"\n";
    cout << " LAST LOGIN TIME .."<<" "<< t<<" "<<endl;
     cout <<"________________________________________________"<<endl;
    cout << " *** Main menue of poragram   << USER MENU  ***" << endl;
    cout << "1) Press [1] for add items ." << endl;
    cout << "2) Press [2] for view all items ." << endl;
    cout << "3) Press [3] for search items ." << endl;
    cout << "4) Press [4] for update items." << endl;
    cout << "5) Press [5] for bill calculate ." << endl;
    cout << "6) Press [6] for see admin alerts. " << endl;
    cout << "7) Press [7] for search customer. " << endl;
    cout << "8) Press [8] for logout. " << endl;
    cout << "Enter choice from [1 -8]"
         << " ";
    char choice;
    cin >> choice;
    return choice;
}
// --------- THIS FUNCTION ADD ITEMS  -----------

void Add_items()
{
    header();
    cout << "*** Main menu of program ***  >>ADD ITEMS" << endl;
    cout << "Enter item name.";
    string item;
    cin >> item;
    cout << "Enter brand name.";
    string brand;
    cin >> brand;
    cout << "Enter no of quantity.";
    float quantity;
    cin >> quantity;
    cout << "Enter brand code.";
    float code;
    cin >> code;
    int contt =0;
    for(int i=0; i<count; i++){
        if(code == codeA[i]){
            cout<<"\n";
            cout << " PLEASE USE DIFFERENT BRAND CODE. IT IS ALREADY ASSIGNED TO ANOTHER ITEM/ PRODUCT.."<<endl;
            cout<<"\n";
            contt = 1;
        }
    }
    if(contt == 0){
    cout << "Enter price.";
    float price;
    cin >> price;

    // THIS FUNCTION STORE ALL ITEM IN TO ARRAY
    AddItemToArray(item, brand, quantity, code, price);

    //  & THIS WILL BE STORE IN TO FILE
    AddItemToFile2();
    }
}
void AddItemToArray(string item, string brand, float quantity, float code, float price)
{
    itemA[count] = item;
    brandA[count] = brand;
    quantityA[count] = quantity;
    codeA[count] = code;
    priceA[count] = price;
    count++;
}
void AddItemToFile2()
{

    fstream save;
    save.open("additems.txt", ios::out);
    for (int i = 0; i < count; i++)
    {
        save << itemA[i] << "," << brandA[i] << "," << quantityA[i] << "," << codeA[i] << "," << priceA[i] << endl;
    }
    save.close();
}
void header()
{
    HANDLE hc =GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hc, 0Xa);
    cout << R"(
            _____ _       _   _     _                  _____ _                    
            /  __ \ |     | | | |   (_)                /  ___| |                  
            | /  \/ | ___ | |_| |__  _ _ __   __ _     \ `--.| |_ ___  _ __ ___  
            | |   | |/ _ \| __| '_ \| | '_ \ / _` |     `--. \ __/ _ \| '__/ _ \ 
            | \__/\ | (_) | |_| | | | | | | | (_| |    /\__/ / || (_) | | |  __/ 
             \____/_|\___/ \__|_| |_|_|_| |_|\__, |    \____/ \__\___/|_|  \___| 
                                              __/ |                                                                                  
                                             |___/   
                                    ___  ___                                                  _   
                                   |  \/  |                                                 | |  
                                   | .  . | __ _ _ __   __ _  __ _  ___ _ __ ___   ___ _ __ | |_ 
                                   | |\/| |/ _` | '_ \ / _` |/ _` |/ _ \ '_ ` _ \ / _ \ '_ \| __|
                                   | |  | | (_| | | | | (_| | (_| |  __/ | | | | |  __/ | | | |_ 
                                   \_|  |_/\__,_|_| |_|\__,_|\__, |\___|_| |_| |_|\___|_| |_|\__|
                                                              __/ |                              
                                                             |___/                                                                                                                
   )";
    cout << "\n";
    SetConsoleTextAttribute(hc, 0X07);
}
void clear_secreen()
{
    cout << "Press any key to continue..";
    getch();
    system("CLS");
}

// --- THIS FUNCTION STORE ALL ITEMS FROM FILE TO ARRAY-------
void loaditems()
{
    fstream items;
    string c_line;
    items.open("additems.txt", ios::in);
    while (!items.eof())
    {
        getline(items, c_line);

        itemA[count] = s_user(c_line, 1);

        brandA[count] = s_user(c_line, 2);

        stringstream var1(s_user(c_line, 3));
        var1 >> quantityA[count];

        stringstream var2(s_user(c_line, 4));
        var2 >> codeA[count];

        stringstream var3(s_user(c_line, 5));
        var3 >> priceA[count];

        count++;
    }
    items.close();
    count = count - 1;
}

// ------- THIS IS COMMA SEPERATED FUNCTION -------------

string s_user(string line, int field)
{
    int comma = 1;
    string item;
    for (int i = 0; line[i] != '\0'; i++)
    {
        if (line[i] == ',')
        {
            comma++;
        }
        else if (comma == field)
        {
            item = item + line[i];
        }
    }
    return item;
}
// ------------- THIS FUNCTION SEE ALL ITEM WHICH WE STORED IN ARRAY  --------------
void view_items()
{
    int cont = 0;
    for (int j = 0; j < count; j++)
    {
        if (priceA[j] > 0)
        {

            cout << codeA[j] << "                " << brandA[j] << "             " << itemA[j] << "              " << quantityA[j] << "         " << priceA[j] << endl;
            cont++;
        }
    }

    if (cont == 0)
    {
        cout << "\n";
        cout << "*** you dont save any type of items. Please first add the items. ***" << endl;
        cout << "\n";
    }
}
// -------------- THIS FUNCTION IS USED FOR SEARCH PRODUCTS THROGH ITS ITEM NAME  ------------
void Search_items()
{
    int search_count = 0;
    cout << "Enter item name..";
    string item_name;
    cin >> item_name;
    for (int z = 0; z < count; z++)
    {
        if (item_name == itemA[z])
        {
            cout << "\n";
            cout << "                 ***   Successfully record found.   ***         " << endl;
            cout << "\n";
            cout << "Brand Code"
                 << "\t"
                 << "   "
                 << "Brand Name"
                 << "\t"
                 << "   "
                 << "Item Name"
                 << "\t       "
                 << "Quantity"
                 << "\t     "
                 << "Price" << endl;
            cout << codeA[z] << "                " << brandA[z] << "             " << itemA[z] << "              " << quantityA[z] << "         " << priceA[z] << endl;
            search_count++;
        }
    }
    cout << " " << endl;
    if (search_count == 0)
    {
        cout << " *** No record found. There is no product of this Search. ***" << endl;
    }
    search_count = 0;
}

// ------------- THIS FUNCTION IS USED TO UPDATE THE IEMS  ------------

void update_items()
{
    int update_count = 0;
    cout << "Enter item name..";
    string item_update;
    cin >> item_update;
    for (int i = 0; i < count; i++)
    {
    }
    for (int z = 0; z < count; z++)
    {
        if (item_update == itemA[z])
        {
            cout << "\n";
            cout << "                 **    Successfully record found.   **         " << endl;
            cout << "Brand Code"
                 << "\t"
                 << "   "
                 << "Brand Name"
                 << "\t"
                 << "   "
                 << "Item Name"
                 << "\t"
                 << "    "
                 << "   "
                 << "Quantity"
                 << "\t"
                 << "Price" << endl;
                 cout << "\n";
            cout << codeA[z] << "                " << brandA[z] << "             " << itemA[z] << "              " << quantityA[z] << "         " << priceA[z] << endl;
            cout << "--------------------------------------------------------------------------------------------------------------------" << endl;
            cout << "--------------------       ----------------Enter New Record-----------------------            ----------------------" << endl;
            cout << "--------------------------------------------------------------------------------------------------------------------" << endl;
            cout << "Enter item name.";
            cin >> itemA[z];
            cout << "Enter brand name.";

            cin >> brandA[z];
            cout << "Enter no of quantity.";
            cin >> quantityA[z];
            cout << "Enter brand code.";
            cin >> codeA[z];
            cout << "Enter price.";
            cin >> priceA[z];
            cout << "                 ** Your record is succesfully updated. **        " << endl;
            update_count++;

            // THIS WILL AGAIN STORED ALL ITEMS IN FILE

            AddItemToFile2();
        }
    }
    if (update_count == 0)
    {
        cout << "\n";
        cout << "  *** No record found. There is no product of this Search. ***" << endl;
    }
    update_count = 0;
}
void BillCalculate()
{
     bool id = false;
   //  bool discont = false;
    int billCount = 0;
    cout << "Enter item name :";
    string bill_item;
    cin >> bill_item;
    for (int b = 0; b < count; b++)
    {
        if (bill_item == itemA[b])
        {
            cout << "           DEAR USER THIS IS THE DETAILS OF ENTER PRODUCT..      " << endl;
            cout << "------------------------------------------------------------------------------------------------------------" << endl;
            cout << "Brand Code"
                 << "\t"
                 << "   "
                 << "Brand Name"
                 << "\t"
                 << "   "
                 << "Item Name"
                 << "\t"
                 << "Quantity"
                 << "\t"
                 << "Price" << endl;
            cout << "" << endl;
            cout << codeA[b] << "                " << brandA[b] << "            " << itemA[b] << "          " << quantityA[b] << "        " << priceA[b] << endl;
            cout << "------------------------------------------------------------------------------------------------------------" << endl;

            cout << "   Do you want to calculate the bill of this item  ?" << endl;
            cout << "       Press (y) for YES and (n) for NO.          ";
            char y;
            cin >> y;
            int index = b;
            if (y == 'y' || y == 'Y')
            {

                cout << "Enter item name:";
                cin >> item_nameA[bill_Count];
                if (item_nameA[bill_Count] == bill_item)
                {
                    cout << "Enter customer name:";
                    cin.ignore();
                    getline(cin, customer_nameA[bill_Count]);

                    cout << "Enter no of quantities:";
                    cin >> sale_quantityA[bill_Count];

                    if (sale_quantityA[bill_Count] <= quantityA[b])
                    {
                        cout << "Enter discount:";
                        int discount;
                        cin >> discount;

                        cout<< "Enter unique ID:";
                        cin >> idA[bill_Count];

                        for(int i =0; i<bill_Count; i++){
                            if(idA[bill_Count] == idA[i]){
                                 id = true;
                            }
                        }
                        if(id == true){
                            cout<<"\n";
                            cout<< " ID already assigned to another customer..";

                        }
                        if(id == false){

                        system("CLS");
                        cout << " *** CALCULATE BILL ***" << endl;
                        cout << "--------------------------------------------------------------" << endl;
                        cout << " ********             YOUR BILL IS        ***********         " << endl;
                        cout << "--------------------------------------------------------------" << endl;
                        cout << "Item name     :" << item_nameA[bill_Count] << endl;
                        cout << "Quantity sold : " << sale_quantityA[bill_Count] << endl;
                        cout << "Price per item  :" << priceA[b] << endl;
                        total_amountA[bill_Count] = priceA[b] * sale_quantityA[bill_Count];
                        cout << "Total amount    :" << total_amountA[bill_Count] << endl;
                        discountA[bill_Count] = (total_amountA[bill_Count] * discount) / 100;
                        cout << "Discount :     " << discountA[bill_Count] << endl;
                        cout<<"Customer name :"<<customer_nameA[bill_Count]<<endl;
                        cout << "Unique ID :"<< idA[bill_Count];
                        payamountA[bill_Count] = total_amountA[bill_Count] - discountA[bill_Count];
                        cout << "\n";
                        cout << "  *** Your payable amount is ..*****"
                             << "  " << payamountA[bill_Count] << endl;
                        bill_Count++;
                        quantityA[b] = quantityA[b] - sale_quantityA[bill_Count - 1];

                        // THIS FUCNTION ADD BILLS TO FILE AND FOR CUSTOMER RECORD

                        AddbillsToFile();

                        // THIS FUNCTION AGAIN USED BEACAUSE AFTER CALCULATE THE BILL QUANTITY IS LESSER SO WE WANT TO UPDATE RECORD IN FILE
                        AddItemToFile2();
                    }
                    }
                    else
                    {
                        char check;
                        cout << "\n";
                        cout << "  *** Quantity you have entered is greater the present quanitity. ***" << endl;
                    }
                }
                else
                {
                    cout << "\n";
                    cout << " Invalid product name entered." << endl;
                    bill_Count = 0;
                }
            }
            else if (y == 'n')
            {
                cout << "\n";
                continue;
            }
        }
        else
        {
            billCount++;
        }
    }
    if (billCount == count)
    {
         cout << "\n";
        cout << "No record found. There is no product of this Search." << endl;
    }
    billCount = 0;
}
void AdminAlerts()
{
    cout << " *** Main menue of poragram   << ADMIN ALERTS  ***" << endl;
    cout << "\n";
    int alert = 0;
    for (int t = 0; t < userCount; t++)
    {
        if (usernameA[index2] == usernameA[t])
        {
            cout << "[" << lineA[t] << "]" << endl;
            if (lineA[t] != " ")
            {
                cout << "\n";
                cout << "*** IF YOU WANT TO CLEAR THE MESSAGE PRESS (Y) FOR YES AND (N) FOR NO  ***  ";
                char y;
                cin >> y;
                if (y == 'Y' || y == 'y')
                {
                    cout << "---------------------------------------------------------- \n";
                    cout << "       Enter your login password..";
                    string password;
                    cin >> password;
                    if (password == passwordsA[index2])
                    {

                        fstream g;
                        g.open("messages.txt", ios::app);
                        g << " "
                          << "," << index2 << endl;
                        g.close();
                        lineA[t] = " ";
                        alert++;
                        cout << " " << endl;
                        cout<<" Message has been cleared....";
                    }
                    else
                    {
                        cout << "\n";
                        cout << " *** PASSWORD DOES NOT MATCH *** "<<endl;
                        alert = 1;
                       
                    }
                }
                else if (y == 'N' || y == 'n')
                {
                    alert = 1;

                    break;
                }
            }
            break;
        }
    }
    if (alert == 0)
    {
        cout << "\n";
        cout << " ** NO MESSAGE RECIEVED BY ADMIN ** " << endl;
    }
}

char AdminMenu()
{
    header();
    if(connt == 0){
     t = checktime[index2];
     connt = 1;
    }
    cout <<"________________________________________________"<<endl;
    cout <<"\n";
    cout << " LAST LOGIN TIME .."<<" "<< t<<" "<<endl;
     cout <<"________________________________________________"<<endl;
    cout << " *** Main menue of poragram   << ADMIN MENU  ***" << endl;
    cout << "-----------------------------------------------\n";
    cout << "1) Press [1] for search customer." << endl;
    cout << "2) Press [2] for view all items." << endl;
    cout << "3) Press [3] for history of all sales." << endl;
    cout << "4) Press [4] for Generate sales in order." << endl;
    cout << "5) Press [5] for change password. " << endl;
    cout << "6) Press [6] for Add users. " << endl;
    cout << "7) Press [7] for send message to users." << endl;
    cout << "8) Press [8] for Delete items." << endl;
    cout << "9) Press [9] for logout." << endl;
    cout << "Enter choice from [1 -9]"
         << " ";
    char admin_choice;
    cin >> admin_choice;
    return admin_choice;
}

// --------------- CUSTOMER RECORD FUNCTION ---------------

void searchcustomer()
{
    system("CLS");
    header();
   
    cout << " *** Main menue of poragram   << CUSTOMER SEARCH  ***" << endl;
    cout << "------------------------------------------------------\n";
    int customercount = 0;
    cout << "Enter customer name..";
    string name;
    cin >> name;
    cout<< "Enter Unique ID.";
    float id;
    cin >>id;

    for (int u = 0; u < bill_Count; u++)
    {

        if (name == customer_nameA[u] && id == idA[u])
        {
            cout << "\n";
            cout << "**************************************************************" << endl;
            cout << "  ** Customer record has been successfully found **" << endl;
            cout << "**************************************************************" << endl;
            cout << "\n";
            cout << "********    BELOW IS THE DETAILS OF CUSTOMER    ***************" << endl;
            cout << "                                                                 " << endl;
            cout << "Purchase Quantity  :" << sale_quantityA[u] << endl;
            cout << "Pay amount    : " << payamountA[u] << endl;
            cout << "Total amount  : " << total_amountA[u] << endl;
            cout << "Discount     : " << discountA[u] << endl;
            cout << "Purchase item   : " << item_nameA[u] << endl;
            customercount++;
            cout << "\n";
        }
    }
    if (customercount == 0)
    {
        cout << "\n";
        cout << "  ***********  CUSTOMER NOT FOUND  ************" << endl;
        cout << "\n";
    }
}

// ---------- THIS FUCNTION ADD BILLS TO FILE AND FOR CUSTOMER RECORD --------

void AddbillsToFile()
{
    fstream bill;
    bill.open("BILLS.txt", ios::out);
    for (int i = 0; i < bill_Count; i++)
    {

        bill << customer_nameA[i] << "," << sale_quantityA[i] << "," << payamountA[i] << "," << total_amountA[i] << "," << discountA[i] << "," << item_nameA[i] << "," << idA[i] << endl;
    }
    bill.close();
}
void loadbills()
{
    fstream items;
    string c_line;
    items.open("BILLS.txt", ios::in);
    while (!items.eof())
    {
        getline(items, c_line);

        customer_nameA[bill_Count] = s_user(c_line, 1);

        stringstream var1(s_user(c_line, 2));
        var1 >> sale_quantityA[bill_Count];

        stringstream var2(s_user(c_line, 3));
        var2 >> payamountA[bill_Count];

        stringstream var22(s_user(c_line, 4));
        var22 >> total_amountA[bill_Count];

        stringstream var4(s_user(c_line, 5));
        var4 >> discountA[bill_Count];

        item_nameA[bill_Count] = (s_user(c_line, 6));

        stringstream var5(s_user(c_line, 7));
        var5 >> idA[bill_Count];

        bill_Count++;
    }
    items.close();
    bill_Count--;
}

// ------------------ VIEW ALL SALES SOLD BY USERS -----------

void saleshistory()
{
    header();
    cout << " *** Main menue of poragram   << SALES HISTORY  ***" << endl;
    cout << "Customer Name  \t Pay Amount  \t Total Amount  \t Discount  \t Quantities  \t Product" << endl;
    for (int c = 0; c < bill_Count; c++)
    {
        if (payamountA[c] > 0)
        {

            // cout<<bill_customer_namee<<"\t"<<"\t"<<"\t"<<pay_amountt<<"\t"<<"\t"<<total_amountt<<"\t"<<"  "<<discountt<<"\t"<<"\t"<<bill_quantityy<<"\t"<<"\t"<<bill_item<<endl;
            cout << customer_nameA[c] << "           " << payamountA[c] << "                " << total_amountA[c] << "            " << discountA[c] << "           " << sale_quantityA[c] << "           " << item_nameA[c] << endl;
        }
    }
}
//-------------------END --------------

// ---------------------SALES IN ORDER  -------------
// ---------------------THIS FUNCTION SORT THE DATA ---------
int GenerateSales()
{

    int id = -1;
    int index;
    for (int y = 0; y < bill_Count; y++)
    {
        if (id < payamountB[y])
        {
            id = payamountB[y];
            index = y;
        }
    }
    return index;
}
// --------------------CHANGE PASSWORD FUNCTION ----------------
void change_Password()
{
    header();
    cout << " *** Main menue of poragram   << CHANGE PASSWORD  ***" << endl;
    cout << "------------------------------------------------------\n";
    int change_user_Count = 0;
    cout << "Enter username which you want to chnage the password..";
    string changeusername;
    cin >> changeusername;

    for (int l = 0; l < userCount; l++)
    {
        if (usernameA[l] == changeusername)
        {
            cout << "\n";
            cout << "************* SUCCESSFULLY RECORD FOUND ********************" << endl;
            cout << "\n";
            cout << "Enter new password...";
            cin >> passwordsA[l];
            cout << "Enter Role..";
            string rol = rolesA[l];
            cin >> rolesA[l];
            if (rolesA[l] == "ADMIN" || rolesA[l] == "SALESMAN")
            {
                cout << "\n";
                cout << "   ---------------------      Password has been successfully changed  ------------------------       " << endl;
                change_password_in_File();
                break;
            }
            else
            {
                rolesA[l] = rol;
                cout << " *** Invalid role enter ***" << endl;
            }
            cout << "                                                        " << endl;
        }
        else
        {
            change_user_Count++;
        }
    }
    if (change_user_Count == userCount)
    {
        cout << "\n";
        cout << " ******    USER DOES NOT EXIST IN OUR DATABASE    *****" << endl;
        cout << "\n";
    }
}
// --- THIS FUNCTION IS USE FOR CHANGE PASSWORD AND ADD USERS IN FILE ------------

void change_password_in_File()
{
    fstream users;
    users.open("users.txt", ios::out);
    for (int i = 0; i < userCount; i++)
    {

        users << usernameA[i] << "," << passwordsA[i] << "," << rolesA[i] << endl;
    }
    users.close();
}

// ------------- TO USERS SEND MESSAGE FUNCTION ----------------

void sendMessage()
{
    header();
    cout << " *** Main menue of poragram   << SEND MESSAGES  ***" << endl;
    cout << "\n";
    cout << "   *******  Enter username which you want to send the message.  ********" << endl;
    string name;
    cin >> name;
    int sendcount = 0;
    for (int u = 0; u < userCount; u++)
    {
        if (name == usernameA[u])
        {
            cin.ignore();
            cout << "Please Enter the message." << endl;
            getline(cin, lineA[u]);
            sendMessageinfile(lineA[u], u);
            cout << "\n";
            cout << "  *** Message successfully sent ****" << endl;
            break;
        }
        else
        {
            sendcount++;
        }
    }
    if (sendcount == userCount)
    {
        cout << "\n";
        cout << "  **** USER DOES NOT EXIST IN OUR DATABASE. **** " << endl;
    }
}
void sendMessageinfile(string line, int index)
{

    fstream message;
    message.open("messages.txt", ios::app);
    message << line << "," << index << endl;
    message.close();
}
void loadmessage()
{
    fstream f;
    string l;
    f.open("messages.txt", ios::in);
    while (!f.eof())
    {
        getline(f, l);

        stringstream var1(s_user(l, 2));
        var1 >> messageindex;

        lineA[messageindex] = s_user(l, 1);
        messageindex = 10;
    }
    f.close();
}
void Deleteitems()
{
    int d_Count = 0;
    header();
    cout << "Enter item name.";
    string item;
    cin >> item;
    for (int j = 0; j < count; j++)
    {
        if (item == itemA[j])
        {
            cout << " **** SUCCESSFULLY RECORD FOUND  ****" << endl;

            cout << " " << endl;
            cout << "  ARE YOU SURE YOU WANT TO DELETE THE RECORD.. (y) for yes and (n) for no..." << endl;
            char y;
            cin >> y;
            if (y == 'y' || y == 'Y')
            {

                priceA[j] = 0;
                itemA[j] = "             ";
                cout << " [ Your item has been successfully deleted.. ] " << endl;
                cout << "\n";
                d_Count = 1;

                AddItemToFile2();
            }
            else if (y == 'n' || y == 'N')
            {
                d_Count = 1;
                break;
            }
        }
    }
    if (d_Count == 0)
    {
        cout << "\n";
        cout << " THERE IS NO RECORD OF THIS PRODUCT.. " << endl;
        cout << "\n";
    }
}
// ****************************** SECTION C ROLL NO 2021-CS-165 ***********************************