#include<iostream>
using namespace std;

class BioData {
    private:
    string name;
    int age;
    string date_of_birth;
    string place_of_birth;
    string qualifaction;
    string percentage;
    string soft_skills;
    string coding_skills;

    public:
    void setData(string n, int a, string dob,string pob, string q, string p, string ss, string cs)
    {
        name = n;
        age = a; 
        date_of_birth = dob;
        place_of_birth = pob;
        qualifaction = q;
        percentage = p;
        soft_skills = ss;
        coding_skills = cs;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Date Of Birth: "<<date_of_birth<<endl;
        cout<<"Place Of Birth: "<<place_of_birth<<endl;
        cout<<"Qualifaction: "<<qualifaction<<endl;
        cout<<"Percentage: "<<percentage<<endl;
        cout<<"Soft Skills: "<<soft_skills<<endl;
        cout<<"Coding Skills: "<<coding_skills<<endl;
    }
};
int main()
{
    BioData myBio;
    myBio.setData("Kuldeep Lahare", 18, "00/00/0000", "Adbhar(Sakti)", "10th , 12th" , "10th = 00.0% , 12th = 00.0%", "Reading a Book, Coding, Playing a Cricket", "Only C Programming");
    myBio.display();
    return 0;
}