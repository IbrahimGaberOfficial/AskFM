#include <bits\stdc++.h>
using namespace std;
string USERS_FILE = "data/users_data.txt";

class authentication{
    authentication(){}
    // function to read from the file line by line.
    // function to seprate every line contents.
    // function to check the seprated values with the check function
    // values.
    pair<string, int> check_user_name_and_password(string user_name, int password)
    {
        return make_pair(, );
    }
}

int files_fun(){
     ifstream fin("input_file.txt");
    if(fin.fail()){
        cout << "\nInput file can not be opened.\n";
        return 0;
    }
    string A, B, C;

    ofstream fout ("./data/output_file.txt", ios::out | ios::app);
    if(fout.fail()){
        cout << "\nOutput file can not be opened.\n";
        return 0;
    }
    while (getline(fin, A))
    {
        fout << A << endl;
    }
    fout << endl;
    


    fin.close();
    fout.close();

    return 1;
}
void string_stream(){
    string str = "ali,23,m";
    istringstream iss(str);

    string name;
    int age;
    char gender;
    iss >> name >> age >> gender;
    cout << name << " \n" << age << " \n" << gender << endl;

    ostringstream oss;
    string new_str;
    oss << name << age << gender << " O\n";
    new_str = oss.str();
    cout << new_str << endl;
}
void tsetCin(){
    string user_data = "13,mostafa,111,mostafa_saad_ibrahim,mostafa@gmail.com,-1";
    // string  splited[] = user_data.split(",");
    vector<string> seprated_data;
    istringstream iss(user_data);
    while(iss.good()){
        string subStr;
        getline(iss, subStr, ',');
        seprated_data.push_back(subStr);
    }
    
    for(int i = 0; i < seprated_data.size(); i++){
        cout << "\n" << seprated_data[i];
    }

}
int main(){
//     files_fun();
// string_stream();
    tsetCin();
    // int x , y;
    // cin >> x;
    // cout << x << endl;
    // cin >> y ;
    // cout << y << endl;
   
return 0;
}