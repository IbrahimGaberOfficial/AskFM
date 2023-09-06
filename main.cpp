#include <bits\stdc++.h>
using namespace std;
#define USERS_FILE  "data/users_data.txt"
#define SEPRATED_VALUES tuple<string, int, int, string, string, int>

SEPRATED_VALUES user_data;

class authentication{
public:
    // authentication(){}
    // function to read from the file line by line.
    // function to seprate every line contents.
    // function to check the seprated values with the check function
    // values.
   vector<string> tuble_seprate_this_line(string current_line, int indx){
    istringstream iss(current_line);
    string str;
    vector<string> values;
    while(iss.good()){
        getline(iss, str, ',');
        values.push_back(str);
    }
    if(values.size() != 6){
        cout << "\nThere is a problem in data base in line " << indx << endl;
        exit(1);
    }
    return values;

   }
    bool check_this_line(string current_line, int idx, string user_name, int password){
        vector<string> values =  tuble_seprate_this_line(current_line, idx); //vector_seprate_this_line
        if(user_name != values[0]){
            // cout << "\nUser name not corrent, Enter valid user name.\n";
            return false;
        }
        int values_password = stoi(values[1]);
        if(password != values_password){
            // cout << "\nPassword not correct for user name " << user_name << ", Enter valid password.\n";
            return false;
        }
        get<0> (user_data) = values[0];
        get<1> (user_data) = values_password;
        get<2> (user_data) = stoi(values[2]);
        get<3> (user_data) = values[3];
        get<4> (user_data) = values[4];
        get<5> (user_data) = stoi(values[5]);
        return true;

    }
    bool check_user_name_and_password(string user_name, int password)
    {
        ifstream fin(USERS_FILE);
        if(fin.fail()){
            cout << "\nInput file can not be opened.\n";
            exit(1);
        }
        string current_line;
        int idx = 0;
        while(getline(fin, current_line)){
            // cout << current_line << endl;
            if(check_this_line(current_line, idx, user_name, password)){
                cout << "exsist user .\n";
                return true;
            }
            idx++;
        }
        fin.close();
        cout << "invalid user name or password\n";
        return false;
        // return current_line;

    }
};

int main(){
    authentication auth;
    string current_line;
   cout << auth.check_user_name_and_password("lail_pro", 132);
   
return 0;
}