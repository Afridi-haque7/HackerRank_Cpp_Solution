#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{
    private:
        int val, val2;
        string s1, s2, s3;
    public:
        void set_age(int a) {
            val = a;
        }
        int get_age() {
            return val;
        }
        void set_standard(int s){
            val2 = s;
        }    
        int get_standard(){
            return val2;
        }
        void set_first_name(string str1){
            s1 = str1;
        }
        string get_first_name(){
            return s1;
        }
        void set_last_name(string str2){
            s2 = str2;
        }
        string get_last_name(){
            return s2;
        }
        void to_string(){
            
            cout<<val<<","<<s1<<","<<s2<<","<<val2;
            
        }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    st.to_string();
    
    return 0;
}
