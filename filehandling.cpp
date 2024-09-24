#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
using namespace std;
int main(){
    // first we should create an object of ofstream which is used to open the file
    /*ofstream my_file;
    my_file.open("sachin.txt");//we are opening any file if the file is not present 
    // it creates the file by own
    // now we are going to write
    my_file<<"Hello World!";
    my_file.close();*/
    
  /* ifstream my_file;
    my_file.open("sachin.txt");
    char c;// ye har ek character ko read karega file kee
    c = my_file.get();
    while(!my_file.eof()){
        cout<<c;
        c=my_file.get();
    }
    my_file.close();
*/
// how to store an array into a file;
    /*vector<int>a(5);
    for(int i = 0;i<5;i++){
        cin>>a[i];
    }
    ofstream my_file;
    my_file.open("zoom.txt");
    my_file<<"Original list: \n";
    for(int i = 0;i<5;i++){
        my_file<<a[i]<<" ";
        // i am writing inside array
    }
    my_file<<"\nAfter Sorting: \n";
    sort(a.begin(),a.end());
    for(int i = 0;i<5;i++){
        my_file<<a[i]<<" ";
        // i am writing inside array
    }
    my_file.close();*/
   /*ifstream my_file("zoom.txt"); // Open the file for reading

    if (!my_file.is_open()) {
        cerr << "Error opening the file!" << endl;
        return 1;
    }

    string line;
    while (getline(my_file, line)) { // Read the file line by line
        cout << line << endl; // Print each line to the console
    }

    my_file.close(); // Close the file
    return 0;*/
    // You are using GCC

    // ofstream my_file;
    // my_file.open("quotes.txt");
    // if(!my_file.is_open()){
    //     cout<<"There is error in opening the file";
    //     return 1;
    // }
    // string word;
    // cin>>word;
    // while(word!="."){
       
    //     my_file<<word<<" ";
        
    //     cin >> word;
    // }
    // my_file.close();
    ofstream my_file;
    my_file.open("numbers.txt");
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        int data;
        cin>>data;
        my_file<<data<<endl;
    }
    my_file.close();
    ifstream file;
    file.open("numbers.txt");
    int num,sum=0;
    while(file>>num){
        sum+=num;
    }
    cout<<"Sum will be: "<<sum;
    file.close();
}