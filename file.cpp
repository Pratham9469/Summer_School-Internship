#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
/*ofstream file("example.txt",ios::app);
if(!file){
cout<<"error opening file";
return 1;
}
file<<"\nHELLO WORLD"<<endl<<"File handling test";
file.close();*/
/*ofstream my_file("example.txt");
/*if(!my_file.is_open()){
    cout<<"Error opening the file."<<endl;
    return 1;
    }
    if(my_file.fail())
            cout<<"Error opening the file."<<endl;
    return 1;

    return 0;
}*/
//open a text file for reading
/*ifstream my_file("example.txt");
if(!my_file){
        //check the file for errors
    cout<<"Error:Unable to open this file."<<endl;
    return 1;
}
//store the contents of the file in "line" string
string line;
while(!my_file.eof()){
        //store the current line of the file
        //in the "line" variable
    getline(my_file,line);
    //print the line variable
    cout<<line<<endl;
}
my_file.close();
return 0;
}*/
//open a text file for writing
/*ofstream my_file("example.txt");
//check the file for errors
if(!my_file){
    cout<<"Error:Unable to open this file."<<endl;
    return 1;
}
my_file<<"Ruder 10"<<endl;
my_file<<"Bhuvan 20"<<endl;
my_file<<"Smriti 30"<<endl;
my_file<<"Aakash 40"<<endl;
my_file<<"Pratham 50"<<endl;
//close the file
my_file.close();
return 0;
}*/
//open a text file for appending
//ofstream my_file("example.txt", ios::app);
ifstream my_file("example.txt");
//if the file does not open successfully,print an error message
if(!my_file){
    cout<<"Failed to open the file for appending."<<endl;
    return 1;
}
map<string, int>freq;
map<char, int>freq1;
string line;
int number;
int sum=0;
int count=0;
string s="";
while(!my_file.eof()){
    my_file>>line>>number;
    s+=line;
    freq[line]++;
    //cout<<endl;
//    string+=line;
    sum+=number;
    count++;
}
//count--;
//sum-=number;
//sum=number;
cout<<"\nsum: "<<sum;
cout<<"\nAverage: "<<sum/count<<endl;
for(auto i:freq){
    cout<<i.first<<" "<<i.second<<endl;
}
//append multiple lines to the file
//my_file<<"Sambhav 60"<<endl;
//my_file<<"Dhananjay 10"<<endl;
//close the file
my_file.close();
return 0;
}

